#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    int sum = 0;
    for (int  i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

bool linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        
    }
    return false;
    
}

void reverseArray(int arr[], int size){

   int start = 0;
   int end = size -1;
   while (start < end)
   {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start ++, end --;
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

    int array[10] = {1,2,3,4,5,-4,7,8,0,-1};
    // int sum = sumOfArray(array, 5);
    // cout << "The sum of the array is: " << sum << endl;

    // int key;
    // cin >> key;
    // bool found = linearSearch(array, 10, key);

    // if (found)
    // {
    //     cout<<"key is present in the array";
    // }else{
    //     cout<<"key is not present in the array";
    // }

    reverseArray(array, 10);
    printArray(array, 10);
    cout << endl;
    return 0;
}