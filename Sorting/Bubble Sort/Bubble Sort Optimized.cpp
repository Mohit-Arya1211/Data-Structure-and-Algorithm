#include<bits/stdc++.h>
using namespace std;

void swap1(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

void bubbleSort(int A[], int n){
    int i, j, flag=0;
    for(i = 0; i<n-1; i++){
        flag = 0;
        for(j = 0; j<n-1-i; j++){
            if(A[j] > A[j+1]){
                swap1(&A[j], &A[j+1]);
                flag++;
            }
        }
        if(flag == 0)
            break;
    }
}

int main(){
    int A[]  = {10, 6, 1, 3, 4 , 9};
    int n = 6;
    bubbleSort(A, n);
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ,";
    }
    return 0;
}
