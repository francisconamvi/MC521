#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i=0; i<n;i++){
        string temp;
        cin >> temp;
        if(!m.count(temp)){
            m[temp] = 1;
            cout << "OK\n";
        }
        else{
            cout << temp << m[temp] << endl;
            m[temp] += 1;
        }
    }

}