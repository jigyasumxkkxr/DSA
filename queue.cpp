// #include<bits/stdc++.h>
// using namespace std;
// class Queue{
//   public:
//     int *arr;
//     int size;
//     int front;
//     int rear;
//     Queue(int size){
//       arr=new int[size];
//       this->size=size;
//       front=-1;
//       rear=-1;
//     }
//     void push(int data){
//       if(rear==size-1){
//         cout<<"OverFlow..."<<endl;
//       }
//       else{
//         if(front==-1){
//           front++;
//           rear++;
//           arr[front]=data;
//         }
//         else{
//           rear++;
//           arr[rear]=data;
//         }
//       }
//       return;
//     }
//     void pop(){
//       if(front==-1){
//         cout<<"UnderFlow..."<<endl;
//         return;
//       }
//       if(front==rear){
//         arr[front]=-1;
//         front--;
//         rear--;
//       }
//       else{
//         arr[front]=-1;
//         front++;
//       }
//       return;
//     }
//     int getfront(){
//       if(front==-1){
//         cout<<"Queue Empty"<<endl;
//         return -1;
//       }
//       else{
//         return arr[front];
//       }
//     }
//     int getrear(){
//       if(rear==-1){
//         cout<<"Queue Empty"<<endl;
//         return -1;
//       }
//       else{
//         return arr[rear];
//       }
//     }
//     int getsize(){
//       if(front==-1){
//         return 0;
//       }
//       else{
//         return rear-front+1;
//       }
//     }
//     bool isEmpty(){
//       if(front==-1){
//         return true;
//       }
//       return false;
//     }
//     void print(){
//       for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//       }
//       cout<<endl;
//     }

// };
// int main(){
//   Queue q(5);
//   q.push(10);
//   q.push(20);
//   q.push(40);
//   q.push(50);
//   q.print();
//   q.push(70);
//   q.print();
//   q.pop();
//   q.print();
//   q.push(100);
//   q.print();
//   q.pop();
//   q.print();
//   cout<<"Size: "<<q.getsize()<<endl;
//   if(q.isEmpty()){
//     cout<<"Queue is Empty"<<endl;
//   }
//   else{
//     cout<<"Queue is Non-Empty"<<endl;
//   }
//   return 0;
// }