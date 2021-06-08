#include <iostream>
#include<vector>
using namespace std;

int Max = 100000000;





int main() {
    int test,n,m;
    cin >> test;
    while(test--){
        cin >> n >> m;
        vector <pair<int,int>> r;
        vector<int> w;
        int x,y,t;

        for(int i =0 ; i < m; i++){
            cin >> x >> y >> t;
            r.push_back(make_pair(x,y));
            w.push_back(t);
        }


        int d[n];
        fill(d , d + n, Max);
        d[0] = 0;

        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < m;j++){
                if(d[r[j].first] != Max){
                    if(d[r[j].first] + w[j] < d[r[j].second]){
                        d[r[j].second] = d[r[j].first] + w[j];
                    }
                }
            }
        }

        int f = 1;
        for(int i = 0; i < m; i++){
            if(d[r[i].first] + w[i] < d[r[i].second]){
                cout << "possible" << endl;
                f = 0;
                break;
            }
        }



        if(f == 1)cout << "not possible" << endl;


    }
    return 0;
}



