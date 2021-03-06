//
//  instruction text.h
//  LeetCode Practice Report in C
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef instruction_text_h
#define instruction_text_h

void printOutParagraphOne(void) {
    int space = 118;
    char *string = "LeetCode Practice Report in C";
    printf ("%*s\n", space / 2 + strlen(string) / 2,string);
    
    printf("\n\tThis report, which reflect the result of the codes I wrote, was produced by the “main.c” file which located in “LeetCode Practice Report in C” folder automatically.\n\n1. The language of the codes is C, and the compiler I used is Xcode.\n2. The question I practiced here were found in LeetCode, a popular website of coding questions set in the US.\n\n\n\n<Question 1> (no. 771): Jewels and Stones\n(The details of this question is on the website at https://leetcode.com/problems/jewels-and-stones/description/ )\n\nComplier result: \n\n");
}

void printOutParagraphBetweenQuestionOneAndTwo(void) {
    printf("\n\n<Question 2> (no. 657): Judge Route Circle\n(The details of this question is on the website at https://leetcode.com/problems/judge-route-circle/description/ )\n\nComplier result: \n");
}

void printOutParagraphBetweenQuestionTwoAndThree(void) {
    printf("\n\n\n<Question 3> (no. 344): Reverse String\n(The details of this question is on the website at https://leetcode.com/problems/reverse-string/description/ )\n\nComplier result:  \n");
}

void printOutParagraphBetweenQuestionThreeAndFour(void) {
    printf("\n\n\n<Question 4> (no. 2): Add Two Numbers\n(The details of this question is on the website at https://leetcode.com/problems/add-two-numbers/description/ )\n(Notice: You only could type three numbers in each number series, and you could only type single number each time, or the code would crash!)\n\nComplier result:\n" );
}

void printOutParagraphBetweenQuestionFourAndFive(void) {
    printf("\n\n\n<Question 5> (no. 1): Two Sum\n(The details of this question is on the website at https://leetcode.com/problems/two-sum/description/ )\n(Notice: If the target you type could not be satisfied, then the output would be the array [0, 0]!)\n\nComplier result:\n ");
}

void printOutLastParagraph(void) {
    printf("\n\n\tI applied several ideas of C in this practice, which included different type of data, control flow and array. I finished this practice by myself.\n");
}

#endif /* instruction_text_h */
