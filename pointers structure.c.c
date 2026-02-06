#include<stdio.h>
#include<string.h>
struct book

 {
     int ID;
     char title[50];
     char author[50];
};
int main()
{
    struct book b1={101,"C Programming","Dennis Ritchie"};
    struct book b2={102,"Data sructures","Mrak weiss"};
    struct book b3={103,"operating systems","Silberschatz"};
    struct book*book[3]={&b1,&b2,&b3};
    int searchID,i, found=0;
    printf("enter book ID to searchID");
    for(i=0;i<3;i++)
    {
d        if(books[i]->i,ID==search){
            printf("\nbook found:\n");
            printf("ID:%d\n",books[i]->id);
            printf("title:%s\n",books[i]->title);
            printf("author:%\n",books[i]->author);
            found=1;
            break;
        }
    }
    if(!found)
       printf("\nbook not found!\n");
    return 0;
}
