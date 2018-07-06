
//  Medium Practice.h
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//
//  ---------------------<Outline>---------------------
//  Convey the value through the function.     <Row 21>
//  Print some value to the file of txt.       <Row 38>
//  Struct                                     <Row 76>
//  Switch                                    <Row 116>

#ifndef Medium_Practice_h
#define Medium_Practice_h

int externalInteger = 5;
int anotherExternalInteger = 0;



// Convey the value to the variable outside the function.
int changeTheExternalInteger(void) {
    
    int resultOfSumOfConsecutiveNumbers = 0;
    
    for (int i = 0; i <= 10; i++ ) {
        resultOfSumOfConsecutiveNumbers = resultOfSumOfConsecutiveNumbers + i;
    }
    
    anotherExternalInteger = resultOfSumOfConsecutiveNumbers;
    return 0;
}
// 1. I could not keep the value inside the function after the function ended.
// 2. I did not need to use "extern" to get the global variables in another .h file if I have included the .h file in my .c file.



// Print some value to the file of txt.
int printOutToTXTFile(void) {
    FILE *f = fopen("Export TXT file.txt", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    
    // Print some text
    fprintf(f, "Hello World in txt file! \n");
    
    // Print integers and floats
    int i = 1;
    float pi = 3.14159;
    fprintf(f, "Integer: %d \nfloat: %f\n", i, pi);
    
    // Printing chatacters
    char c[10] = {'I', 'L', 'O', 'V', 'E', 'U'};
    int lengthOfStringMatrix = strlen(c);
    fprintf(f, "Characters: ");
    
    for (int i = 0; i <= lengthOfStringMatrix; i++) {
    fprintf(f, "%c", c[i]);
    }
    
    fclose(f);
    
    return 0;
}
// 1. If I want to print something in a txt file, I need to use fopen() function to create & open a file; and then I could use fprintf() function to print the things I want in the file; at the end, I need to use fclose() function to close the txt file.
// 2. I need to apply the stdlib.h file if I want to use code "exit".
// 3. I could use strlen() function to get the length of a string matrix, but I need to apply the string.h file first.
// 4. Remember to assign the restricted maximum of the length of the string matrix, or you would find bug when you use the strlen() function.
// 5. I could not use freopen() to print the contents in the txt file successfully here.
// 6. To get more information about how to print out some content to the txt file, please visit the website at https://stackoverflow.com/questions/11573974/write-to-txt-file or https://www.zhihu.com/question/30662049



// Struct
struct informationOfMyExGirlfriend {
    char name[100];
    int age;
};

struct informationOfMyExGirlfriend first = {"Cindy", 21}; /* Initialize the struct outside the function. */

struct informationOfMyExGirlfriend convenience[] = {
    {"Cindy", 21},
    {"Tina", 21},
    {"Michelle", 20},
}; /* Another way to declare and initialize the struct with several values. */

int initializeInformationOfMyExGirlfriend(void) {
    
    struct informationOfMyExGirlfriend second;
    strcpy(second.name, "Tina");
    second.age = 21;
    struct informationOfMyExGirlfriend third = {"Michelle", 20};
    /*Initialize the struct inside the function*/
    
    printf("\n%s is %d years old in 2018.\n", first.name, first.age);
    printf("%s is %d years old in 2018.\n", second.name, second.age);
    printf("%s is %d years old in 2018.\n", third.name, third.age);
    
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("Beautiful %s is %d years old in 2018.\n", convenience[i].name, convenience[i].age);
    }
    
    return 0;
}
// 1. We could use struct to assign detailed properties of data.
// 2. After we declare the architecture of the struct, we could give names and values to the struct (initialization); we even could use matrix & loop to do it more conveniently.
// 3. Remember to add ";" at the end of struct.
// 4. We need to use strcpy() function to assign the string data to the struct, or we would face the warning if we use the normal printf() function.



// Switch
int practiceToUseSwitch(int grade) {
    switch (grade) {
        case 0 ... 40:
            printf("%s", "Go die! \n\n");
            break;
        case 41 ... 60:
            printf("%s", "Try your best! \n\n");
            break;
        case 61 ... 80:
            printf("%s", "You could be better! \n\n");
            break;
        case 81 ... 90:
        case 91 ... 100:
            printf("%s", "Good job! \n\n");
            break;
        default:
            break;
    }
    
    return 0;
}
// 1. I could use switch to simplify the code and inhance the efficiency of the codes without "if & else".
// 2. However, it seems that I could only could use switch to compare the numbers. I could not type "string & character" in the case part in the switch. To get more information of it, please visit the website at https://stackoverflow.com/questions/4014827/best-way-to-switch-on-a-string-in-c
// 3. "A ... B" means that runing from number A to number B.



// Different Type of Function
char *practiceDeclareAFunctionWithCharacterType(int age) {
    char *whetherYouCouldMarryWithOther;
    
    switch (age) {
        case 0 ... 18:
            whetherYouCouldMarryWithOther = "no \n";
            break;
            
        default:
            whetherYouCouldMarryWithOther = "yes \n";
            break;
    }
    
    return whetherYouCouldMarryWithOther;
}

void practiceDeclareAFunctionWithVoidType(void) {
    puts("Nothing was happened! \n");
}
// 1. We not only could declare a function with integer type, but we also could declare a function with other types, such as character and void. But remember that the type of the value the function return need to be as the same as that of the function.
// 2. Admittedly, we could declare the functions with different type, but the type of main() function only could be integer.



// Passing An Array To The Function
int theMoneyICouldGet(int *Array) {
    Array[0] = Array[0] + 1;
    Array[1] = Array[1] + 2;
    Array[2] = Array[2] + 3;
    
    return *Array;
}
// 1. I need to declare the input array in elsewhere.
// 2. Notice the order in the [] part.
// 3. The meaning of "*Array" equals to that of "Array[]".



#endif /* Medium_Practice_h */
