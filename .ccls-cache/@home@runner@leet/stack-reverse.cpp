// #include<bits/stdc++.h>
// using namespace std;
// void InsertAtEnd(stack<char>&s,char ch){
//   //base condition
//   if(s.empty()){
//     s.push(ch);
//     return;
//   }
//   //storing in temp variable
//   char temp=s.top();
//   s.pop();
//   //recursion
//   InsertAtEnd(s,ch);
//   //backtracking
//   s.push(temp);
// }
// void reverse(stack<char>&s){
//   //base condition
//   if(s.empty()){
//     return;
//   }
//   // storing char variable
//   char temp=s.top();
//   s.pop();
//   //recursive call
//   reverse(s);
//   //backtracking along with insertion at end
//   InsertAtEnd(s,temp);
// }
// void print(stack<char>&s){
//   //base condition
//   if(s.empty()){
//     return;
//   }
//   //storing character
//   char temp=s.top();
//   s.pop();
//   //recursive call
//   print(s);
//   //backtracking with printing
//   cout<<temp<<" ";
//   s.push(temp);
// }
// int main(){
//   stack<char> st;
//   string s="JIGYASU";
//   for(auto character:s){
//     st.push(character);
//   }
//   print(st);
//   cout<<endl;
//   reverse(st);
//   print(st);
//   cout<<endl;
  
// }