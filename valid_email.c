#include <stdio.h>
#include <string.h>
#include <regex.h>
#include <stdlib.h>
void valid(char *email)
{
    int idexat, idexdot = -1;
    int length = strlen(email);

    for (int i = 0; i < length; i++)
    {
        if (email[i] == '@')
        {
            idexat = i;
        }
        if (email[i] == '.')
        {
            idexdot = i;
        }
    }
    if (idexdot > idexat + 1 && idexdot + 1 < length)
    {
        printf("Valid");
    }
    else
    {
        printf("not valid");
    }
}
int regular_expression(char *email)
{
    char pattern[] = "{[a-zA-Z0-9._]+@+[a-zA-Z0-9._]+\\.+[a-zA-Z]{2,}}"; // regular expression
    regex_t regi; // new data type
    int reti; // for storing the return value of regcomp

    reti = regcomp(&regi, pattern, REG_EXTENDED); //compiles the regular expression
    if (reti != 0) // recomp return this value
    {
        printf("not able to compile the regex");
    }
    else
    {printf("\n");}
    //   FILE *file = fopen("emails.txt", "r");
    // if (file == NULL) {
    //     fprintf(stderr, "Could not open file\n");
    //     return EXIT_FAILURE;
    // }
    email[strcspn(email, "\n")] = 0; // it creates a email array [with size of strcspn]
    if (regexec(&regi,email,0,NULL,0))
    {
       printf("matched");
    }
    else printf("not matched");
    
    return EXIT_SUCCESS;
}

int main()
{
    char email[250] = "Vaibhavgupta.avy@gmail.com";
    puts(email);
    //   valid(email);
    regular_expression(email);
}