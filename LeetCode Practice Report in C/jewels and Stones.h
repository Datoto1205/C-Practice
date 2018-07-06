//
//  jewels and Stones.h
//  LeetCode Practice Report in C
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef jewels_and_Stones_h
#define jewels_and_Stones_h

int numJewelsInStones(char* J, char* S) {
    int TypeOfJewels = strlen(J);
    int numberOfStones = strlen(S);
    int numberOfJewelsInTheSetOfStones = 0;
    
    for (int i = 0; i < TypeOfJewels; i++) {
        for (int m = 0; m < numberOfStones; m++) {
            if (J[i] == S[m]) {
                numberOfJewelsInTheSetOfStones = numberOfJewelsInTheSetOfStones + 1;
                //printf("%c", S[m]);
            }
        }
    }
    
    printf("The jewels I had: ");
    for (int i = 0; i < TypeOfJewels; i++) {
        printf("%c", J[i]);
    }
    
    printf("\nThe jewels I had: ");
    for (int m = 0; m < numberOfStones; m++) {
        printf("%c", S[m]);
    }
    
    
    printf("\nThe number of the jewels in that set of stones: %d\n\n", numberOfJewelsInTheSetOfStones);
    return 0;
}

#endif /* jewels_and_Stones_h */
