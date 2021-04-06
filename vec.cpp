#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.push_back(60);

    // for(int i = 0; i<v.size(); i++){
    //     cout << v[i] << " "; 
    // }

    
    // //we can use another kind of for loop
    // for(int x : v){ //That means ekhane sob v er element gula x er moddhe jabe
    //     cout << x << " ";
    // }
    // cout << endl;
    // cout << v.size() << endl;


    //We can use second bracket to show the element in vector
    vector<int> z{2,3,4,5,6}; 
    for(int x : z){
        cout << x << " ";
    }

}