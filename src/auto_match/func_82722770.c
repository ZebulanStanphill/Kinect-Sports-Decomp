typedef struct Elem_82722770 {
    int words[4];
} Elem_82722770;

typedef struct Array_82722770 {
    Elem_82722770 *data;
} Array_82722770;

typedef int (*Less_82722770)(Elem_82722770 *elem, void *key);

int fn_82722770(Array_82722770 *array, int begin, int end, void *key, Less_82722770 less)
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
