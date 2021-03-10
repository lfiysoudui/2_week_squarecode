#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;



int main(){
    string a;
    int len = 0;
    cin >> a;
    while(true){
        if(len*len >= a.length()){
            break;
        }
        len++;
    }
    for (int i = 0;i < len;i ++){
        for (int j = 0;j < len;j ++){
            cout << a[i+j*len];
        }
        cout << endl;
    }
    
}  
