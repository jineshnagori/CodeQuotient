int isAnagram(string str1, string str2){
	int n1=str1.length();
  int n2=str2.length();
  if(n1!=n2)
  {
    return 0;
  }
  int char1[256]={0};
  int char2[256]={0};
  int i;
  for(int i=0;str1[i]&&str2[i];i++)
  {
    char1[str1[i]]++;
    char2[str2[i]]++;
  }
  for(int i=0;i<256;i++)
  {
    if(char1[i]!=char2[i])
      return 0;
  }
  return 1;
}
