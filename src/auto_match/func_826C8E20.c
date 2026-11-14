typedef struct Array_826C8E20 {
    int *data;
} Array_826C8E20;

typedef int (*Less_826C8E20)(int key, int elem);

int fn_826C8E20(Array_826C8E20 *array, int begin, int end, int *key, Less_826C8E20 less)
{
    int first = begin;
    int count = end - begin;
    while (count > 0) {
        int half = count >> 1;
        int mid = first + half;
        if (less(*key, array->data[mid])) {
            count = half;
        } else {
            first = mid + 1;
            count = count - half - 1;
        }
    }
    return first;
}
