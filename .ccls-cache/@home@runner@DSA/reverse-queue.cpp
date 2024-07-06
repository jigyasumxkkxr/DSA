// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void reverse(queue<int>&q){
//   stack<int>st;
//   while(!q.empty()){
//     st.push(q.front());
//     q.pop();
//   }
//   while(!st.empty()){
//     q.push(st.top());
//     st.pop();
//   }
//   return;
// }
// int main(){
//   queue<int>q;
//   q.push(5);
//   q.push(4);
//   q.push(3);
//   q.push(2);
//   q.push(1);
//   cout<<"queue back ele:"<<q.back()<<endl;
//   reverse(q);
//   cout<<"queue back ele after reverse:"<<q.back()<<endl;
//   return 0;
// }