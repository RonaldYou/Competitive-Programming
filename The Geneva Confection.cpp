#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    vector<int>branch;
    vector<int>mt;
    cin>>a;
    for(int i=0;i<a;i++){
        mt.clear();
        branch.clear();
        cin>>b;
        int d=1;
        for(int j=0;j<b;j++){
            cin>>c;
            mt.push_back(c);
        }
        for(int z=0;z<b;z++){
            if(d>b){
                break;
            }

            if(mt.back()==d){
                mt.pop_back();
                d++;
            }

            else{
                branch.push_back(mt.back());
                mt.pop_back();
            }
            if(!branch.empty()){
                while(branch.back()==d) {
                    branch.pop_back();
                    d++;
                }
                continue;
            }



        }
        if(branch.empty()){
            cout<<"Y\n";
        }
        else{
            cout<<"N\n";
        }
    }

    return 0;

}