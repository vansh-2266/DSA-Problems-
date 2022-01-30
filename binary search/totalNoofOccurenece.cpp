
// we can simple find total number of occurance if we have firstmost ocurring index and last most occuring index! If you have both then use this formula.

// TOTAL NO. OF OCCURANCE = (Last_index - Firest_index)+1;

#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[] , int size, int key){

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
    
        int n, k;
        cin >> n >> k;

        int arr[n];
        for(int i =0 ; i < n ; i++ ){
            cin>>arr[i];
        }

        // int first = firstOcc(arr , n , k);
        // int last = lastOccurance(arr , n , k);

        int total_Occurance = (lastOccurance(arr , n , k) - firstOcc(arr , n , k) ) + 1;

        cout<<"the total occurance of "<< k <<" Is : "<<total_Occurance<<endl;

        // cout<<firstOcc(arr , n , k)<<" "<<lastOccurance(arr , n , k)<<endl;

        return 0;
}