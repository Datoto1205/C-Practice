//
//  judgeCircle.h
//  LeetCode Practice Report in C
//
//  Created by 李政恩 on 30/06/2018.
//

#ifndef judgeCircle_h
#define judgeCircle_h

bool judgeCircle(char* moves) {
    int numberOfStepOfVerticalMovingOfRobot = 0;
    int numberOfStepOfHorizontalMovingOfRobot = 0;
    int numberOfStepOfMovingOfRobot = 0;
    numberOfStepOfMovingOfRobot = strlen(moves);
    
    for (int i = 0; i < numberOfStepOfMovingOfRobot; i++) {
        if (moves[i] == 'U') {
            numberOfStepOfVerticalMovingOfRobot = numberOfStepOfVerticalMovingOfRobot + 1;
        } else if (moves[i] == 'D') {
            numberOfStepOfVerticalMovingOfRobot = numberOfStepOfVerticalMovingOfRobot - 1;
        } else if (moves[i] == 'L') {
            numberOfStepOfHorizontalMovingOfRobot = numberOfStepOfHorizontalMovingOfRobot + 1;
        } else if (moves[i] == 'R') {
            numberOfStepOfHorizontalMovingOfRobot = numberOfStepOfHorizontalMovingOfRobot - 1;
        }
    }
    
    printf("\nThe progress of moving of the robot: ");
    for (int i = 0; i < numberOfStepOfMovingOfRobot; i++) {
        printf("%c", moves[i]);
    }
    printf("\nWhether the robot is on the original position: ");
    
    if (numberOfStepOfVerticalMovingOfRobot == 0 && numberOfStepOfHorizontalMovingOfRobot == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
    
}


#endif /* judgeCircle_h */
