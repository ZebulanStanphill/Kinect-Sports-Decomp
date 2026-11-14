typedef struct Elem_8279A860 {
    int words[12];
} Elem_8279A860;

typedef struct Array_8279A860 {
    Elem_8279A860 *data;
} Array_8279A860;

typedef int (*Less_8279A860)(Elem_8279A860 *elem, void *key);

int fn_8279A860(Array_8279A860 *array, int begin, int end, void *key, Less_8279A860 less)
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
