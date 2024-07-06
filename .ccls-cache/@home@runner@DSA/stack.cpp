// #include<iostream>
// using namespace std;
// class Stack{
//   public:
//     int *arr;
//     int size;
//     int top;
//     Stack(int size){
//       arr=new int[size];
//       this->size=size;
//       this->top=-1;
//     }

//     void push(int num){
//       if(top==size-1){
//         cout<<"Stack Overflow"<<endl;
//         return;
//       }
//       top++;
//       arr[top]=num;
//     }

//     void pop(){
//       if(top==-1){
//         cout<<"Stack Underflow"<<endl;
//         return;
//       }
//       top--;
//     }

//     bool isEmpty(){
//       if(top<0){
//         return true;
//       }
//       return false;
//     }

//     int getTop(){
//       if(top==-1){
//         cout<<"Stack is empty"<<endl;
//         return -1;
//       }
//       return arr[top];
//     }

//     int getSize(){
//       return top+1;
//     }
// };

// int main(){
//   Stack s(5);
//   s.push(1);
//   s.push(5);
//   s.push(9);
//   s.push(7);
//   s.push(1);
//   s.push(10);
//   cout<<s.getTop()<<endl;
//   cout  <<s.getSize()<<endl;
//   return 0;
// }