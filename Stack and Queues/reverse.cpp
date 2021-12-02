/* class CQStack{
    public:
        CQStack(int s); // constructor
        void push(int j); // Add element on the top of the stack
        int pop();  // Remove element from the top of the stack
        bool isEmpty(); // Return true is stack is empty
        bool isFull(); // Return true if stack is full
    };
    CQStack class already defined as per the above blueprint
*/
string reverseString(CQStack *stack,string s){
  	 string ans = "";
    CQStack *sp = new CQStack(s.length());
    for (int i = 0; i < s.length(); i++)
    {
        sp->push(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        int temp = sp->pop();
        ans += temp;
    }
    return ans;
}
