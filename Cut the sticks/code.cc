/****************************************************************

   AUTHOR : Dharmendra Chowdary Meka

****************************************************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,temp,min;
    vector<int> v;
    vector<int>:: iterator it;
    cin >> n;
    while(cin >> temp)
        v.push_back(temp);
    sort(v.begin(),v.end());
    it = v.begin();
    //cout << v.size() <<endl;;
    while(v.size() != 0)
        {
          cout << v.size() <<endl;
          min = v[0] ;
           for(int i=0; i<v.size(); i++)
               {
                 v[i] = v[i] - min;
               }
           while(it != v.end())
               {
                 it = find(v.begin(),v.end(),0);
                     if(it != v.end())
                      v.erase(it);
                }
        it = v.begin();
    }
    return 0;
}
