//
//  reverseString.h
//  LeetCode Practice Report in C
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
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
