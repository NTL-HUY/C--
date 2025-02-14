#include <algorithm>
#include <unordered_set>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t) {
    unordered_map<char,int> map;
    if(s.length() != t.length()){
        return false;
    }

    for(char c : s){
        map[c]++;
    }

    for(char c : t){
        if(map.count(c) && map[c] != 0){
            map[c]--;
        }else{
            return false;
        }
    }

    return true;
}

bool isAnagram1(string s, string t){
    unordered_map<char,int> map;
    int n = s.length();
    if( n != t.length()) return false;
    for(int i = 0; i < n; i++){
        map[s[i]]++;
        map[t[i]]--;
    }
    for(char c : s){
        if(map[c] != 0){
            return false;
        }
    }
    return true;
}


int main(){
    
    return 0;
}