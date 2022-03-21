#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int temp;
    while(cin>>temp){
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        cout << v[i] << "+";
    }
    cout << v[v.size()-1] << endl;;


    return 0;
}