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

void MakeCavity(vector<string>& G)
    {
       for(unsigned int i=1; i<G.size()-1; i++)
       {
          for(unsigned int j=1; j<G.size()-1; j++)
              {
                 //cout << "comparing " << G[i][j] << " with " << G[i][j-1] <<" and "<<G[i][j+1] <<endl;
                if((G[i][j] > G[i][j-1]) && ((G[i][j] > G[i][j+1])) && (G[i][j] > G[i -1][j]) && ((G[i][j] > G[i + 1][j])))
                    {
                       G[i][j] = 'X';
                }
          }
       }
}

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    MakeCavity(grid);
    for(int i=0; i<n; i++)
        cout<< grid[i] << endl;
    return 0;
}
