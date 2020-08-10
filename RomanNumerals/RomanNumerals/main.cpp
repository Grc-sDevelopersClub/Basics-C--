//
//  main.cpp
//  RomanNumerals
//
//  Created by Gorakh Chavan on 06/08/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//
#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<climits>

using namespace std;
int cnt(int no)
{
    int temp=no,count=0;
    while(temp!=0)
       {
           count++;
           temp/=10;
       }
    return count;
}
int uni(int number)
{

//    while(temp!=0)
//    {
//        count++;
//        temp/=10;
//    }
    int len = cnt(number);
     int array[len];
    for (int i = len; i > 0; i--) {
        array[i] = number % 10;
        number /= 10;
    }
    sort(array,array+len);
    int count = 0;
      for (int i = 0; i < len; i++){
         // Moving the index when duplicate is found
         while (i < len - 1 && array[i] == array[i + 1]){
            i++;
         }
         count++;
      }
    return count;
}
// int uni(long long int num)
// {
//     string str = to_string(num);
//     unordered_map<char, int> m;

//     for (int i = 0; i < str.length(); i++) {
//         m[str[i]]++;
//     }

//     return m.size();
// }


void roman(int number)
{
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    while(number>0)
    {
        int div= number/num[i];
        number=number%num[i];
        while(div--)
        {
            cout<<sym[i];
        }
        i--;
    }
    cout<<endl;
    
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int number;
    int dist=0;
    cin>>number;
        cout<<dist<<endl;
    dist=uni(number);
    roman(dist);
    cout<<dist<<endl;
    }
    return 0;
}
