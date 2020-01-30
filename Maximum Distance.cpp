#include <bits/stdc++.h>

using namespace std;

int main() {
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long stuff1[100000];
    long stuff2[100000];
    long a=0,b=0,c=0,d=0;
    cin>>a;
    for(int i=0;i<a;i++){
      long initialHold = 0, secondaryHold = -1,dex1=0,dex2=0;
      cin>>b;
      for(int j=0;j<b;j++){
        cin>>c;
        stuff1[j]=c;
      }
      for(int x=0;x<b;x++){
        cin>>d;
        stuff2[x]=d;
      }
      for(int z=0;z<b;z++){
        for(int m=b-1;m>=0;m--){
          if(stuff1[z]==stuff2[m] && m>=z){
            dex1 = z;
            dex2 = m;
            break;
          }
        }
        initialHold = dex2-dex1;
        if(initialHold>secondaryHold){
            secondaryHold = initialHold;
        }
      }
      cout<<"The maximum distance is "<<secondaryHold<<"\n";
    }
    return 0;
}