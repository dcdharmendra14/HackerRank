/****************************************************************

   AUTHOR : Dharmendra Chowdary Meka

****************************************************************/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string Beast(int n)
{
    int c3 = 0,c5 =0, i=0;
    string Sher;
    
    if( (n % 3 == 0) && n>=3)
        {
           for(i=0; i<n; i++)
               Sher += '5';
           return Sher;
    }
    
    else if((n % 3 == 1) && (n-10) >=3)
        {
           for(i=0; i<(n-10); i++)
               Sher += '5';
           for(i=0; i<10; i++)
               Sher += '3';
        return Sher;
    }
    
     else if((n % 3 == 2) && (n-5) >=3)
        {
           for(i=0; i<(n-5); i++)
               Sher += '5';
           for(i=0; i<5; i++)
               Sher += '3';
         return Sher;
    }
    
    else if((n % 5 == 0) && n>=5)
        {
           for(i=0; i<n; i++)
               Sher += '3';
         return Sher;
    }
    
    else
        {
        Sher = "-1";
        return Sher;
    }
        
    
    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << Beast(n) <<endl;
    }
    return 0;
}
