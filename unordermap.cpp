//Hashmap practice Problem.
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int i;

    unordered_map<string, int> map;
    map["Hashmap"] = 10;
    map["Practice"] = 20;
    map["Contribute"] = 30;

    for(auto x : map){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
