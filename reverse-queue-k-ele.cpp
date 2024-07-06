// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void reversekele(queue<int>&q,int k){
//   int n=q.size();
//   if(k>n || k<=0){
//     return;
//   }
//   stack<int>st;
//   while(k--){
//     st.push(q.front());
//     q.pop();
//   }
//   while(!st.empty()){
//     q.push(st.top());
//     st.pop();
//   }
//   for(int i=0;i<=(n-k);i++){
//     int temp=q.front();
//     q.pop();
//     q.push(temp);
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
//   //5 4 3 2 1
//   cout<<"queue front ele: "<<q.front()<<endl; //5
//   reversekele(q,3);    //k=3
//                        //3 4 5 2 1
//   cout<<"queue front ele after reverse k element: "<<q.front()<<endl;//3
//   return 0;
// }