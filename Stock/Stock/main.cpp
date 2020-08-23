//
//  main.cpp
//  Stock
//
//  Created by Gorakh Chavan on 21/08/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//
#include<iostream>
#include <vector>
#include <iostream>
using namespace std;

int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int minimum = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if((prices[i]-minimum)>profit) profit = prices[i] - minimum;
            if(prices[i]<minimum) minimum = prices[i];
        }
        return profit;
    }

int main()
{

    int array[7];
    for(int i=0;i<7;i++)
        cin>>array[i];
    int n= sizeof(array)/sizeof(array[0]);

    vector<int> price(array,array + n);
    cout<<maxProfit(price)<<endl;
  
    
    return 0;
}
