typedef struct Elem_82698C48 {
    int value;
} Elem_82698C48;

typedef struct Array_82698C48 {
    Elem_82698C48 *data;
} Array_82698C48;

typedef int (*Less_82698C48)(Elem_82698C48 *elem, int key);

int fn_82698C48(Array_82698C48 *array, int begin, int end, int *key, Less_82698C48 less)
{
    int first = begin;
    int count = end - begin;
    while (count > 0) {
        int half = count >> 1;
        int mid = first + half;
        if (less(&array->data[mid], *key)) {
            first = mid + 1;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    return first;
}
