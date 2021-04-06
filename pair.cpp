#include<iostream>
#include<pair>
#include<vector>
#include<set>
using namespace std;

int main(){
    pair<int, string> p;
    p = make_pair(10, "hello");

    cout << p.first << endl; //to see the first iteam
    cout << p.second << endl; //to see the second item

    pair<int , int> p1{10,20,30,40,50}, p2{60,70,80,90,100};
    cout << boolalpha << (p1, p2) << endl;

    p1 = {10,20};
    p2 = {30,40};
    cout << boolalpha << (p1, p2) << endl;
    return 0;
}