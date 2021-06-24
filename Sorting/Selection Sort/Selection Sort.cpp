#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int A[], int n){
    int i,j,k;
    for(i = 0; i<n; i++){
        for(j=k=i; j<n; j++){
            if(A[j]<A[k])
                k=j;
        }
        swap(&A[i], & A[k]);
    }
}


int main(){
    int A[]  = {10, 6, 1, 3, 4 , 9};
    int n = 6;
    SelectionSort(A, n);
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ,";
    }
    return 0;
}
