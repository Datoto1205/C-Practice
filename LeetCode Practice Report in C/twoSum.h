//
//  twoSum.h
//  LeetCode Practice Report in C
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef twoSum_h
#define twoSum_h


 int inputArray[] = {2, 7, 11, 15};
 int FinalOutputArray[2];


int* twoSum(int* nums, int numsSize, int target) {
    int outputArray[2];
    
    for (int i = 0; i < numsSize; i++) {
        for ( int j = 1; j < numsSize; j++) {
            if (nums[i]+nums[j] == target) {
                outputArray[0] = nums[i];
                outputArray[1] = nums[j];
            }
        }
    }
    
    /*for (int i = 0; i < 2; i++) {
        printf("%d", outputArray[i]);
    }*/     /* This code is used to check the result inside the function. */
    
    return outputArray;
}

#endif /* twoSum_h */
