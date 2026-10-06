#include <stdio.h>
#include <stdlib.h>

int main()
{double marks;
printf("enter student marks:");
scanf("%lf",&marks);
if(marks>=70)
{
    printf("grade A\n");
}
    else if(marks>=60)
    {
        printf("grade B\n");
    }
    else if(marks>=50)
    {
        printf("grade C\n");
    }
    else if(marks>=40)
    {
        printf("grade D\n");
    }
    else
    {printf("grade E\n");

    }



    return 0;
}
