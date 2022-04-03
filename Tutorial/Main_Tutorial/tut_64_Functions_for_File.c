/* 

*)  When working wilth files, we have to declare a pointer of typw FILE.
*)  This declaration hels us to work with files through c program. 
 */

/* 
// Opening a file
*)  stdio.h contains a function called fopen() for opening files in c.
*) the syntax for opening a file in standaed I/O is :
        ptr =fopen("fileopen","mode")
*) For examole:
    fopen("E:\\code\\harry.text","w");
    fopen("E:\\programming\\bhai.bin","rb")

mode:
a->apppend mode = if we want to write but don't want to delete the older content

 */

/* 
Closing a file
    *) Any file which is opened in c program needs to be closed
    *) Closing a file is accomploshed by the library function fclose()
    *) fclose(fptr); // fptr is the file pointer associted with file to be closed

syntex:
    fscanf(ptr,"%s",string);
 */

/* 
Reading a file
    *) in order to read a file, we can use fscanf function.
    *) this function is file version of scanf function
    *) fscanf expects a file pointer in addition to the other arguments which scanf expects
    *) we will have to open the file in read mode in oder to use this function
 */

/* 
writing to a file
    *) in order to wite to a file, we can use fprontf function.
    *) this function is file version of printf function 
    *) fprintf expects a file pointer in addition to the other arguments which printf expexts
    *) we will have to open the file in write mode in order to use this function

syntex:
    fprintf(ptr,"%s",string);
 */
#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL; // after making this as a null pointer willnot contain garbeg value
    char string[64] = "This content was produced by Tutorial64.c";

    // ****** Reading a file ******
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n",string );

    // ****** Writing a file ******
    ptr = fopen("myfile.txt", "w"); // when you open a file in write mode then the older file will delete and the new write file will write
    fprintf(ptr, "%s", string);
    //*******In append mode*******
    ptr = fopen("myfile.txt", "a"); // when you opwn a file in appen mode then the older file will be there and the new content will add
    fprintf(ptr, "%s", string);

    return 0;
}
