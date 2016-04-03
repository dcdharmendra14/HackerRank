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
//vector<int> TotChoclates;
int total = 0;

void CalculateTotal(int N, int C, int M)
    {
     //cout << "in CalculateTotal N, C, M are " <<N <<C <<M <<endl;
      total = 0;
      int Wrapper;
      int LWrapper = 0;
      int Choc = N/C; 
    // cout <<"choclates are "<<Choc<<endl;
      do
      {
          Wrapper = Choc + LWrapper;
          //cout << "in while loop, count = " <<total;
          total += Choc;
          Choc = Wrapper/M;
          LWrapper = Wrapper%M;
      }
    while(Wrapper >= M);
     cout << total << endl;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        CalculateTotal(n,c,m);
    }
    return 0;
}
