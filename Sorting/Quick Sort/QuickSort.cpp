#include<bits/stdc++.h>
using namespace std;

void swap_Quick(int *a, int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}

int partition_Quick(int A[], int s, int e){
    int pivot = A[s];
    int i=s, j=e;
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j)
            swap_Quick(&A[i], &A[j]);
    }while(i<j);
    swap_Quick(&A[s], &A[j]);
    return j;
}

void QuickSort(int A[], int s , int e){
int j;
if(s<e){
    j = partition_Quick(A, s, e);
    QuickSort(A, s, j);
    QuickSort(A, j+1, e);
}
}

int main(){
    int A[]  = {10, 6, 1, 3, 4 , 9};
    int n = 6;
    QuickSort(A, 0, 6);
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ,";
    }
    return 0;
}
