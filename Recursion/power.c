int power(int num, int pow){
  // Write your code here
  if(pow<0)
    return -1;
  if(pow==0)
    return 1;
  return num*power(num,pow-1);
}
