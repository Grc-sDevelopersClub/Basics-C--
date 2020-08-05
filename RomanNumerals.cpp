#include<iostream>
#include<string>
#include<map>
#include<unordered_map>

using namespace std;

int uni(long long int num)
{
string str = to_string(num);
    unordered_map<char, int> m; 

    for (int i = 0; i < str.length(); i++) { 
        m[str[i]]++; 
    } 

    return m.size(); 
} 


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
    
}

int main()
{
    int number=3549,dist;
    dist=uni(number);
    roman(dist);
    return 0;
}