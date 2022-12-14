#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long 
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m;
    vector<int> v1,v2;
    for(int i=0;i<n;i++){
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<m;i++){
        cin>>a;
        v2.push_back(a);
    }
    vector<int>::iterator it;
    vector<int>::iterator irt;

    /*
    5 4
    5 4 3 2
    4 5 4 3
    s = 8
    5 4 5 3 4 2 3
    v3[0] = v1[0] = 5    v3[2] = v1[1] v3[4] = v1[2]  v3[6] = v1[3]
    5 4 4 5 3 4 2 3 
    */
    it=unique(v1.begin(),v1.end());
    v1.resize(distance(v1.begin(),it));
    irt=unique(v2.begin(),v2.end());
    v2.resize(distance(v2.begin(),irt));
    int s=v1.size() + v2.size();
    vector <int> v3(s);
    for(int i = 0; i < s; i += 2){
        v3[i] = v1[i/2]; 
    }
    for(int i = 1; i < s; i += 2){
        v3[i] = v2[i/2];
    }

    vector<int>::iterator id=unique (v3.begin(),v3.end());
    v3.resize(distance(v3.begin(),id));
    for(id=v3.begin();id!=v3.end();id++){
        cout<<*id<<" ";
    }
}