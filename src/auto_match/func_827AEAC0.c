typedef struct Elem_827AEAC0 {
    int words[10];
} Elem_827AEAC0;

typedef struct Array_827AEAC0 {
    Elem_827AEAC0 *data;
} Array_827AEAC0;

typedef int (*Less_827AEAC0)(Elem_827AEAC0 *elem, int key);

int fn_827AEAC0(Array_827AEAC0 *array, int begin, int end, int *key, Less_827AEAC0 less)
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
