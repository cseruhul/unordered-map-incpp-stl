//Hashmap practice Problem.
/*
        For the output
        key value
        1   GFG
        3   GFG_1
        2   GFG_2
        8   GFG_3
        5   GFG_4

*/


#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int i;

    unordered_map<string, int> map;


    for(auto x : map){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
