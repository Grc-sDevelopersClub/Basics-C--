//
//  main.cpp
//  ProjectEuler-1
//
//  Created by Gorakh Chavan on 23/08/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//
//
#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter number:";
    cin>>n;
    static int sum=0;
    for(int i=1;i<n;i++)
    {

        if((i%3==0) || (i%5==0))
        {
            sum+=i;

        }

    }
    cout<<sum<<endl;


    return 0;
}
