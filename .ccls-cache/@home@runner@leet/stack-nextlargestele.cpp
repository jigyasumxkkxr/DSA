// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int>&v){
//   for(auto num:v){
//     cout<<num<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int>v={8,4,5,9,7,2,6};
//   stack<int> st;
//   vector<int>ans(v.size());
//   st.push(-1);
//   for(int i=0;i<v.size();i++){
//     while(v[i]<st.top()){
//       st.pop();
//     }
//     ans[i]=st.top();
//     st.push(v[i]);
//   }
//   print(v);
//   print(ans);
//   return 0;
// }