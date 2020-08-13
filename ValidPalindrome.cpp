#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) return true;

        int i = 0;
        int j = s.size()-1;
        while(i < j)
        {
            if(!isalnum(s[i])) i++;
            else if(!isalnum(s[j])) j--;
            else if(toupper(s[i]) != toupper(s[j])) return false;
            else {i++; j--;}
        }
        return true;
    }
};

int main()
{
    return 0;
}