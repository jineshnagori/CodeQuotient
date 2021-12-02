#include<stack>
void reverseKElementsQueue(Queue* queue,int k){
  // Write your code here
  int n=queue->size();
  if(k>n) return ;
  stack<int> s;
  for(int i=0;i<k;i++)
  {
    s.push(queue->deQueue());
  }
  while(!s.empty())
  {
    queue->enQueue(s.top());
    s.pop();
  }
  for(int i=0;i<n-k;i++)
  {
    queue->enQueue(queue->deQueue());
  }
}
