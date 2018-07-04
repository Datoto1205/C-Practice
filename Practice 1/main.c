//
//  main.c
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "Basic Practice.h"
#include "Medium Practice.h"
#include "Hard Practice.h"

// Practice Hello world! & Main Function
int main(void) {
    char *returnString;
    int inputArray[] = {50, 100, 150};
    
    
    printf("Hello, World!");
    printf(" I did not want to change the row.\n");
    printf("\n");
    
    printf("Hellow world!\n");
    printf("I want to change the row right now.\n");
    printf("\n");
    
    practiceDeclareSomeVariables();
    
    printf("The aggregation from 1 to 100 is %d. \n", aggregateIntegersFunction());
    printf("\n");
    
    ninetyNineMultiplicationTable();
    showTheSeriesOfOddNumber();
    arrayWithSingleDimension();
    createArraysWithTwoDimension();
    //requireUserToGiveDataOfNameAndAge();   /* I disable this code because I did not want to type something.*/
    //AskUsersToTypeTheValue();   /* I disable this code because I did not want to type something.*/
    
    searchTheStringInArray();
    initializeInformationOfMyExGirlfriend();
    
    
    extern int externalInteger;
    printf("\nExternal integer is : %d \n", externalInteger);
    changeTheExternalInteger();
    printf("Another external integer is : %d \n \n", anotherExternalInteger);
    //printOutToTXTFile();
    practiceToUseSwitch(65);
    
    returnString = practiceDeclareAFunctionWithCharacterType(17);
    puts(returnString);
    practiceDeclareAFunctionWithVoidType();
    theMoneyICouldGet(inputArray);
    for (int i = 0; i <= 2; i++) {
        printf("%d", inputArray[i]);
    }
    
    fetchTheAddressOfVariableInMemory();
    usingThePointerOfVariable();
    pointerAndArray();
    pointerAndStringFirst();
    pointerAndStringSecond();
    
    return 0;
}
// 1. "int" means this function would return integer.
// 2. We could deploy several parameters inside the (). But we did not have any of that, so we assign "void" here.
// 3. We need to add ";" in the end of each line in the function.
// 4. Generally, the function would return a value which is a default setting. If we did not want to return any value, we could return "0".
// 5. In C, the computer would run the function "main" first, so I could not change the name of it, or I could not run the codes.
// 6. I could use printf function to print what I want to the console. Remember that I could not use print function instead, while it is available in swift.
// 7. If you want to print out a double after a short text, you need to type "%d" in the end of the text. In the same way, you need to type "%i" if you want to add a integer after a short text.
// 8. We could use "extern" to call the variable located in other parts of this codes without calling any function.
// 9. When you faced the error warning "Function definition is not allowed here", please check whether you forget to type " " ".

// To get more information about how to export the content in the console into .txt file, please visit the website at https://blog.csdn.net/zhujianing1993/article/details/63687459

