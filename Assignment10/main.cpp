#include <iostream>
#include<vector>
using namespace std;

bool BellmanFord(int n , int m);



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
        if(BellmanFord(n,m)) cout << "possible" << endl;
        else cout << "not possible" << endl;


    }
    return 0;
}

bool BellmanFord(int n , int m){

}

