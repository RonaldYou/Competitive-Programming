#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,d,num = 1;
    vector<int>widths;
    cin>>a>>b;
    for (int i=0; i<a;i++) {
        cin >> d;
        widths.push_back(d);
    }
    sort(widths.begin(),widths.end());
    int x = widths[0];
    for (int i = 1; i<=a; i++) {
        if ((widths[i]- x) >= b) {
            x = widths[i];
            num += 1;
        }
    }
    cout<<num;
}
