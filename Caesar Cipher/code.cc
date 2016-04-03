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

void Caesar(int n, string& s, int k)
    {
     int temp = 0;
     char a;
      for(int i=0; i<n; i++)
      {
               if(isalpha(s[i]))
           {
            a = isupper(s[i])?'A':'a';
            s[i]= a + (s[i] - a + k)%26;
            }
       }          
     
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    Caesar(n,s,k);
    cout << s << endl;
    return 0;
}
