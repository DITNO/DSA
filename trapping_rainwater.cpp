#include<bits/stdc++.h>
using namespace std;
int rainwater(int arr[]){
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    int first[n];
    int second[n];
    first[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        first[i] = max(first[i-1],arr[i]);
    }
    second[n-1]=arr[n-1];
    for (int i = n-2; i >0; i--){
        second[i] = max(second[i+1],arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans+= min(first[i],second[i]) - arr[i];
    }
    return ans;
    
}
int main(){
    int arr[] ={3,1,2,4,0,1,2,3};
    rainwater(arr);
}