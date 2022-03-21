#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, l;
    cin >> n >> l;

    vector<long long> v;
    long long temp;
    
    for(long long i=0; i<n; i++){
        cin >> temp;
        v.push_back(temp);
    }

    for(long long i=0; i<v.size()-1; i++){
        cout << v[i] << " ";
    }
    cout << v[n-1] << endl;

    sort(v.begin(), v.end());

    long long max_dist = 0;
    for(long long i=0; i<v.size()-1; i++){
        if(v[i+1]-1-v[i] > max_dist) max_dist = v[i+1]-1-v[i];
        cout << v[i] << " ";
    }
    cout << v[n-1] << endl;

    if(2*v[0] > max_dist) max_dist = 2*v[0];
    if(2*(l-v[n-1]) > max_dist) max_dist = 2*(l-v[n-1]);
    float res = (float)max_dist/2.0;
    cout << res << endl;


    return 0;
}