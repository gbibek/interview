#include <stdio.h>

//void reverse_string(char *);

int main()
{
    char tmp;
    char tmp1;
    char * my_char = "abcdefghijklmnop";
    tmp = *my_char;
    tmp1 = *my_char + 1;
    printf("tmp = %c\n ",tmp);
    printf("tmp1 = %c\n ",tmp1);
    printf("my_char value = %s\n",my_char);
    printf("size of my_char = %d\n",strlen(my_char));
    printf("my_char[len] = %c\n",my_char[5]); 
 
return 0;
}

/*
void reverse_string(char * my_char)
{
    if(strlen(my_char)) return;
    
      


}
*/
