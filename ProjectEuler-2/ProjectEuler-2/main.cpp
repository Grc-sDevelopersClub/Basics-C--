//
//  main.cpp
//  ProjectEuler-2
//
//  Created by Gorakh Chavan on 23/08/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{

    unsigned long long  sum=0;
    unsigned long long  first=0,second=1,third;
    while(second<=4000000)
    {
        third=first+second;
        first=second;
        second=third;
        if(third%2==0)
        {
            sum+=third;
        }


    }

    cout<<sum<<endl;

    return 0;
}
//#include <iostream>
//
//int main()
//{
//  unsigned int tests;
//  std::cin >> tests;
//  while (tests--)
//  {
//    unsigned long long last;
//    std::cin >> last;
//
//    unsigned long long sum = 0;
//    // first Fibonacci numbers
//    unsigned long long a = 1;
//    unsigned long long b = 2;
//
//    // until we reach the limit
//    while (b <= last)
//    {
//      // even ?
//      if (b % 2 == 0)
//        sum += b;
//
//      // next Fibonacci number
//      auto next = a + b;
//      a = b;
//      b = next;
//    }
//
//    std::cout << sum << std::endl;
//  }
//  return 0;
//}
