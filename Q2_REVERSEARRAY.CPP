#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start , int end){
    while (start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
    
}
int main(){
    int arr[]= {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,n-1);
    cout<<"reverse array is ::";
    print(arr,n);
}