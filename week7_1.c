#include <stdio.h>  //for loop
int main()
{
    char str[1000];
    int count_u = 0;
    int count_l = 0;
    int letter;

    printf("Enter string : ");
    gets(str);

    for (letter = 0; str[letter] != '\0'; letter++)   
    {
        if (str[letter] >= 'A' && str[letter] <= 'Z') 
        {
            count_u++;
        }
        if (str[letter] >= 'a' && str[letter] <= 'z')  
        {
            count_l++;
        }
    }

    printf("Uppercase = %d\n", count_u);    
    printf("Lowercase = %d", count_l);        
    return 0;
}