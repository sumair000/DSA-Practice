#include<iostream>
using namespace std;

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

void printArray(int arr[],int size){
    for (int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6] = {1,5,3,9,-2,8};

    // selectionSort(arr,6);
    printArray(arr,6);
    bubbleSort(arr,6);
    printArray(arr,6);
    cout << endl;
    return 0;
}