#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a = NULL;
    int size = 0, newSize, choice, i,*temp;
    while(1)
    {
         printf("\n Dynamic Memory Allocation");
         printf("\n 1. Create a new Array");
         printf("\n 2. Add elemets to the Array");
         printf("\n 3. Resize the Array");
         printf("\n 4. Display the Array");
         printf("\n 5. Free the Array and Exit");
         printf("\n Enter Your Choice:");
         scanf("%d",&choice);
         switch(choice)
         {
              case 1:
                  if(a!=NULL)
                  {
                     printf("\n Array already exists!Free it and Rewrite the array!");
                     break;
                  }
                  printf("Enter size of Array:");
                  scanf("%d",&size);
                  if(size <= 0)
                  {
                     printf("\n This is Invalid");
                     break;
                  }
                  a = (int *)malloc(size * sizeof(int));
                  if (a == NULL)
                  {
                      printf("\n Memory allocation failed.");
                  }
                  else
                  {
                      printf("Memory allocated successfully.\n");
                  }
                  break;
              case 2:
                  if(a == NULL)
                  {
                      printf("\n Array is not Created yet!");
                      break;
                  }
                  printf("\n Elements of Array:");
                  for(i=0 ; i<size ; i++)
                  {
                      scanf("%d",&a[i]);
                  }
                  printf("\n Elements added succesfully!");
                  break;
              case 3:
                  if(a == NULL)
                  {
                      printf("\n Array is not Created yet!");
                      break;
                  }
                  printf("\n enter new size of New Array:");
                  scanf("%d",&newSize);
                  if (newSize <= 0)
                  {
                     printf("\n Invalid size!");
                     break;
                  }
                  temp = (int*)realloc(a,newSize * sizeof(int));
                  if(temp == NULL)
                  {
                      printf("\n Reallocation is Failed!");
                  }
                  else
                  {
                  a = temp;
                      if (newSize > size)
                      {
                           printf("\n Enter %d new elements:", newSize - size);
                           for (i = size; i < newSize; i++)
                           {
                                   scanf("%d", &a[i]);
                           }
                       }
                       size = newSize;
                       printf("\n Array resized successfully.");
                   }
                   break;
              case 4:
                   if (a == NULL)
                   {
                      printf("\n Array not created yet.");
                      break;
                   }

                   printf("\n Array elements are:-");
                   for (i = 0; i < size; i++)
                   {
                         printf("%d ", a[i]);
                    }
                    printf("\n");
                    break;

        case 5:
            if (a != NULL)
            {
                free(a);
                a = NULL;
                printf("\n Memory freed successfully.");
            }
            printf("\n Exiting program.");
            return 0;
        default :
            printf("\n Invalid Choice!");


         }
    }

return 0;
}
