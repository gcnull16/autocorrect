#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
char msg[] = "hello world! \n\n";


if(islower(msg[0]))
{
    msg[0] = toupper(msg[0]);
    printf("Auto-Correct:   \n %s", msg);

}
    else
    {
     printf("No auto-correct needed.");
    }
return 0;
}


