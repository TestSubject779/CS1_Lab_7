// header files
#include <stdio.h>

// global variables
int pass = 0;
int swaps = 0;

// function - swaps values of two elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

    // counts number of swaps performed
    swaps += 1;
}

// function - implements the bubble sorting method
void bubbleSort(int array[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        // count number of passes performed
        pass += 1;
        // resets swap counter variable
        swaps = 0;
        for (int j = 0; j < n - i - 1; j++)
            // if array[j] > array[j + 1], swap values
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
            // prints number of swaps per pass
            printf("pass #%d: %d\n", pass, swaps);
    }

}

// function - main
int main()
{
    // given array 
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    // size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    // sort array using bubble sort
    bubbleSort(arr, n);

    return 0;
}