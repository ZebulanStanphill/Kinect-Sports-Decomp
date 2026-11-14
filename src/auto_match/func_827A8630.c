

typedef struct Array_827A8630 {
    int *data;
} Array_827A8630;

typedef int (*Less_827A8630)(int elem, float key);

int fn_827A8630(Array_827A8630 *array, int begin, int end, float *key, Less_827A8630 less)
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
