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




#endif /* Medium_Practice_h */
