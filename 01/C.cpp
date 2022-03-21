#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
    bool hasCat;
    vector<long int> edges;

};

long int n_rest(Node v[], long m, long cur, long conseq, long f){
    // cout << cur << " " << f << endl;

    /*leaf*/
    if(f!=-1 && v[cur].edges.size()==1){ 
        if(conseq + v[cur].hasCat <= m) return 1;
        return 0;
    }

    if(v[cur].hasCat) conseq += 1;
    else conseq = 0;

    if(conseq <= m){
        long int temp=0;
        for(long int c:v[cur].edges){
            if(c!=f)
                temp += n_rest(v, m, c, conseq, cur);
        }
        return temp;
    }
    return 0;
}


int main(){
    long int m, n;
    cin >> n >> m;
    Node v[n+1];
    for(int i=0; i<n; i++){
        cin >> v[i+1].hasCat;
    }
    long int t1, t2;
    for(long int i=1; i<n; i++){
        cin >> t1 >> t2;
        v[t1].edges.push_back(t2);
        v[t2].edges.push_back(t1);
    }

    cout << n_rest(v, m, 1, 0, -1) << endl;


    return 0;
}