#include<iostream>
#include<string>
#include<map>
#include<unordered_map>

using namespace std;
int uni(string s) 
{ 
    // create a map to store the 
    // frequency of characters 
    unordered_map<char, int> m; 
  
    // traverse the string 
    for (int i = 0; i < s.length(); i++) { 
        // increase the frequency of character 
        m[s[i]]++; 
    } 
  
    return m.size(); 
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
    int number,dist;
    cin>>number;
    string str=to_string(number);
    dist=uni(str);
    roman(dist);
    cout<<dist<<endl;
    }
    return 0;
}