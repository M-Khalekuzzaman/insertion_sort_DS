#include<bits/stdc++.h>
using namespace std;
void printArray(int size,int *arr)
{
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionSort(int size,int *arr)
{
    for(int i = 1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            //printArray(size,arr);
            j--;
        }
        arr[j+1] = key;
        //printArray(size,arr);
    }
}
int main()
{
    int size;
    cin>>size;
    int *arr = new int[size]{0};
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    // before insertion sort
    cout<<"Before sort : ";
    printArray(size,arr);

    // Insertion sort implementation part
    insertionSort(size,arr);

    // after insertion sort
    cout<<"After sort : ";
    printArray(size,arr);




    return 0;
}
