#include <bits/stdc++.h>

using namespace std;

int main() {
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x = -1, y = -5;
    vector<string>vec;
    vec.emplace_back("0-1");
    vec.emplace_back("0-2");
    vec.emplace_back("0-3");
    vec.emplace_back("1-3");
    vec.emplace_back("2-3");
    vec.emplace_back("3-3");
    vec.emplace_back("3-4");
    vec.emplace_back("3-5");
    vec.emplace_back("4-5");
    vec.emplace_back("5-5");
    vec.emplace_back("5-4");
    vec.emplace_back("5-3");
    vec.emplace_back("6-3");
    vec.emplace_back("7-3");
    vec.emplace_back("7-4");
    vec.emplace_back("7-5");
    vec.emplace_back("7-6");
    vec.emplace_back("7-7");
    vec.emplace_back("6-7");
    vec.emplace_back("5-7");
    vec.emplace_back("4-7");
    vec.emplace_back("3-7");
    vec.emplace_back("2-7");
    vec.emplace_back("1-7");
    vec.emplace_back("0-7");
    vec.emplace_back("-1-7");
    vec.emplace_back("-1-6");
    vec.emplace_back("-1-5");
    while(true) {
        char a;
        int b,finalx, finaly;
        cin >> a >> b;
        string hold;
        if(a=='d'){
            finaly = y-b;
            for(int j=0;j<abs(b);j++){
                y--;
                hold = "";
                hold+=to_string(x);
                hold+=to_string(y);
                for(int i=0;i<int(vec.size());i++){
                    if(vec[i]==hold){
                        cout<<x<<" "<<finaly<<" DANGER";
                        return 0;
                    }
                }
                vec.push_back(hold);

            }
            cout<<x<<" "<<y<<" safe";
        }
        else if(a=='u'){
            finaly = y+b;
            for(int j=0;j<abs(b);j++){
                y++;
                hold = "";
                hold+=to_string(x);
                hold+=to_string(y);
                for(int i=0;i<int(vec.size());i++){
                    if(vec[i]==hold){
                        cout<<x<<" "<<finaly<<" DANGER";
                        return 0;
                    }
                }
                vec.push_back(hold);

            }
            cout<<x<<" "<<y<<" safe";
        }
        else if(a=='l'){
            finalx = x-b;
            for(int j=0;j<abs(b);j++){
                x--;
                hold = "";
                hold+=to_string(x);
                hold+=to_string(y);
                for(int i=0;i<int(vec.size());i++){
                    if(vec[i]==hold){
                        cout<<finalx<<" "<<y<<" DANGER";
                        return 0;
                    }
                }
                vec.push_back(hold);

            }
            cout<<x<<" "<<y<<" safe";
        }
        else if(a=='r'){
            finalx = x+b;
            for(int j=0;j<abs(b);j++){
                x++;
                hold = "";
                hold+=to_string(x);
                hold+=to_string(y);
                for(int i=0;i<int(vec.size());i++){
                    if(vec[i]==hold){
                        cout<<finalx<<" "<<y<<" DANGER";
                        return 0;
                    }
                }
                vec.push_back(hold);

            }
            cout<<x<<" "<<y<<" safe";
        }
        else if(a=='q'){
            return 0;
        }

        cout<<'\n';
    }
}