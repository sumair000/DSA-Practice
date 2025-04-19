#include<iostream>
using namespace std;

int binartSearch(int arr[], int size, int key){

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right -left) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        if (arr[mid] > key)
        {
            right = mid -1;
        }   
        
    }
    
    return -1;
}

int firstOccurence(int arr[], int size, int key){
    int left = 0;
    int right = size - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right -left) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            right = mid -1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid -1;
        }   
        
    }
    
    return ans;
}

int lastOccurence(int arr[], int size, int key){
    int left = 0;
    int right = size - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right -left) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid -1;
        }   
        
    }
    
    return ans;
}

int peakMountain(int arr[], int size){

    int s = 0;
    int e = size -1;
    while (s < e)  
    {
        int mid = s + (e -s)/2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        
    }
    return s;
    
}

int findPivot(int arr[], int size){

    int s = 0;
    int e = size -1;
    int mid = s + (e -s)/2;

    while (s < e)  
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e -s)/2;
        
    }
    return s;
    
}

int findSortedRotated(int arr[],int size, int target){

    int s = 0;
    int e = size -1;
    int mid = s + (e - s)/2;

    while (s <= e)
    {
        //check if mid is the target value
        if (arr[mid] == target)
        {
            return mid;
        }

        //check if the left half is sorted 
        if (arr[s] <= arr[mid])
        {
            if (arr[s] <= target && target < arr[mid])
            {
                e = mid - 1;
            }else{
                s = mid + 1;
            }
            
        }
        else{
            if (arr[mid] < target && target <= arr[e])
            {
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }

        }
        
        mid = s + (e - s)/ 2;
    }
    return -1;
}

int main(){

    int arr[14] = {1,3,4,4,4,4,4,4,4,4,5,7,8,11};

    // int ans = binartSearch(arr,14,4);

    // cout <<"first occurence is at index: "<< firstOccurence(arr, 14, 5);
    // cout <<endl;
    // cout <<"last occurence is at index: "<< lastOccurence(arr, 14, 5);

    int array[8] = {5,8,10,17,19,2,3,4};
    // cout << "peak element index is: "<< peakMountain(array, 6);
    // cout << "pivot element index is: "<< findPivot(array, 8);
    cout <<endl;

    cout << "the target value is at index: "<< findSortedRotated(array, 8, 2);

    cout <<endl;
    cout <<endl;

}