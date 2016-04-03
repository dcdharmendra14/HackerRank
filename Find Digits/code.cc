/****************************************************************

   AUTHOR : Dharmendra Chowdary Meka

****************************************************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int MyFunction(int num)
    {
    int dup,x,count = 0;
       dup = num;
    while(dup != 0)
        {
          x = dup % 10 ;
           //cout << x << endl;
          dup = dup/10 ;
          if(x != 0)
           {
            if(num % x == 0)
             count ++;
            }
         }
    return count;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp,cnt;
    cin >>n;
        while(n!=0)
        {
         cin >> temp;
         cnt = MyFunction(temp);
        cout << cnt << endl;
        n--;
    }
    return 0;
}
