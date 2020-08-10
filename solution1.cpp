#include<iostream>
#include<algorithm>
using namespace std;

long long  int distinct_numbers(long long  int arr[], long long int n)
{
    sort(arr, arr + n);
    int count=0;
    for(int i=0; i<n; i++)
    {
        //Skip index when same element is found
        while(i<n-1 && arr[i] == arr[i+1])
        {
            i++;
        }
        count++;
    }
    return count;
}


string distinct_String()
{

}
void decimal2roman(long long int num){
    int decimal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char *symbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"}; 
    int i = 0;
 
    while(num){ 
        while(num/decimal[i]){  //first base value that divides num is largest base value
            printf("%s",symbol[i]); 
            num -= decimal[i];  //subtract largest base value from num
        }
        i++; 
    }
}

int main()
{
    //for checking distinct elements;

    long long int real_num;
    cout << "Enter your number: " << endl;
    cin >> real_num;

    string str = to_string(real_num);
    long long int arr_size;
    // cout << "Enter Size for array: " << endl;
    // cin >> arr_size;
    long long int arr[str.length()];
    // cout << "Enter your elements now: " << endl;
    // for(int i=0; i< arr_size; i++)
    // {
    //     cin >> arr[i];
    // }

    
    for (int i = str.length() - 1; i >= 0; i--) 
    {
    arr[i] = real_num % 10;
    real_num /= 10;
    }

    long long int n = sizeof(arr)/sizeof(arr[0]);
    // cout << distinct_numbers(arr,n) << endl;
    long long int store_count = distinct_numbers(arr, n);
    decimal2roman(store_count);

    return 0;
}
