#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map <int,int> map;
    for(int i = 0; i < nums.size(); i++){
        int b = target - nums[i];
        if(map.count(b)){
            return {map[b],i};
        }
        map[nums[i]] = i;
    }
    return {};
}

int main(){
    
}