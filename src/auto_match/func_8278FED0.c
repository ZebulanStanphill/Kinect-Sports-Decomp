

typedef struct Array_8278FED0 {
    int *data;
} Array_8278FED0;

typedef int (*Less_8278FED0)(int elem, int key);

int fn_8278FED0(Array_8278FED0 *array, int begin, int end, int *key, Less_8278FED0 less)
{
    int first = begin;
    int count = end - begin;
    while (count > 0) {
        int half = count >> 1;
        int mid = first + half;
        if (less(array->data[mid], *key)) {
            first = mid + 1;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    return first;
}
