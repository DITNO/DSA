#include<bits/stdc++.h>
using namespace std;
// bool sum(int nums[],int target,int n){
//             for (int i = 0; i<n-1; i++){
//             for(int j = (i+1); j<n;j++){
//                 if(nums[i] + nums[j] == target){
//                     cout<<i<<j<<"given pair"<<endl;
//                 return 1;
//                    }
//             } 
//         } return 0;
// }
// int main(){
//     int arr[] ={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(int);
//     sum(arr,3,n);
//     return 0;
// }
bool chkPair(int A[], int size, int x) {
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                cout << "Pair with a given sum " << x << " is (" << A[i] << ", " << A[j] << ")"
                  << endl;
 
                return 1;
            }
        }
    }
 
    return 0;
}
bool threesum(int A[], int size, int x) {
    for (int k = 0; k < (size - 2); k++)
    {    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] + A[k] == x) {
                cout << "Pair with a given sum " << x << " is (" << A[i] << ", " << A[j] << "'"<<A[k]<<")"
                  << endl;
 
                return 1;
            }
        }
    }
    }
    return 0;
}

bool foursum(int A[], int size, int x) {
    for(int l = 0; l<(size-3); l++)
    {for (int k = 0; k < (size - 2); k++)
    {    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] + A[k] + A[l] == x) {
                cout << "Pair with a given sum " << x << " is (" << A[i] << ", " << A[j] << "'"<<A[k]<<","<<A[l]<<")"
                  << endl;
 
                return 1;
            }
        }
    }
    }}
    return 0;
}


int main() {
    int A[] = {0, -1, 2, -3, 1};
    int x = -2;
    int size = sizeof(A) / sizeof(A[0]);
 
    if (chkPair(A, size, x)) {
        cout << "Valid pair exists" << endl;
    }
    else {
        cout << "No valid pair exists for " << x << endl;
    }

        if (threesum(A, size, x)) {
        cout << "Valid pair exists" << endl;
    }
    else {
        cout << "No valid pair exists for " << x << endl;
    }

    if (foursum(A, size, x)) {
        cout << "Valid pair exists" << endl;
    }
    else {
        cout << "No valid pair exists for " << x << endl;
    }
    return 0;
}