#include <bits/stdc++.h>
using namespace std ;

int binarySearch(int arr[] , int size, int key){

    int start = 0;
    int end = size-1;

    int mid = (start+end)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] > key){
            end = mid -1;
        }
        else{
            start = mid+1;
        }

         mid = (start + end)/2;

    }

    return -1;

}


int main(){

    int even[5] = {2,4,6,8,10};
    int odd[6] = {3, 5, 7, 9, 11, 13};

    int evenArr = binarySearch(even, 5, 8);

    cout<<"In even array 8 is at index no. : "<< evenArr;

    
}