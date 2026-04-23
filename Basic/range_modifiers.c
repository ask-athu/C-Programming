// range modifiers : Modifies range of existing primitive data types! 
// as there is no basic way to check for range! will use limits.h

#include <stdio.h>
#include <limits.h>

int main()
{
    signed int s = INT_MAX;
    signed int s2 = INT_MIN;
    unsigned int u1 = UINT_MAX;
    // unsigned int u2 = UINT_MIN;  do not exist as minimum of unsigned is ALWAYS 0 !!

    printf("Signed MAX : %d\n", s);
    printf("Signed MIN : %d\n",s2);
    printf("Unsigned MAX : %u\n", u1);
    // printf("Unsigned MIN : %u\n", u2);

    s = s + 1;
    u1 = u1 + 1;  

    printf("Signed after overflow: %d\n", s);
    printf("Unsigned after overflow: %u\n", u1);
}