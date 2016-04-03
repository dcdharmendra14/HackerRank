/****************************************************************

   AUTHOR : Dharmendra Chowdary Meka

****************************************************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void MyFunction(int N, int K)
    {
     int temp,count=0;
     for(int i=0; i<N ; i++)
         {
          cin >> temp;
           if(temp <= 0)
               count++;
         }
    if(count < K)
        cout << "YES"<<endl;
    else
        cout<< "NO"<<endl;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,r,k;
    cin>>n;
    while(n!=0)
        {
          cin >> r >> k;
          MyFunction(r,k);
        n--;
    }
    return 0;
}