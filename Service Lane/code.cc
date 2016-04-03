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
    int siz,n,temp,i1,i2,min;
    vector<int> v;
    cin >> siz >> n;
    for(int i =0; i<siz; i++)
    {
        cin >> temp;
        v.push_back(temp);
        //cout <<v[i] << endl;;
    }
    
    while(n!=0)
        {
        cin >> i1 >> i2;
        //cout << " i1 is " << i1 <<"i2 is "<<i2<<endl;
        min = v[i1];
        //cout << "min at first is " << min <<endl;
        for(int i=i1; i<=i2 ; i++)
            {
               //cout << "vector number is " << v[i1] << endl;
               if(v[i] < min)
                   min = v[i];
               //cout << "min after comparision is " <<min<<endl;
            }
        cout << min <<endl;
        n--;
    }
    
    return 0;
}
