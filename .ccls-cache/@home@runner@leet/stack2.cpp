#include<bits/stdc++.h>
using namespace std;
char solve(stack<char> &s,int position){
  if(position==1){
    return s.top();
  }
  position--;
  char temp=s.top();
  s.pop();
  char RecursionkaAns=solve(s,position);
  s.push(temp);
  return RecursionkaAns;
}
char MiddleElement(stack<char>s){
  int size=s.size();
  if(s.empty()){
    return '*';
  }
  else{
    int pos=0;
    if(size & 1){
      pos=size/2+1;
    }
    else{
      pos=size/2;
    }
    char ans=solve(s,pos);
    return ans;
  }
}
int main(){
  stack<char> st;
  string s="JIGYASU";
  for(auto character:s){
    st.push(character);
  }
  cout<<"Middle Element is: "<<MiddleElement(st)<<endl;
}