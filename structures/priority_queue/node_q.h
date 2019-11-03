 
#ifndef NODE_Q_H
#define NODE_Q_H
#include <iostream>
//using namespace std;
class Node_q{
private:
    int site;
    bool site_p;

public:    
    Node_q(int site_,bool site_p_);
    int get_s();    
    ~Node_q();    
};

Node_q::Node_q(int site_,bool site_p_){
    site=site_;
    site_p=site_p_;    
}
int Node_q::get_s(){
  return site;
}
#endif