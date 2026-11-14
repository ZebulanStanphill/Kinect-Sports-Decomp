typedef struct Array_8277BC28 {
    int *data;
} Array_8277BC28;

typedef unsigned char (*Less_8277BC28)(int key, int elem);

int fn_8277BC28(Array_8277BC28 *array, int begin, int end, int *key, Less_8277BC28 less)
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
