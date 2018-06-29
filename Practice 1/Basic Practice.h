//
//  Basic Practice.h
//
//  Created by Li Cheng-En on 19/06/2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//
//  ---------------------<Outline>---------------------
//  Declaration                                <Row >
//  For-loop                                   <Row >
//  Double For-loop & If                       <Row >
//  Break And Skip The Loop                    <Row >
//  Array with Single Dimension                <Row >
//  Ask User To Type The Value                 <Row >

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
                printf("%d * %d = %d \n", j, i, i*j);
            } else if (i == 9) {
                printf("%d * %d = %d \n", j, i, i*j);
                printf("\n");
            } else {
                printf("%d * %d = %d \t  ", j, i, i*j);
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
// 1. I could create an array by adding "[]" in the end of the name of the variables. Remember that you need to add "*" before the name of the variables when you want to declare an array of string.
// 2. To get more information about the array of character and that of string, please visit the website at "https://stackoverflow.com/questions/8732325/how-to-declare-strings-in-c".



// Ask User To Type The Value
int requireUserToGiveDataOfNameAndAge(void) {
    int requiredDouble;
    char *requireNameString[50];
    
    printf("Please enter your name without dash or space: ");
    scanf("%s", requireNameString[0]);
    printf("Please enter the number of your age: ");
    scanf("%d", &requiredDouble);
    
    printf("%s are %d years old! \n", requireNameString[0], requiredDouble);
    
    return 0;
}
// 1. Function "scanf(type, variable)" is used to ask user to type the data manually.
// 2. We need to add "&" before the name of the variables when we want to change the data of double variable on the scanf() function, or the value could not be edited.



// Array
int createArraysWithTwoDimension(void) {
    int rowOfMatrix = 3;
    int columnOfMatrix = 3;
    int identityMatrix[rowOfMatrix][columnOfMatrix];
    
    printf("\n");
    printf("Identity Matrix: \n");
    
    for (int row = 0; row < rowOfMatrix; row++) {
        for (int column = 0; column < columnOfMatrix; column++) {
            if (row == column) {
                identityMatrix[row][column] = 1;
            } else {
                identityMatrix[row][column] = 0;
            }
            printf("%d \t", identityMatrix[row][column]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    int anotherMatrixWithTwoDimension[3][4] = {
        1, 2, 3, 4,
        5, 6, 7, 8,
        9, 10, 11, 12
    };
    
    printf("Another Matrix with three row and four column. \n");
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            printf("%d \t", anotherMatrixWithTwoDimension[row][column]);
        }
        printf("\n");
    }
    
    return 0;
}
// 1. We could add [number of row][number of column] behind the name of the matrix to declare it.
// 2. When we want to print out the matrix, we need to print out the element of the matrix respectively.
// 3. We could use "\t" to indent the string.

/*int searchTheStringInArray(void) {
    char *sourceOfStringArray[] = {"I", "you"};
    char *theStringIWantToSearch[] = {"you"};
    
    int strcmp(sourceOfStringArray, theStringIWantToSearch);
    
    char* strchr(theStringIWantToSearch, sourceOfStringArray);
    //int resultOfSearchInStringArray =
    printf("%d", resultOfSearchInStringArray);
    return 0;
}*/





#endif /* Basic_Practice_h */
