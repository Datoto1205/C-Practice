//
//  Medium Practice.h
//  Practice 1
//
//  Created by 李政恩 on 26/06/2018.
//  Copyright © 2018 Beichi Techonology. All rights reserved.
//

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
// 6. To get more information about how to print out some content to the txt file, please visit the website at https://stackoverflow.com/questions/11573974/write-to-txt-file



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



#endif /* Medium_Practice_h */
