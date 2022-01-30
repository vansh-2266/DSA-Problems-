#include <bits/stdc++.h>
using namespace std ;

int firstOccurance(int arr[] , int size, int key){

    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }

        if(arr[mid] < key){   // right me jaoo
            start = mid + 1;
        }
        else{                 // left me jaoo
            end = mid - 1;
        }

         mid = start + (end - start)/2;

    }

    return ans;

}


int main(){

    int even[5] = {2,4,4,8,10};
     

    int firstOcc = firstOccurance(even, 5, 4);

    cout<<"In even array first occurance of 4 is :"<< firstOcc <<endl;

    
}