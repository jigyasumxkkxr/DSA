// #include<iostream>
// using namespace std;
// class Stack{
//   public:
//     int* arr;
//     int size;
//     int top1;
//     int top2;
//     Stack(int size){
//       arr=new int[size];
//       this->size=size;
//       this->top1=-1;
//       this->top2=size;
//     }
//     void push1(int data){
//       if((top2-top1)==1 && arr[top2]!=0){
//         cout<<"OverFlow..."<<endl;
//         return;
//       }
//       else{
//         top1++;
//         arr[top1]=data;
//       }
//     }
//     void push2(int data){
//       if((top2-top1)==1 && arr[top1]!=0){
//         cout<<"OverFlow..."<<endl;
//         return;
//       }
//       else{
//         top2--;
//         arr[top2]=data;
//       }
//     }
//     void pop1(){
//       if(top1==-1){
//         cout<<"UnderFlow..."<<endl;
//       }
//       else{
//         arr[top1]=0;
//         top1--;
//       }
//     }
//     void pop2(){
//       if(top2==size){
//         cout<<"UnderFlow..."<<endl;
//       }
//       else{
//         arr[top2]=0;
//         top1++;
//       }
//     }
// };
// int main(){
//   Stack st(10);
//   st.push1(5);
//   st.push1(10);
//   st.push1(15);
//   st.push1(20);
//   st.push1(25);
//   st.push1(30);
//   st.push2(2);
//   st.push2(4);
//   st.push2(6);
//   st.push2(8);
//   st.push2(12);
  
//   return 0;
// }