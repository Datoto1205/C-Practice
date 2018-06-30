//
//  reverseString.h
//  LeetCode Practice Report in C
//
//  Created by 李政恩 on 30/06/2018.
//

#ifndef reverseString_h
#define reverseString_h

char* reverseString(char* s) {
    int lengthOfTheString = strlen(s);
    
    for (int i = lengthOfTheString; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
    
    return 0;
}


#endif /* reverseString_h */
