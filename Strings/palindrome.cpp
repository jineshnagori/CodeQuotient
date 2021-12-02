bool isPalindrome(string str){
  // Write your code here
  string s = str;
  int i=0,j=str.size()-1;
  while(i < j)
  {
    if(str[i] != str[j])
      return false;
    i++;
    j--;
  }
  return true;
}
