// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void interleave(queue<int>&q){
//   int n=q.size();
//   queue<int>q1;
//   for(int i=0;i<n/2;i++){
//     q1.push(q.front());
//     q.pop();
//   }
//   while(!q1.empty()){
//     int temp=q1.front();
//     q1.pop();
//     q.push(temp);
//     q.push(q.front());
//     q.pop();
//   }
//   return;
// }
// void print(queue<int>&q){
//   //base case
//   if(q.empty()){
//     return;
//   }
//   //storing and printiong
//   int temp=q.front();
//   cout<<temp<<" ";
//   q.pop();
//   //recursive call
//   print(q);
//   //backtraking
//   q.push(temp);
//   return;
// }
// int main(){
//   queue<int>q;
//   q.push(6);
//   q.push(5);
//   q.push(4);
//   q.push(3);
//   q.push(2);
//   q.push(1);
//   //6 5 4 3 2 1
//   print(q);
//   interleave(q);
//   cout<<endl;
//   //Ln Ln/2-1 Ln-1 Ln/2-2 ...... Ln/2-1 L2 Ln/2 L1
//   //1 4 2 5 3 6
//   print(q);
//   return 0;
// }