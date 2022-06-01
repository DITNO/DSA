#include<bits/stdc++.h>
using namespace std;
 int maxScore(int cardPoints[], int k) {
        int front = 0;
        for(int i = 0;i<k;i++){
            front+= cardPoints[i];
        }
        
        int rev =0;
        for(int j = (k-1);j>0;j--){
            rev+= cardPoints[j];
        }
        int ans = max(front,rev);
        return ans;
    }
int main(){
    int arr[] ={1,2,3,4,5,6,1};
    
}