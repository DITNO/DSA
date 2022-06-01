/*find all the duplictes in an array*/
#include<bits/stdc++.h>
using namespace std;

int finddup(int arr[]){
    int j =0;
    for (int i = 0; i < sizeof(arr); i++)
    {
        for (int j = 0; j < sizeof(arr); j++)
        {
            if (arr[i] == arr[j])
            {
                return j;
            }
            
        }
        
    }
    
}


int main(){
    int arr[] ={1,2,3,4,1,2,1,1,2};
    finddup(arr);
    return 0;
}