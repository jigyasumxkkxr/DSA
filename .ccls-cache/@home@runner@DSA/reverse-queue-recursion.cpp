// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void reverse(queue<int>&q){
//   //base case
//   if(q.empty())
//     return;
//   //storing of variable
//   int temp=q.front();
//   q.pop();
//   //recursive call
//   reverse(q);
//   //backtraking with pushing ele
//   q.push(temp);
//   //returning
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