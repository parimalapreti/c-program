#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("file cannot be opened!\n");
        return 1;
    }
    fprintf(fp,"welcome to file handlingin C\n");
    fprintf(fp,"this text return to the file.\n");
    fclose(fp);
    printf("data written succesfully.\n");
    return 0;
}
