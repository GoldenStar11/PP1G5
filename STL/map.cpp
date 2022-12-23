#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <int, int> mp;
    for(int i=0;i<n;i++){
        int a,b=0;
        cin>>a;
        mp[a];
    }
    int m;
    cin>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    cout<<endl;
    bool b;
    b=false;
    map<int,int> :: iterator it;
    for(int i=0;i<m;i++){
        
        for(it=mp.begin();it!=mp.end();it++){
            if(v[i]==it->first){
                b=true;
                cout<<it->second<<endl;
                break;
            }
            
        }
        if(!b){
            cout<<0<<endl;
        }

    }

   
}