#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c = 0,d,e = 0,g = 0;
  long double f = 0;
  cin>>a;
  for (int i = 0; i<a;i++){
    cin>>b;
    c += b;
  }
  cin>>d;
  for (int i = 0; i<d ;i++){
    cin>>e;
    g += e;
    f = (long double)(c+g)/(i+a+1);
    cout<<fixed<<setprecision(3)<<f<<'\n';
  }
}