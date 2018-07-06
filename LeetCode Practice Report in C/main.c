//
//  main.c
//  LeetCode Practice Report in C
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "math.h"

#include "instruction text.h"
#include "jewels and Stones.h"
#include "judgeCircle.h"
#include "reverseString.h"
#include "addTwoNumbers.h"
#include "twoSum.h"


int main(void) {
    freopen("output of LeetCode Practice Report in C.txt","w",stdout);
    
    printOutParagraphOne();
    
    numJewelsInStones("aA", "aAAbbbb");
    numJewelsInStones("z", "ZZ");
    numJewelsInStones("aAbBcC", "UCIaCcpaOCFbPahuonecxbhBaBB");
    
    printOutParagraphBetweenQuestionOneAndTwo();
    
    judgeCircle("UD");
    judgeCircle("LL");
    judgeCircle("LUDRLDULRRURLRLDRLDU");
    
    printOutParagraphBetweenQuestionTwoAndThree();
    
    reverseString("Hello");
    reverseString("god");
    reverseString("net");
    
    printOutParagraphBetweenQuestionThreeAndFour();
    addTwoNumbers();
    
    printOutParagraphBetweenQuestionFourAndFive();
    for (int i = 0; i < 2; i++) {
        FinalOutputArray[i] = twoSum(inputArray, 4, 9)[i];
    }
    printf("\n[ %d\t, %d\t] \n", FinalOutputArray[0], FinalOutputArray[1]);
    
    for (int i = 0; i < 2; i++) {
        FinalOutputArray[i] = twoSum(inputArray, 4, 18)[i];
    }
    printf("\n[ %d\t, %d\t] \n", FinalOutputArray[0], FinalOutputArray[1]);
    
    printOutLastParagraph();
    
    return 0;
}
