int low = 0;
int high = n - 1;
int mid = 0;

// loop till mid is less than high

while (mid <= high)
{
    if (arr[mid] == 0)
    {
        swap(arr[low], arr[mid]);
        low++;
        mid++;
    }
    else if (arr[mid] == 1)
    {
        mid++;
    }
    else
    {
        swap(arr[mid], arr[high]);
        high--;
    }
}