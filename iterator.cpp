#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int> v{10,20,30,40,50,60};
    //we can define vector like this
    // vector<int> :: iterator it = v.begin();

    //but we can use better one to do this
    //auto it = v.begin();
    
    //to see the next element of iterator we have to code like this
    auto it = v.begin()+1;
    cout << *it << endl; //we must use star to define the iterator value


    


    return 0;
}