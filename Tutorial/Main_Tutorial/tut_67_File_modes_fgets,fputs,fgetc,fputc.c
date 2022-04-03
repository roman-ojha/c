/* 
*) There are various functions provided by c standard library to read and write a file, character by character, or in the form of a fixed length string
*) Some of theme are:
    1) fputc -> c means characters
    2) fputs -> s means string
    3) fgetc
    4) fgets
 */

/* 
fputc function in c:
    *) Simplest function to write charactets to s file is fputc
    *) Syntax of fputc goes as follows:
        *) int fputc(character,FILE pointer);
        *) it returns the written character written on success.
        *) On failure it returns EOF  -> full form of EOF is end of file charater
        *) The EOF is a constant defined in the feader file stdio.h
 */
/* 
fputs in c
    *) fputs function is used to write a null terminated string to a file in c
        *) int fputs(const char *s,FILE *fp);
 */

/* 
*) simplest function to read characters from a file is fgetc
    *) syntax of fgetc goes as follows:
        *) int fgetc(FILE*fpg);
        *) it returns the read character on success.
        *) on failure it returns EOF 
        *) THe EOF is a constant defined in the header file stdio.h
 */

/* 
*) fgets function is used to read a null termunated string to a file in c
    *) int fgets(const char*s,int n,FILE*fp);  // int n means how many character you want to read including null character
 */

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    // char * c = fgetc(ptr);
    // printf("The character I read was %c\n", c );
    // c = fgetc(ptr); // now this will going to read the second character
    // printf("The character I read was %c\n", c );

    char str[4];
    fgets(str, 5, ptr);
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("this is harry",ptr);

    fclose(ptr);
    return 0;
}
