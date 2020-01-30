#include <bits/stdc++.h>

using namespace std;
long long psa[1000000];
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long a,b,c;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>b;
        psa[i]+=b;
    }
    for(int i=1;i<=a;i++){
        psa[i] += psa[i-1];
    }
    cin>>c;
    for(int j=0, x, y;j<c;j++){
        cin >> x >> y;
        cout << psa[y+1] - psa[x] << '\n';
    }
    return 0;
}