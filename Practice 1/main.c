//
//  main.c
//  Practice 1
//
//  Created by Li Cheng-En on 07/06/2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>
#include "math.h"
#include "Basic Practice.h"

// Practice Hello world! & Main Function
int main(void) {
    printf("Hello, World!");
    printf(" I did not want to change the row.\n");
    printf("\n");
    
    printf("Hellow world!\n");
    printf("I want to change the row right now.\n");
    printf("\n");
    
    practiceDeclareSomeVariables();
    
    printf("The aggregation from 1 to 100 is %d", aggregateIntegersFunction(), "\n");
    printf("\n");
    
    ninetyNineMultiplicationTable();
    showTheSeriesOfOddNumber();
    arrayWithSingleDimension();
    return 0;
}
// 1. "int" means this function would return integer.
// 2. We could deploy several parameters inside the (). But we did not have any of that, so we assign "void" here.
// 3. We need to add ";" in the end of each line in the function.
// 4. Generally, the function would return a value which is a default setting. If we did not want to return any value, we could return "0".
// 5. In C, the computer would run the function "main" first, so I could not change the name of it, or I could not run the codes.
// 6. I could use printf function to print what I want to the console. Remember that I could not use print function instead, while it is available in swift.
// 7. If you want to print out a double after a short text, you need to type "%d" in the end of the text. In the same way, you need to type "%i" if you want to add a integer after a short text.
