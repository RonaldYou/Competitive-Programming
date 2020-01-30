#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a,b,c=0;
    double e,d;
    cin>>a;
    vector<double>vec;
    for(int i=0;i<a;i++){
      cin>>b;
      vec.push_back(b);
    }
    
    while(c!=77){
      cin>>c;
      if(c==99){
        cin>>d>>e;
        vec.insert(vec.begin()+d,(vec[d-1]*((100-e)/100)));
        vec[d-1] = vec[d-1]*(e/100);
        
      }
      else if(c==88){
        cin>>d;
        vec[d-1]= vec[d-1]+vec[d];
        vec.erase(vec.begin()+d);
      }
    }
    for(int j=0;j<int(vec.size());j++){
      cout<<round(vec[j])<<" ";
    }
    return 0;
}