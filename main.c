
#include <stdio.h>
void even_odd(int a)
{
    if(a%2==0)
    {
        printf("%d is a even number",a);
    }
    else
    {
        printf("%d is a odd number",a);
    }
}
void main()
{
    even_odd(10);
    even_odd(9);
}
