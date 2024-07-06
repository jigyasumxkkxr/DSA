#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node() { this->next = NULL; }
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void printLL(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertatHead(Node *&head, Node *&tail, int data) {
  Node *insert = new Node(data);
  if (head == NULL) {
    head = insert;
    tail = insert;
  } else {
    insert->next = head;
    head = insert;
  }
}

void insertatTail(Node *&head, Node *&tail, int data) {
  Node *insert = new Node(data);
  if (head == NULL) {
    head = insert;
    tail = insert;
  } else {
    tail->next = insert;
    tail = insert;
  }
}

Node *createTail(Node *&head) {
  Node *temp = head;
  if (head == NULL) {
    return NULL;
  } else {
    while (temp->next != NULL) {
      temp = temp->next;
    }
    return temp;
  }
}

int getLenght(Node *&head) {
  Node *temp = head;
  int len = 0;
  while (temp != NULL) {
    temp = temp->next;
    len++;
  }
  return len;
}

// 0th Index means if Position==0 then it will be at Head
void insertatPosition(Node *&head, Node *&tail, int data, int position) {
  if (position < 0) {
    cout << "Enter Valid Position" << endl;
    return;
  }
  int len = getLenght(head);
  if (position > len) {
    cout << "Enter Valid Position" << endl;
    return;
  }
  if (position == 0) {
    insertatHead(head, tail, data);
    return;
  }
  if (position == len) {
    insertatTail(head, tail, data);
    return;
  }
  Node *temp = head;
  Node *insert = new Node(data);
  int x = 1;
  while (x < position) {
    temp = temp->next;
    x++;
  }
  insert->next = temp->next;
  temp->next = insert;
}

void deletion(Node *&head, Node *&tail, int position) {
  if (head == NULL) {
    cout << "LL is Empty" << endl;
    return;
  }
  if (head == tail) {
    Node *temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }
  if (position == 1) {
    Node *temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;
    return;
  }
  int len = getLenght(head);
  if (position == len) {
    Node *temp = head;
    while (temp->next->next != NULL) {
      temp = temp->next;
    }
    tail = temp;
    temp = temp->next;
    delete temp;
    tail->next = NULL;
    return;
  }
  Node *temp = head;
  int x = 2;
  while (x < position) {
    temp = temp->next;
    x++;
  }
  Node *deletenode = temp->next;
  temp->next = temp->next->next;
  delete deletenode;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  insertatHead(head, tail, 10);
  insertatHead(head, tail, 20);
  insertatHead(head, tail, 30);
  insertatTail(head, tail, 100);
  printLL(head);

  insertatPosition(head, tail, 200, 0);
  insertatPosition(head, tail, 40, 1);
  insertatPosition(head, tail, 50, 6);
  insertatPosition(head, tail, 60, 3);
  insertatPosition(head, tail, 70, 2);
  printLL(head);

  deletion(head, tail, 1);
  deletion(head, tail, 8);
  deletion(head, tail, 4);
  printLL(head);
  // cout<<getLenght(head)<<endl;
}
