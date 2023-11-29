#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

class Linked_list
{
  private:
    Node *head;
    Node *tail;

  public:
    Linked_list()
    {
      head = NULL;
      tail = NULL;
    }

    void add_node(int n)
    {
      Node *temp = new Node;
      temp->data = n;
      temp->next = NULL;

      if (head == NULL) {
        head = temp;
        tail = temp;
      } else {
        tail->next = temp;
        tail = tail->next;
      }
    }
};

