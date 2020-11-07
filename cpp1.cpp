#include<bits/stdc++.h>

using namespace std;
int binarySearch(int arr[] , int left ,int right ,int data){
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid] == data){
            return mid;
        }
        else if(arr[mid] < data){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[10];
    cout<<"We are inputing value in array \n";
    for(int i = 0;i<10;i++){
        arr[i] = (i+1)*(i+1);
    }
    for(int i = 0; i<10;i++){
        cout<<arr[i]<<" ";
    }
    // sorted array
    int data;
    cin>>data;
    int output;
    output = binarySearch(arr,0,9,data);
    if(output == -1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index "<<output<<" \n ";
        cout<<arr[output]<<endl;
    }

    return 0;
}