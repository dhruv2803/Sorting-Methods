#include <stdio.h>
void merge(int arr[], int ll, int mid, int ul)
{
    int i, j, k;
    int l1 = mid - ll + 1;
    int l2 = ul - ll;
    int arr1[l1], arr2[l2];
    for (i = 0; i < l1; i++)
    {
        arr1[i] = arr[ll + i];
    }
    for (j = 0; j < l2; j++)
    {
        arr2[j] = arr[mid + j + 1];
    }
    i = 0;
    j = 0;
    k = ll;
    while (i < l1 && j < l2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < l1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < l2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int ll, int ul)
{

    if (ll < ul)
    {
        int mid = (ll + ul) / 2;
        mergesort(arr, ll, mid);
        mergesort(arr, mid + 1, ul);
        merge(arr, ll, mid, ul);
    }
}

int main()
{
    int size, i;
    printf("Enter size of unsorted array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    //merge sort
    mergesort(arr, 0, size - 1);
    printf("Sorted array is:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}