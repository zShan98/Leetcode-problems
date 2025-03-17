#include <iostream>
using namespace std;

bool canJump(vector<int>& nums) {
    bool flag = true;
            for(int x=nums.size()-1; x>= 0 && flag; x--){
                if(nums[x] == 0){
                    flag=false;
                    for(int i = x-1; i>=0;i--){
                        if(nums[i]-(x-i) > 0 && i>=0){
                        flag=true;
                        break;
                        }
                    }
                }
                
            }
            return flag;
        }

int main(){
    vector<int> a({1});
    canJump(a);
}