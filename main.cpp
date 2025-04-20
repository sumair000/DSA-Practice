#include <iostream>
using namespace std;

bool isPowerOfTwo(int num){


    if ((num & (num - 1)) == 0)
    {
        cout << num << " is a power of 2." << endl;
        return true;
    }
    else
    {
        cout << num << " is not a power of 2." << endl;
        return false;
    }
    
    
    int ans = 1;
        
    for (int i = 0; i <= 30; i++)
    {
       
        if(ans == num)
        {
            return 1;
        }
        if (ans < INT_MAX/10)
        {
            ans = ans  * 2;
        }
        else
        {
            cout << "Overflow occurred" << endl;
            return 0;
        }
    }
    return 0;
}

int power(){
    int a,b;
    cout << "Please enter two numbers: ";
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
    
}

bool isPrime(int a){

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
        
    }
    return true;
    

}

bool isPrimeOptimized(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int powerOf(int a,int b){
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int ans = powerOf(a , b/2);

    if (b&1)
    {
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }
    
    
}

int main() {

    int ans1 = powerOf(3,2);
    cout << ans1; // This line contains a typo
    // int c;
    // cout << "Please enter a number: ";
    // cin >> c; 
    // cout << "Welcome back!" << endl;


    // int a = 0;
    // int b = 1;
    // cout << a << " " << b << " ";
    // for (int i = 1; i <= 10; i++)
    // {
    //     int nextNumber = a + b;
    //     a = b;
    //     b = nextNumber;
    //     cout << nextNumber << " ";
    // }

    // int n;
    // cout << "Please enter a number: ";
    // cin >> n;

    // bool isPrime = true;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
        
        
    // }
    // if (isPrime)
    // {
    //     cout << n << " is a prime number." << endl;
    // }
    // else
    // {
    //     cout << n << " is not a prime number." << endl;
    // }
    

    // cout << endl;
     
    // int sum = 0;
    // int product = 1;
    // int differnce = 0;

    // while (n != 0)
    // {
    //     int digit = n % 10;
    //     sum += digit;
    //     product *= digit;
    //     n /= 10;
    // }
    
    // differnce = product - sum;
    // cout << "Sum of digits: " << sum << endl;
    // cout << "Product of digits: " << product << endl;
    // cout << "Difference: " << differnce << endl;
    // int num;
    // cout << endl;
    // cout << "Please enter a number: ";
    // cin >> num;
    // int count = 0;
    // while (num != 0)
    // {
    //     if(num&1){
    //         count++;
    //     }
    //     num >>= 1;
    // }
    
    // cout << "Number of set bits: " << count << endl;
    // cout << "Number of unset bits: " << (sizeof(num) * 8 - count) << endl;

    // int num1 = num;
    // int mask = 0;
    // while (num != 0)
    // {
    //     mask = (mask << 1) | 1;
    //     num1 = num1 >> 1;

    // }
    // int ans = (~num) & mask;
    // cout << "compliment of : "<<num <<" is: " << ans << endl;

    // isPowerOfTwo(num);
    // if (isPowerOfTwo(num))
    // {
    //     cout << num << " is a power of 2." << endl;
    // }
    // else
    // {
    //     cout << num << " is not a power of 2." << endl;

        
    // }

    

    // int ans = power();
    // cout << "The power is: " << ans << endl;
    cout <<endl;
    
    return 0;
}