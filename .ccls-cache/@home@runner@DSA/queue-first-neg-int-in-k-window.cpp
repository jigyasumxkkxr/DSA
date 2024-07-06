// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// void first_neg_k_window(int *arr,int n,int k){
//     //form a deque
//     deque<int>dq;
//     //for first k window
//     for(int i=0;i<k;i++){
//         if(arr[i]<0){
//             dq.push_back(i);
//         }
//     }
//     //for windows after 1st window
//     //addition for -ve values
//     //removal of indexex exprired in that window
//     for(int i=k;i<n;i++){
//         //empty case 
//         if(dq.empty()){
//             cout<<"0 "; //0 -ve values
//         }
//         else{
//             cout<<arr[dq.front()]<<" ";
//         }
//         //removal of expired values
//         if(i-dq.front()>=k){
//             dq.pop_front();
//         }
//         //addition if there is new neg value
//         if(arr[i]<0){
//             dq.push_back(i);
//         }
//     }
//     // manually check for last window
//     if(dq.empty()){
//         cout<<"0 ";
//     }
//     else{
//         cout<<arr[dq.front()]<<" ";
//     }
//     return;
// }
// int main()
// {
//     // sliding window
//     int arr[7] = {-2, -5, 4, -1, -2, 0, 5};
//     int n = 7;
//     int k = 2;
//     first_neg_k_window(arr, n, k);//-2 -5 -1 -1 -2 0
//     return 0;
// }