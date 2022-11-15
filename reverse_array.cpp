#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector <int> &k)
{
  int s=0, e = k.size()-1;
  while(s<=e)
    {
      swap(k[s],k[e]);
      s++;
      e--;
    }
  return k;
}
int main()
{
  vector <int> v;
  v.push_back(10);
  v.push_back(7);
  v.push_back(5);
  v.push_back(9);
  v.push_back(1);
  vector<int> ans = reverse(v);
  for(int i:v)
    {
      cout<<i<<" ";
    }
  
}
