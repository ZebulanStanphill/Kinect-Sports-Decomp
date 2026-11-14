typedef struct Elem_82790358 {
    int words[3];
} Elem_82790358;

typedef struct Array_82790358 {
    Elem_82790358 *data;
} Array_82790358;

typedef int (*Less_82790358)(Elem_82790358 *elem, void *key);

int fn_82790358(Array_82790358 *array, int begin, int end, void *key, Less_82790358 less)
{
    int first = begin;
    int count = end - begin;
    while (count > 0) {
        int half = count >> 1;
        int mid = first + half;
        if (less(&array->data[mid], key)) {
            first = mid + 1;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    return first;
}
