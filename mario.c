#include <stdio.h>
int main(void)
  {
    int h = get_int ("height:\n"); 
    int i=0;
    printf("height: %d \n", h);
   
if (h<0||h>8)
    {printf("height: %d \n\n", h);}
else;
     {for (i=0; i<h; i++)
        {printf("%7s\n", "#");}}
}
