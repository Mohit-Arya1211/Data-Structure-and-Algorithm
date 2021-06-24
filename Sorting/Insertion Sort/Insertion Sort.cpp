#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int A[], int n){
    int i, j,x;
    for(i=1; i<n; i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int main(){
    int A[]  = {10, 6, 1, 3, 4 , 9};
    int n = 6;
    InsertionSort(A, n);
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ,";
    }
    return 0;
}

