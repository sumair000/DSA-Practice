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

void swapAlternat(int arr[], int size){

    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
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

int findUnique(int arr[], int size){

    int ans = 0;

    for(int i = 0; i < size; i++)  
    {
        ans = ans ^ arr[i];
    }
    
    return ans;
}


int findDuplicate(int arr[], int size) {
    int ans = 0;
    // XOR all array elements
    for (int i = 0; i < size; i++) {
        ans ^= arr[i];
    }
    // XOR with 1 to n (where n = size-1)
    for (int i = 1; i < size; i++) { // i < size = 7 → 1-6
        ans ^= i;
    }
    return ans;
}
vector<int>  findIntersection(int arr1[],int arr2[], int n, int m){
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i<n && j<m){
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++,j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else{
            j++;
        }
        
    }
    return ans;
}

int main(){

    // int array[11] = {1,2,5,-4,5,-4,0,8,0,1,2};

    // int arr[5] = {1,2,3,4,4};
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

    // reverseArray(array, 10);

    // swapAlternat(array,10);
    
    // int ans = findUnique(array, 11);
    
    // int ans = findDuplicate(arr,5);
    // printArray(arr, 5);

    // cout << "duplicate number is: "<<ans;

    // cout<<"unique value is : "<<ans;

    int arr1[7] = {1,2,2,3,4,4,4};
    int arr2[4] = {2,3,4,4};

    vector<int> answer = findIntersection(arr1,arr2,7,4);

    for (int i : answer)    
    {
        cout<< i << " ";
    }
    
    cout << endl;
    return 0;
}