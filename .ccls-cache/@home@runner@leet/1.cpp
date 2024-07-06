#include<iostream>
using namespace std;
int oddoccuringele(int arr[],int n){
  int s=0;
  int e=n;
  int mid=s+(e-s)/2;
  while(s<=e){
    if(arr[mid]==arr[mid+1]){
      if(mid%2==0){
        s=mid+2;
      }
      else{
        e=mid-1;
      }
    }
    else{
      if(mid%2==0){
        e=mid-2;
      } else{
        s=mid+1;
      }
    }
    mid=s+(e-s)/2;
  }
  return arr[s];
}
int main(){
  int arr[]={1,1,5,5,2,2,3,3,2,4,4,8,8};
  int n=sizeof(arr)/sizeof(int);
  int ans=oddoccuringele(arr,n);
  cout<<"Odd Occuring Element is "<<ans<<endl;
  return 0;
}