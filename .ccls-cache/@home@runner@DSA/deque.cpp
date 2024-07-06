// #include<iostream>
// #include<deque>
// using namespace std;
// class Deque{
// public:
//   int *arr;
//   int size;
//   int front;
//   int rear;
//   Deque(int k){
//     arr=new int[k];
//     this->size=k;
//     this->front=-1;
//     this->rear=-1;
//   }
//   void pushfront(int value){
//     //empty case
//     //overflow case
//     //circular case
//     //normal case
//     if(front==-1 && rear==-1){
//       front++;
//       rear++;
//       arr[front]=value;
//       return;
//     }
//     else if(rear-front==size-1 || front-rear==1){
//       cout<<"OverFlow..."<<endl;
//       return;
//     }
//     else if(front==0 && rear!=size-1){
//       front=size-1;
//       arr[front]=value;
//       return;
//     }
//     else{
//       front--;
//       arr[front]=value;
//       return;
//     }
//   }
//   void pushback(int value){
//     //empty case
//     //overflow case
//     //circular case
//     //normal case
//     if(front==-1 && rear==-1){
//       front++;
//       rear++;
//       arr[front]=value;
//       return;
//     }
//     else if(rear-front==size-1 || front-rear==1){
//       cout<<"OverFlow"<<endl;
//       return;
//     }
//     else if(rear==size-1 && front!=0){
//       rear=0;
//       arr[rear]=value;
//       return;
//     }
//     else{
//       rear++;
//       arr[rear]=value;
//       return;
//     }
//   }
//   void popfront(){
//     //underflow
//     //single element
//     //circular case
//     //normal case
//     if(front==-1){
//       cout<<"UnderFlow..."<<endl;
//       return;
//     }
//     else if(front==rear){
//       arr[front]=-1;
//       front--;
//       rear--;
//       return;
//     }
//     else if(front==size-1){
//       arr[front]=-1;
//       front=0;
//       return;
//     }
//     else{
//       arr[front]=-1;
//       front++;
//       return;
//     }
//   }
//   void popback(){
//     //underflow case
//     //single element case
//     //circular case
//     //normal case
//     if(rear==-1){
//       cout<<"UnderFlow..."<<endl;
//       return;
//     }
//     else if(front==rear){
//       arr[rear]=-1;
//       rear--;
//       front--;
//       return;
//     }
//     else if(rear==0){
//       arr[rear]=-1;
//       rear=size-1;
//       return;
//     }
//     else{
//       arr[rear]=-1;
//       rear--;
//     }
//   }
//   bool isEmpty(){
//     if(front==-1 && rear==-1){
//       return true;
//     }
//     return false;
//   }
//   void print(){
//     for(int i=0;i<size;i++){
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//   }
// };
// int main(){
//   Deque de(5);
//   de.pushback(10);
//   de.pushfront(20);
//   de.pushback(30);
//   de.pushfront(40);
//   de.pushback(50);
//   de.pushback(10);
//   de.print();
//   return 0;
// }