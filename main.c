// convert an integer decimal number to binary in C programming
#include <stdio.h>
#include <stdlib.h>
int main()
{

{
  // char type variable name binary will store the value after conversion.
  char binary[256];

  // int type variable name decimal will store the user input decimal value.
  int decimal;

  do
  {
    // prompt the user for the number, store it into decimal
    printf("Enter an Integer number for convert to Binary:\n");
    scanf("%d", &decimal);

    // if the user input number is negative, tell the user it must be non-negative
    if (decimal < 0)
      printf("Integer Must Be Non-Negative\n\n");


  } while (decimal < 0);


  int length = 0;


  do
  {

    if (decimal % 2 == 0) binary[length] = '0';
    else binary[length] = '1';


    decimal /= 2;


    length++;


  } while (decimal != 0);


  binary[length] = '\0';


  int middle = length / 2;


  char temp;
  for (int i = 0; i < middle; i++)
  {
    temp = binary[i];
    binary[i] = binary[length - i - 1];
    binary[length - i - 1] = temp;
  }
printf("The Binary number is  = :%s\n\n",binary);


}

    return 0;
}
