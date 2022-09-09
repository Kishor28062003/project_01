#include<stdio.h>
#include<windows.h>
#include<string.h>
typedef struct
{
    int year;
    char model[30];
    float price;
}showroom;

int main()
{
     showroom s;
     FILE *fp;
     int ch , year , c=0;
     while( 1 )
     {
         printf("1. Add New car\n");
         printf("2. List All Cars\n");
         printf("3. Goto record \n");
         printf("4. price range ");
         printf("5. Exit\n");
         scanf("%d", &ch);
         if( ch==1)
         {
             printf("Enter year \n");
             scanf("%d", &s.year);

             printf("Enter car model \n");
             scanf("%s", &s.model);

             fflush(stdin);
             gets( s.model );
             fp = fopen("c:/intel/showroom.txt", "a");
             fprintf(fp , "%d\t%s\n", s.year , s.model);
             fclose(fp);
         }
        else if( ch==2)
         {
             fp = fopen("c:/intel/showroom.txt", "r");

             fseek( fp , 0 , SEEK_END);
             n = ftell( fp ) / sizeof(s );
             fseek(fp , 0 , SEEK_SET );
              for( i=1; i<=n; i++)
              {
                  fread( &s , sizeof(s) , 1 , fp);
                  printf("%d \t %s\n", s.year , s.model );
              }
             fclose(fp);
         }
         else if(ch==3)
         {
             printf("Enter record number \n");
             scanf("%d", &year);
             fp = fopen("c:/intel/showroom.txt" , "r");
             do
             {
                 ch = fgetc( fp );
                 if( ch == '\n')c++;
                 if( c == year-1 )
                 {
                            do
                            {
                               ch = fgetc(fp);
                               printf("%c", ch);
                            }
                            while( ch != '\n');
                            return 0;
                 }
             }
             while( ch != EOF );
             fclose(fp);
         }
         else if (ch==4)
         {
            printf("Enter your price range \n");
            scanf("%f",&price );
            if(range <=price || >=price );
               {

               }
         }
         else if( ch==4)
            break;
     }

     return 0;
}
