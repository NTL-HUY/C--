#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>
using namespace std;


bool solution1(vector<int> & nums){
    for(int i=0; i < nums.size() - 1; i++ ){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[j] == nums[i])
                return true;
        }
    }
    return false;
}

bool solution2(vector<int> & nums){
    unordered_set<int> set;
    for(int a : nums){
        if(!set.insert(a).second)
            return false;
    }
    return true;
}
bool solution3(vector<int> & nums){
    sort(nums.begin(),nums.end());
    for(int i = 0; i < nums.size() -1 ; i++){
        if(nums[i] == nums[i+1])
            return true;
    }
    return false;
}

bool solution4(vector<int> & nums){
    unordered_map<int,int> map;
}
int main(){
    return 0;
}