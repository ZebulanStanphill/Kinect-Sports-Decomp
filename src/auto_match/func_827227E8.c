typedef struct Elem_827227E8 {
    int words[4];
} Elem_827227E8;

typedef struct Array_827227E8 {
    Elem_827227E8 *data;
} Array_827227E8;

typedef int (*Less_827227E8)(Elem_827227E8 *elem, int key);

int fn_827227E8(Array_827227E8 *array, int begin, int end, int *key, Less_827227E8 less)
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
