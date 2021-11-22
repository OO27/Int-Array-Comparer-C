#include <stdio.h>
#include <stdlib.h>

int main()
{
    // [ (variables)
    int eleNum, arr1[1000], arr2[1000], arrDfrnce[1000], i, j;
    // ]

    // [ (title)
    printf("===IntArray=Comparer===\n\n");
    // ]
    
    // [ (gets the element number of both arrays from the user)
    printf("How many elements will each array have? [MAX = 1000]\n--> ");
    scanf("%d", &eleNum);
    // ]

    // [ (gets the second array's elements from the user)
    printf("Enter %d elements for the first array\n", eleNum);
    for (i = 0; i < eleNum; i++)
    {
        scanf("\n%d", &arr1[i]);
    }
    // ]

    // [ (gets the second array's elements from the user)
    printf("\nEnter %d elements for the second array\n", eleNum);
    for (i = 0; i < eleNum; i++)
    {
        scanf("\n%d", &arr2[i]);
    }
    // ]

    // [ (prints the first array's inserted elements)
    printf("\nFirst array's elements:- \n   [");
    for (i = 0; i < eleNum; i++)
    {
        printf("  %d", arr1[i]);
    }
    printf("  ]\n");
    // ]

    // [ (prints the second array's inserted elements)
    printf("\nSecond array's elements:- \n   [");
    for (i = 0; i < eleNum; i++)
    {
        printf("  %d", arr2[i]);
    }
    printf("  ]\n");
    // ]


    // [ (writes the difference between the two arrays)
    printf("the difference between them:- \n\n");
    for (i = 0; i < eleNum; i++)
    {
        if (!(arr1[i] == arr2[i]))
        {
            printf("Difference: %d in the first array and %d in the second one.\n\n", arr1[i], arr2[i]);
        }
        else
        {
            printf("No difference. \n\n");
        }
    }
    // ]
}