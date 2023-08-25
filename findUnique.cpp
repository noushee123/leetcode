#include<iostream>
using namespace std;

int findUnique(int arr[],int n){
    
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){

    int arr[7]={4,5,9,5,4,9,2};
    cout<<findUnique(arr,7);
  ]
  return 0;
}
