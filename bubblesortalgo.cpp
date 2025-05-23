#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    int compare=0;
    int swap=0;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
            compare++;
        }
    }
cout <<"Sorted array:";
for (i=0;i<n;i++)
cout <<arr[i]<<" ";
cout<<endl;
cout<<"Number of compare:"<<compare<<endl;
cout << "Number of swap:"<<swap<< endl;
}

int main()
{
    int arr[] = {11,77,67,98,42,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}
