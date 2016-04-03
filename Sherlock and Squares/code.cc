/****************************************************************

   AUTHOR : Dharmendra Chowdary Meka

****************************************************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,temp,num1,num2;
    cin >> n;
    while(n!=0)
        {
         cin >> temp;
         num1 = ceil(sqrt(temp));
         cin >> temp;
        num2 = floor(sqrt(temp));
        cout << (num2 - num1)+1 <<endl;
        n--;
    }
}
