//
//  Basic Practice.h
//  Practice 1
//
//  Created by Li Cheng-En on 19/06/2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef Basic_Practice_h
#define Basic_Practice_h

// I need to put my functions I want to use in seperated header file, or I would implicitely declare the function which is not valid. I also could type this code before the function of main, but it is a little bit wierd. To get more information about this issue, please visit the website at "https://stackoverflow.com/questions/15850042/xcode-warning-implicit-declaration-of-function-is-invalid-in-c99".



// Declaration
int practiceDeclareSomeVariables(void) {
    int practiceInteger = 0;
    double practiceDouble = 1.0;
    char practiceCharacter[] = "I want to show a string instead of a character!";
    
    printf("%d \n", practiceInteger);
    printf("%f \n", practiceDouble);
    printf("%s \n", practiceCharacter);
    printf("\n");
    
    return 0;
}
// 1. In C, the type of data included integer, float and character.
// 2. If I want to declare a string, remember that the string is a kind of matrix of characters, so I need to add "[]".



// For-loop
int aggregateIntegersFunction(void) {
    
    int integerUsedToAggregate = 0;
    
    for (int i = 1; i <= 100; i++) {
        integerUsedToAggregate = integerUsedToAggregate + i;
    }
    
    return integerUsedToAggregate;
}
// We need to declare the type of "i" in the for-loop, <= means "no larger than", and "i++" means that the i would increase gradually.



// Double For-loop & If
int ninetyNineMultiplicationTable(void) {
    
    for (int j = 2; j <= 9; j++) {
        for (int i = 1; i <= 9; i++) {
            if (i == 3 || i == 6) {
                printf("%d * %d = %d\n", j, i, i*j);
            } else if (i == 9) {
                printf("%d * %d = %d\n", j, i, i*j);
                printf("\n");
            } else {
                printf("%d * %d = %d   ", j, i, i*j);
            }
        }
    }
    
    return 0;
}
// When we want to print several integers inside a text, we need to type the structure of the text first, and then we could type the integers orderly.



// Break And Skip The Loop
int showTheSeriesOfOddNumber(void) {
    for (int i = 1; i < 100; i++) {
        if (i % 2 == 0) {
            continue;
        } if ( i == 11) {
            break;
        } else {
            printf("%d \n", i);
        }
    }
    
    printf("\n");
    return 0;
}



// Array with Single Dimension
int arrayWithSingleDimension(void) {
    int practiceDoubleArrayWithSingleDimension[] = {1, 2, 3};
    char practiceCharacterArrayWithSingleDimension[] = {"Cindy", "John"};
    char *practiceStringArrayWithSingleDimension[] = {"Cindy", "John", "Tina"};
    
    printf("%d \n", practiceDoubleArrayWithSingleDimension[1]);
    printf("%c \n", practiceCharacterArrayWithSingleDimension[1]);
    printf("%s \n", practiceStringArrayWithSingleDimension[1]);
    
    return 0;
}
// To get more information, please visit the website at https://stackoverflow.com/questions/8732325/how-to-declare-strings-in-c



#endif /* Basic_Practice_h */
