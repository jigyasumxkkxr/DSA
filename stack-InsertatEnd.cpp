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
// int main(){
//   stack<char> st;
//   string s="JIGYASU";
//   for(auto character:s){
//     st.push(character);
//   }
//   cout<<"Size before insertion: "<<st.size()<<endl;
//   InsertAtEnd(st,'I');
//   cout<<"Size after insertion: "<<st.size()<<endl;
// }