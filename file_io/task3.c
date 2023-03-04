 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countingSort(int arr[], int size, int place)
{
    int output[size + 1];
    int max = (arr[0] / place) % 10;

    for (int i = 1; i < size; i++)
    {
        if (((arr[i] / place) % 10) > max)
            max = arr[i];
    }
    int count[max + 1];

    for (int i = 0; i < max; ++i)
        count[i] = 0;

    // Calculate count of elements
    for (int i = 0; i < size; i++)
        count[(arr[i] / place) % 10]++;

    // Calculate cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Place the elements in sorted order
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

// Main function to implement radix sort
void radixSort(int *arr, int size,int maxi)
{
    // Get maximum element
    int max = maxi;

    // Apply counting sort to sort elements based on place value.
    for (int place = 1; max / place > 0; place *= 10)
        countingSort(arr, size, place);
}

int find_digit(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}
int main()
{
    FILE *fp;

    fp = fopen("n_integers.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Could not open file \n");
        return 1;
    }
    int size;
    int maxi = 0;

    fscanf(fp, "%d", &size);
    int *arr = malloc(size * sizeof(int));
    fscanf(fp, ",[%d", &arr[0]);
    if (maxi < arr[0])
        maxi = arr[0];
    for (int i = 1; i < size; i++)
    {
        fscanf(fp, "%d", &arr[i]);
        if (maxi < arr[i])
            maxi = arr[i];
    }
    printf("Before Sorting \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n After Sorting \n");
    // int arr[size+1];
    radixSort(arr,size,maxi);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}