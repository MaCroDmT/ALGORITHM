#include<iostream>
using namespace std;
int mergesort;
int A= mergesort A[]; int p; int q; int r;
{
    n1=q-p+1
    n2=r-q
    int L[n1+1],R[n2+1];
    for(int i=1;i<n1;i++)
    {
        L[i]=A[p+i];
    }
    for (int j = 0; j < n2; j++)
    {

        R[j] = A[q + j + 1];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }
    }
}
    void merge(int A[],int p,int r);
    {


    if (p<r)
    {
        int q=[(p+r)/2];
        merge-sort(A,p,q);
        merge-sort(A,q+1,r);
        merge(A,p,q,r);
    }

}
