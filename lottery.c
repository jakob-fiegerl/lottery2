#include <stdio.h>
#include <stdlib.h>

#Merge this!
#Hallo Thomas
#jakob ist der Tollste
#Brand

int calculate_result(int white_balls[5], int power_ball)
{
    return 0;
}

int main(int argc, char** argv)
{
    if (argc != 7)
    {
        fprintf(stderr, "Usage: %s power_ball (5 white balls)\n", argv[0]);
        return -1;
    }
    
    #Jakob do some comments pls

    int power_ball = atoi(argv[1]);

    int white_balls[5];
    for (int i=0; i<5; i++)
    {
        white_balls[i] = atoi(argv[2+i]);
    }

    int result = calculate_result(white_balls, power_ball);

    printf("%d percent chance of winning\n", result);

    return 0;
}

pls
#Kommentar
jsdkafjösd
