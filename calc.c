#include <stdio.h>

int main () {

int x, y;
char op;

printf("enter two numbers\n");
scanf("%i %i", &x, &y);

printf("enter + or - or * or /\n");

   switch(op) {
      case 'a' :
         printf("%i + %i = %i!\n", x, y, x + y);
         break;
      case 's' :
         printf("%i - %i = %i\n", x, y, x - y );
         break;
      case 'm' :
         printf("%i * %i = %i\n", x, y, x * y );
         break;
      case 'd' :
         printf("%i / %i = %i\n", x, y, x / y );
         break;
      default :
         printf("Invalid request\n" );
   }

return 0;

}
