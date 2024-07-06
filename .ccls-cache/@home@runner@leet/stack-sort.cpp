// #include<bits/stdc++.h>
// using namespace std;
// void print(stack<int>&st){
//   //base condition 
//   if(st.empty()){
//     return;
//   }
//   //storing int variable 
//   int temp=st.top();
//   st.pop();
//   //recursive call
//   print(st);
//   //backtracking along with printing
//   cout<<temp<<" ";
//   st.push(temp);
// }
// void solver(stack<int> &st,int ele){
//   //base condition
//   if(st.empty() || st.top()<=ele){
//     st.push(ele);
//     return;
//   }
//   //storing int value
//   int temp=st.top();
//   st.pop();
//   //recursive call;
//   solver(st,ele);
//   //backtracking
//   st.push(temp);
// }
// void sort(stack<int>&st){
//   //base condition
//   if(st.empty()){
//     return;
//   }
//   //storing int variable
//   int temp=st.top();
//   st.pop();
//   //recursive call
//   sort(st);
//   //backtracking along with solver function
//   solver(st,temp);
// }
// int main(){
//   stack<int> st;
//   st.push(10);
//   st.push(5265);
//   st.push(2626);
//   st.push(21515);
//   st.push(562);
//   st.push(2);
//   cout<<"Before Sorting: ";
//   print(st);
//   cout<<endl;
//   sort(st);
//   cout<<"After Sorting: ";
//   print(st);
//   return 0;
// }