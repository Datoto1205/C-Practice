//
//  main.c
//  LeetCode Practice Report in C
//
//  Created by 李政恩 on 29/06/2018.
//

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "instruction text.h"
#include "jewels and Stones.h"
#include "judgeCircle.h"
#include "reverseString.h"







int main(void) {
    
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
    
    return 0;
}
