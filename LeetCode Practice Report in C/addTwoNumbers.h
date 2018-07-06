//
//  addTwoNumbers.h
//  LeetCode Practice Report in C
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef addTwoNumbers_h
#define addTwoNumbers_h

struct ListNode {
    int unitDigit;
    int tensDigit;
    int hundredsDigit;
};

struct ListNode firstSeriesOfNumber = {};
struct ListNode secondSeriesOfNumber = {};

int addTwoNumbers(void) {
    printf("\nPlease type the first series of three numbers orderly: ");
    scanf("%d", &firstSeriesOfNumber.unitDigit);
    printf(" -> ");
    scanf("%d", &firstSeriesOfNumber.tensDigit);
    printf(" -> ");
    scanf("%d", &firstSeriesOfNumber.hundredsDigit);
    
    printf("\nPlease type the second series of three numbers orderly: ");
    scanf("%d", &secondSeriesOfNumber.unitDigit);
    printf(" -> ");
    scanf("%d", &secondSeriesOfNumber.tensDigit);
    printf(" -> ");
    scanf("%d", &secondSeriesOfNumber.hundredsDigit);
    
    int sumOfTwoSeriesOfNumber = (firstSeriesOfNumber.unitDigit+secondSeriesOfNumber.unitDigit)+10*(firstSeriesOfNumber.tensDigit+secondSeriesOfNumber.tensDigit)+100*(firstSeriesOfNumber.hundredsDigit+secondSeriesOfNumber.hundredsDigit);
    
    char maximumOfTheLengthOfResultString[5];
    sprintf(maximumOfTheLengthOfResultString, "%d" , sumOfTwoSeriesOfNumber);
    int length = strlen(maximumOfTheLengthOfResultString);
    
    printf("\nThe result is: ");
    for (int i = (length-1); i > 0; i--) {
        printf("%c -> ", maximumOfTheLengthOfResultString[i]);
    }
    printf("%c\n", maximumOfTheLengthOfResultString[0]);
    
    return 0;
}

#endif /* addTwoNumbers_h */
