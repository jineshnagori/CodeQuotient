string isPangram(vector<string> &strings){
  // Write your code here
  string ans;
  for(int i=0; i<strings.size(); i++)
  {
    int freq[26]={0};
    int cnt=0;
    for(int j=0; j<strings[i].size(); j++)
    {
      if(strings[i][j] != ' ')
        freq[strings[i][j] - 'a']++;
    }
    for(int i=0; i<26; i++)
    {	
      if(freq[i] < 1)
        cnt = 1;
    }
    if(cnt == 1)
      ans.push_back('0');
    else 
      ans.push_back('1');
  }
  return ans;
}
