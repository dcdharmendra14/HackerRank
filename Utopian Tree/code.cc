/****************************************************************

   AUTHOR : Dharmendra Chowdary Meka

****************************************************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int height(int n)
    {
       //cout << "in heigh of " << n << endl;
       if(n == 0)
           return 1;
       else if(n == 1)
           return 2;
       else if(n%2 == 0)
           return height(n-1)+1;
       else
           return 2*height(n-1);
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
    return 0;
}
