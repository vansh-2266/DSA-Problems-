#include <bits/stdc++.h>
using namespace std ;

int lastOccurance(int arr[] , int size, int key){

    int s = 0;
    int e = size-1;

    int mid = s + (e - s)/2;
    int ans = -1;

    while(s <= e){

        if(arr[mid] == key){
            ans = mid;
            s =  mid + 1;
        }

        if(arr[mid] < key){   // right me jaoo
            s = mid + 1;
        }
        else if(arr[mid] > key){                 // left me jaoo
            e = mid - 1;
        }

         mid = s + (e - s)/2;

    }

    return ans;

}


int main(){

    int even[10] = {1, 2 , 3 , 3,  4, 4 , 4 ,4, 12, 21};
     

    int lastOcc = lastOccurance(even, 10, 3);

    cout<<"Last most occurance of 3 is at index :"<< lastOcc <<endl;

    
}