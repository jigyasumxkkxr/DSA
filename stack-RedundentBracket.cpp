// #include<bits/stdc++.h>
// using namespace std;
// bool redundent(string s){
//   stack<char> st;
//   for(auto ch:s){
//     if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='%'){
//       st.push(ch);
//     }
//     else if(ch==')'){
//       int operatorcount=0;
//       while(st.top()!='('){
//         operatorcount++;
//         st.pop();
//       }
//       st.pop();
//       if(operatorcount==0){
//         return true;
//       }
//     } 
//   }
//   return false;
// }
// int main(){
//   string s="(((a+b))*(c+d))";
//   bool ans=redundent(s);
//   if(ans){
//     cout<<"Redundent Bracket Present";
//   }
//   else{
//     cout<<"Redundent Bracket Absent";
//   }
//   return 0;
// }