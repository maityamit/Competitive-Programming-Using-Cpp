#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

   //Classical Array
   int arr[] = {1,2,3,4,5};
   for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    //int *arr ~ int arr[]
    cout<<endl;
    

    //STL Array
   array<int,6> ar = {1,2,3,4,5,6};
    for(int i=0;i<ar.size();i++) cout<<ar[i]<<" ";
    sort(ar.begin(),ar.end());
    reverse(ar.begin(),ar.end());
    cout<<endl;
    for(int i=0;i<ar.size();i++) cout<<ar[i]<<" ";
    cout<<endl;
    for(auto it:ar) cout<<it<<" ";
    return 0;
}