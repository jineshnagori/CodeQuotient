int addDigitByDigit(int a,int b,int c){
  int sum = 0, carry = 0, placeValue = 1;
    while (a || b || c)
    {
        int x = (a % 10) + (b % 10) + (c % 10) + carry;
        carry = x / 10;
        x = x % 10;
        sum += x * placeValue;
        placeValue = placeValue * 10;
        a = a / 10;
        b = b / 10;
        c = c / 10;
    }
    if (carry)
        sum += carry * placeValue;
    return sum;
}
