int countWords(char str[]) 
{
  int cnt =0,i;
  for(i=0; str[i] != '\0'; i++)
  {
    if(str[i] == ' ' && str[i-1] !=  ' ')
      cnt++;
  }
  if(i == 0)
    return 0;
  else 
    return cnt+1;
}
