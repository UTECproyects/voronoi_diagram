#include "structures/priority_queue/p_queue.h"
int main(){  
  P_queue p_queue(my_comp);
  Node_q *temp=new Node_q(1,true);
  p_queue.push(temp);
  temp=new Node_q(5,true);
  p_queue.push(temp);
  temp=new Node_q(2,true);
  p_queue.push(temp);
  temp=new Node_q(7,true);
  p_queue.push(temp);

    while(!p_queue.empty()) 
    {
        Node_q* p = p_queue.top();
        cout << p->get_s() << "\n";
        p_queue.pop();
    }



}