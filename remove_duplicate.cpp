#include<bits/stdc++.h>
using namespace std;
int removeduplicate(int arr[], int n){
    int j = 0;
    for (int i = 0; i < n -1; i++)
    
        if (arr[i] != arr[i+1])
        {
            arr[j]= arr[i+1];
            j++;
        }
        return j;

}