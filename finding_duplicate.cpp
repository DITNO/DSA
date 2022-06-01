#include<bits/stdc++.h>
using namespace std;
void find(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        arr[arr[i]%n] = arr[arr[i]%n] + n;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]/n>1)
        {
            cout<<i<<"";
        }
        
    }
    
}
int main(){
    int arr[]={1,2,3,4,2,3};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    find(arr,n);
}