#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int start,int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}
void printArray(int arr[] ,int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before reverse\n";
    printArray(arr,size);

    reverseArray(arr,0,5);
    cout<<"array after reversing\n";
    
    printArray(arr,size);
    
    return 0;
}