
//  Hard Practice.h
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//
//  ---------------------<Outline>---------------------
//  Pointer (1)                                <Row 19>
//  Pointer (2)                                <Row 35>
//  Pointer And Array                          <Row 56>
//  Pointer And String (1)                     <Row 80>
//  Pointer And String (2)                    <Row 108>

#ifndef Hard_Practice_h
#define Hard_Practice_h



// Pointer (1)
int fetchTheAddressOfVariableInMemory(void) {
    int theNumberOfMyFinger = 10;
    printf("The value of the variable 'theNumberOfMyFinger' is %d. \n", theNumberOfMyFinger);
    printf("The address of the variable 'theNumberOfMyFinger' in the memory is at %p. \n", &theNumberOfMyFinger);
    printf("The real value at the above location in the memory is %d.\n", *&theNumberOfMyFinger);
    
    return 0;
}
// 1. I could use "&" to fetch the address of the variable in the memory.
// 2. I could use "*" to get the real value of a address of memory.
// 3. "*&variable" equal to "variable".
// 4. Except integer, float and character, pointer is another type of data in c; we need to use "%p" when we want to use pointer variable in printf() function.



// Pointer (2)
int usingThePointerOfVariable(void) {
    int theNumberOfTheKidneyIOwn = 2;
    
    int *pointerOfVariableOftheNumberOfTheKidneyIOwn = &theNumberOfTheKidneyIOwn;
    printf("\nThe address of this pointer of this variable with integer type is: %p. \n", pointerOfVariableOftheNumberOfTheKidneyIOwn);
    
    *pointerOfVariableOftheNumberOfTheKidneyIOwn = 50;
    printf("Through the pointer of variable, after we fetched and changed the value, the value of this pointer of variable is: %d.\n", *pointerOfVariableOftheNumberOfTheKidneyIOwn);
    printf("The value of the original value was %d now, it indicates that the value would also be changed.\n", theNumberOfTheKidneyIOwn);
    printf("The address of this pointer of variable in the memory is %p, which is different from that of the original variable 'theNumberOfTheKidneyIOwn', which is %p.\n\n", &pointerOfVariableOftheNumberOfTheKidneyIOwn, &theNumberOfTheKidneyIOwn);
    
    return 0;
}
// 1. During the declaration of variable, when we use "*", it means that the variable we want to declare is a pointer of variable.
// 2. After we finish the declaration of pointer of variable, when we used "*" again, it means that we want to fetch the original value of the variable instead of the address of that variable.
// 3. We also could use "&" to fetch the address of the pointer of variable, too.
// 4. The tutorial I refer to is the wensite at: https://kopu.chat/2017/05/15/c語言-超好懂的指標，初學者請進～/



// Pointer And Array
int pointerAndArray(void) {
    int array[6] = {10, 20, 30, 40, 50};
    int *pointerOfArray = &array;
    
    for (int i = 0; i < 6; i++) {
        printf("%p \n", pointerOfArray[i]);
    }
    
    printf("%d \n", pointerOfArray[0]);
    printf("%d \n", array[0]);
    printf("%d \n", *(array + 0));
    printf("%d \n", *(pointerOfArray+0));
    
    pointerOfArray[5] = 60;   /* Add more element into the array. */
    printf("%d", array[5]);
    
    return 0;
}
// 1. The length of the array could not be changed afterwards in c.
// 2. We could use several different way to fetch the element of array. Some of the ways need the application of pointer of variable.



// Pointer And String (1)
int pointerAndStringFirst(void) {
    char myGoal;
    char *mySecondGoal;
    
    myGoal = "Study Abroad";
    mySecondGoal = "Get a girl friend";
    
    printf("\n\n");
    // printf("%c", myGoal);     Error would occure if you run this code.
    // puts(myGoal);             Error would occure if you run this code.
    
    puts(mySecondGoal);
    printf("%s", mySecondGoal);
    printf("\n%p \n", *mySecondGoal);
    
    mySecondGoal = "Entrepreneurship";
    puts(mySecondGoal);
    
    
    return 0;
}
// 1. In the past, we only could use array to declare a string array. It's complicated. Now, when we use the pointer to declare the character, we could assign a new value to it only with "=" afterward. (If we did not use pointer first, we would face warnings and bugs instead.)
// 2. We could use puts() function to print data in the console. The advantage of put() function is that the data would change the line automatically. However, the disadvantage of it is that it could not assign different types of data. (So it seems that it only could print out %c and %s data.)
// 3. To get more information about puts() function, please visit the website at https://blog.csdn.net/xingjiarong/article/details/47282817



// Pointer And String (2)
int pointerAndStringSecond(void) {
    
    /* Process the string */
    char *theCountriesIVisitedBefore[6] = {"Germany", "Singapore", "Vietnam", "China", "Japan"};
    printf("\n");
    for (int i = 0; i < 5; i++) {
        puts(theCountriesIVisitedBefore[i]);
    }
    
    /* Add more element */
    theCountriesIVisitedBefore[5] = "USA";
    puts(theCountriesIVisitedBefore[5]);
    
    /* Two-dimension array */
    char *theUniversityIWantToStudy[4][2] = {
        "Washington State", "University of Washington",
        "California State", "University of California - SanDiego",
        "Arizona State", "University of Arizona",
        "Pennsylvania State", "Carnegie Mellon University",
    };
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%s \t %s \n", theUniversityIWantToStudy[i][0], theUniversityIWantToStudy[i][1]);
    }
    
    return 0;
}
// After we use the pointer, we could create single-dimension string array and two-dimensions array more easily.



#endif /* Hard_Practice_h */
