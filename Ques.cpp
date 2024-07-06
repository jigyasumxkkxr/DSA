// #include <iostream>
// using namespace std;

// class Node {
// public:
//   int data;
//   Node *next;
//   Node() { this->next = NULL; }
//   Node(int data) {
//     this->data = data;
//     this->next = NULL;
//   }
// };

// void printLL(Node *head) {
//   Node *temp = head;
//   while (temp != NULL) {
//     cout << temp->data << " ";
//     temp = temp->next;
//   }
//   cout << endl;
// }

// void insertatHead(Node *&head, Node *&tail, int data) {
//   Node *insert = new Node(data);
//   if (head == NULL) {
//     head = insert;
//     tail = insert;
//   } else {
//     insert->next = head;
//     head = insert;
//   }
// }

// Node* reverse(Node* &head){
//   Node* prev=NULL;
//   Node* curr=head;
//   Node* forward=curr->next;
//   while(curr!=NULL){
//     forward=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=forward;
//   }
//   head=prev;
//   return head;
// }

// void addone(Node* &head){
//   Node* temp=head;
//   int carry=0;
//   temp->data+=1;
//   if(temp->data>=10){
//     temp->data-=10;
//     carry=1;
//   }
//   Node* prev=temp;
//   temp=temp->next;
//   while(temp!=NULL){
//     if(carry>0){
//       temp->data+=1;
//       carry=0;
//     }
//     if(temp->data>=10){
//       temp->data-=10;
//       carry=1;
//     }
//     prev=temp;
//     temp=temp->next;
//   }
//   if(carry>0){
//     Node* addnode=new Node(1);
//     prev->next=addnode;
//   }
//   // return head;
// }

// Node* add(Node* &head1,Node* &head2){
//   Node* temp1=head1;
//   Node* temp2=head2;
//   Node* t1=reverse(temp1);
//   Node* t2=reverse(temp2);
//   // printLL(t1);
//   // printLL(t2);
//   int x=0;
//   int carry=0;
//   Node* h=NULL;
//   Node* t=NULL;
//   while(t1!=NULL && t2!=NULL){
//     x=t1->data+t2->data+carry;
//     // cout<<x<<endl;
//     carry=0;
//     if(x>=10){
//       x-=10;
//       carry++;
//       // cout<<"*"<<endl;
//     }
//     insertatHead(h,t,x);
//     // printLL(h);
//     t1=t1->next;
//     t2=t2->next;
//   }
//   // printLL(t1);
//   // printLL(t2);
//   while(t1!=NULL){
//     x=t1->data+carry;
//     carry=0;
//     // cout<<"+"<<endl;
//     if(x>=10){
//       x-=10;
//       carry++;
      
//     }
//     insertatHead(h,t,x);
//     t1=t1->next;
//   }
  
  
//   while(t2!=NULL){
//     x=t2->data+carry;
//     carry=0;
//     if(x>=10){
//       x-=10;
//       carry++;
//       // cout<<"-"<<endl;
//     }
//     insertatHead(h,t,x);
//     t2=t2->next;
//   }
  
//   if(carry>0){
//     insertatHead(h,t,1);
//     // cout<<"*"<<endl;
//   }
//   return h;
// }
// int main(){
//   Node* head=NULL;
//   Node* tail=NULL;
//   insertatHead(head,tail,9);
//   insertatHead(head,tail,9);
//   insertatHead(head,tail,9);
//   insertatHead(head,tail,9);
//   Node* head1=NULL;
//   Node* tail1=NULL;
//   insertatHead(head1,tail1,1);
//   insertatHead(head1,tail1,1);
//   Node* ans=add(head,head1);
//   printLL(ans);
// }