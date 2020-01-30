#include <bits/stdc++.h>

using namespace std;

unsigned long long first[1000000];
unsigned long long second[1000000];
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    unsigned long long a,b,c,d,e,f;
    long double sum;

    cin>>a>>b>>c;
    for(int i=1;i<=a;i++){
        cin>>d;
        first[i]+=d;
        second[d]=i;
    }
    for(int i=1;i<=a;i++){
        first[i]+=first[i-1];
    }
    for(int j=0;j<c;j++) {
        cin >> e;
        cin >> f;
        sum = (first[second[f]] - first[second[e]-1]) / (long double) 2;
        if(sum>=b){
            cout<<"Enough\n";
        }
        else{
            cout<<"Not enough\n";
        }
    }

    return 0;
}