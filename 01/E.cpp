#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    int b=0;

    cin >> x;
    b += x%2;

    cin >> x;
    b = b << 1;
    b += x%2;
    
    cin >> x;
    b = b << 1;
    b += x%2;

    if(b == 0b100 || b==0b011){
        cout << 1 << endl;
        return 0;
    }
    else if(b == 0b010 || b == 0b101){
        cout << 2 << endl;
        return 0;
    }
    else if(b == 0b001 || b==0b110){
        cout << 3 << endl;
        return 0;
    }
    for(int i=3; i<n; i++){
        cin >> x;
        b = b << 1;
        b = b&0b0111;
        b += x%2;
        if(b == 0b001 || b==0b110){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}