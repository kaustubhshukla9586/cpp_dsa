
#include <stdio.h>

int minSubArrayLen(int target, int* nums, int numsSize) {
    int n = numsSize;
    int total = 0;
    int elem = 0;
    int min_elem = n+1;
    for (int i = 0; i < n; i++){
        elem = 0;
        total = 0;
        total = nums[i];
        elem++;
        if (total >= target){
            if (min_elem > elem) {
                min_elem = elem;
            }
        } 
        else {
            for (int j = i+1; j < n; j++){
                total += nums[j];
                elem++;
                if (total >= target){
                    if (min_elem > elem){
                        min_elem = elem;
                        break;
                    }
                }
            }  
        }  
    }  
    if (min_elem == n+1){
        return 0;
    } else {
        return min_elem;
    }
}  

int main() {
   
    return 0;
}