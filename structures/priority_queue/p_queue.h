#include <iostream>
#include <queue>
#include "node_q.h"
using namespace std;

using my_container_t = std::vector<Node_q*>;

auto my_comp = [](Node_q*& e1, Node_q*& e2) {
     return e1->get_s() < e2->get_s(); 
};

using P_queue = priority_queue<Node_q*,my_container_t,decltype(my_comp)>;
