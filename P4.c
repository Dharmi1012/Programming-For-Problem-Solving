#include <stdio.h>
#include <string.h>
int main()
{
    int mainChoice, subChoice;
    do
    {
        printf("\n Main menu ");
        printf("\n 1. Array Operations");
        printf("\n 2. String Operations");
        printf("\n 3. Exit");
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        switch (mainChoice)
        {
            case 1:
            {
                int arr[100], n, i, j, temp, key;
                int low, high, mid, found;

                printf("Enter number of elements: ");
                scanf("%d", &n);

                if (n <= 0 || n > 100)
                {
                    printf("Invalid array size!\n");
                    break;
                }

                printf("Enter elements:\n");
                for (i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }

                printf("\n1. Sort Array\n2. Search Element\nEnter choice: ");
                scanf("%d", &subChoice);

                switch (subChoice)
                {

                    case 1:
                        for (i = 0; i < n - 1; i++)
                        {
                            for (j = 0; j < n - i - 1; j++)
                            {
                                if (arr[j] > arr[j + 1])
                                {
                                    temp = arr[j];
                                    arr[j] = arr[j + 1];
                                    arr[j + 1] = temp;
                                }
                            }
                        }

                        printf("Sorted array: ");
                        for (i = 0; i < n; i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        printf("\n");
                        break;

                    case 2:
                        for (i = 0; i < n - 1; i++)
                        {
                            for (j = 0; j < n - i - 1; j++)
                            {
                                if (arr[j] > arr[j + 1])
                                {
                                    temp = arr[j];
                                    arr[j] = arr[j + 1];
                                    arr[j + 1] = temp;
                                }
                            }
                        }

                        printf("Sorted array: ");
                        for (i = 0; i < n; i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        printf("\n");
                        printf("Enter element to search: ");
                        scanf("%d", &key);

                        low = 0;
                        high = n - 1;
                        found = 0;

                        while (low <= high)
                        {
                            mid = (low + high) / 2;

                            if (arr[mid] == key)
                            {
                                printf("Element found at position %d\n", mid + 1);
                                found = 1;
                                break;
                            }
                            else if (arr[mid] < key)
                            {
                                low = mid + 1;
                            }
                            else
                            {
                                high = mid - 1;
                            }
                        }

                        if (!found)
                        {
                            printf("Element not found.\n");
                        }
                        break;

                    default:
                        printf("Invalid choice!\n");
                }
                break;
            }
            case 2:
            {
                char str1[100], str2[100];

                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf("%s", str2);

                printf("\n1. Concatenate\n2. Compare\nEnter choice: ");
                scanf("%d", &subChoice);

                switch (subChoice)
                {

                    case 1:
                        strcat(str1, str2);
                        printf("Concatenated string: %s\n", str1);
                        break;

                    case 2:
                        if (strcmp(str1, str2) == 0)
                        {
                            printf("Strings are equal.\n");
                        }
                        else
                        {
                            printf("Strings are not equal.\n");
                        }
                        break;

                    default:
                        printf("Invalid choice!\n");
                }
                break;
            }

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid main menu choice!\n");
        }

    } while (mainChoice != 3);

    return 0;
}
