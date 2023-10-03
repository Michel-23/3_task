#include <stdio.h>

int main (void)
{
    int V, U, T1, T2, S;
    printf("Boat speed in still water V=");
    scanf("%d", &V);
    printf("River flow speed U=");
    scanf("%d", &U);
    printf("Boat travel time on the lake T1=");
    scanf("%d", &T1);
    printf("Time the boat moves in the river T2=");
    scanf("%d", &T2);
    printf("Path S=%d", ((V*T1)+(U*T2)));
    return 0;
}