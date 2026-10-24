#include <bits/stdc++.h>
using namespace std;

int aim(char a[10][10]){
    int ans = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='X') ans+=min({i, j, 9 - i, 9 - j}) + 1;;
            }
        }
        return ans;
    }


int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char a[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin >> a[i][j];
            }
        }
        cout << aim(a) << "\n";
    }

    return 0;
}