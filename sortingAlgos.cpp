#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int size){

    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            
        } 
        swap(arr[minIndex], arr[i]);
        
    }
    
}

void bubbleSort(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        bool isSwapped = false;
        for (int j = 0 ; j < size - i - 1; j++)
        {
            if (arr[j]> arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwapped = true;
            }
            
        }
        if (!isSwapped)
        {
            break;
        }
        
        
    }
    
}


void insertionSort(int arr[], int size){

    for (int i = 1; i < size ; i++){

        int key = arr[i];
        int j = i -1 ;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void moveZeros(int arr[],int n){
    int i = 0;
    for(int j = 0; j < n; j++){
        if (arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

int main(){

    int arr1[6] = {1,5,3,9,-2,8};

    // selectionSort(arr,6);
    // printArray(arr,6);
    // bubbleSort(arr,6);
    // insertionSort(arr, 6);
    int arr2[7] = {0,1,1,0,0,3,2};
    moveZeros(arr2,7);
    printArray(arr2,7);
    cout << endl;
    return 0;
}