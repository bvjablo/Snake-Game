#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

//used by Queue
struct Node {
  int row;
  int column;

  Node* point;
};

static Node* front = NULL;
static Node* rear = NULL;

#endif
