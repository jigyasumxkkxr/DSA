// #include <iostream>
// using namespace std;

// class Node {
// public:
//   int data;
//   Node *next;
//   Node *prev;
//   Node(){
//     this->next = NULL;
//     this->prev=NULL;
//   }
//   Node(int data){
//     this->data=data;
//     this->prev=NULL;
//     this->next=NULL;
//   }
// };

// void print(Node *&head){
//   Node *temp=head;
//   while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
//   cout<<endl;
// }

// int getLenght(Node *&head) {
//   Node *temp = head;
//   int len = 0;
//   while (temp != NULL) {
//     temp = temp->next;
//     len++;
//   }
//   return len;
// }

// void insertatHead(Node *&head,Node *&tail,int data){
//   Node* insert=new Node(data);
//   if(head==NULL){
//     head=insert;
//     tail=insert;
//   }
//   else{
//     head->prev=insert;
//     insert->next=head;
//     head=insert;
//   }
// }

// void insertatTail(Node *&head,Node *&tail,int data){
//   Node* insert=new Node(data);
//   if(head==NULL){
//     head=insert;
//     tail=insert;
//   }
//   else{
//     tail->next=insert;
//     insert->prev=tail;
//     tail=insert;
//   }
// }

// void insertatPosition(Node *&head,Node *&tail,int data,int position){
//   if(position<=0){
//     insertatHead(head,tail,data);
//     return;
//   }
//   int len=getLenght(head);
//   if(position>=len){
//     insertatTail(head,tail,data);
//     return;
//   }
//   Node* insert=new Node(data);
//   Node* temp=head;
//   int x=1;
//   while(x<position){
//     temp=temp->next;
//     x++;
//   }
//   insert->next=temp->next;
//   insert->prev=temp;
//   temp->next->prev=insert;
//   temp->next=insert;
// }

// void deletion(Node *&head,Node *&tail,int position){
//   if(head==NULL){
//     cout<<"LL is Empty"<<endl;
//     return;
//   }
//   if(head==tail){
//     Node* temp=head;
//     head=NULL;
//     tail=NULL;
//     delete temp;
//     return;
//   }
//   if(position==1){
//     Node* temp=head;
//     head=temp->next;
//     head->prev=NULL;
//     temp->next=NULL;
//     delete temp;
//     return;
//   }
//   int len=getLenght(head);
//   if(position==len){
//     Node* temp=tail;
//     tail=temp->prev;
//     tail->next=NULL;
//     temp->prev=NULL;
//     delete temp;
//     return;
//   }
//   int x=1;
//   Node* temp=head;
//   while(x<position){
//     temp=temp->next;
//     x++;
//   }
//   temp->next->prev=temp->prev;
//   temp->prev->next=temp->next;
//   temp->next=NULL;
//   temp->prev=NULL;
//   delete temp;
//   return;
// }
// int main() {
//   Node* head=NULL;
//   Node* tail=NULL;
//   insertatHead(head,tail,10);
//   insertatHead(head,tail,20);
//   insertatTail(head,tail,30);
//   insertatPosition(head,tail,40,0);
//   insertatPosition(head,tail,50,4);
//   insertatPosition(head,tail,60,2);
//   deletion(head,tail,1);
//   deletion(head,tail,5);
//   deletion(head,tail,3);
//   print(head);
  
//   return 0;
// }