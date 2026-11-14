typedef struct Elem_826BCE88 {
    int value;
} Elem_826BCE88;

typedef unsigned char (*Less_826BCE88)(Elem_826BCE88 *elem, unsigned short key);

int fn_826BCE88(Elem_826BCE88 *data, int begin, int end, unsigned short *key, Less_826BCE88 less)
{
    int first = begin;
    int count = end - begin;
    while (count > 0) {
        int half = count >> 1;
        int mid = first + half;
        if (less(&data[mid], *key)) {
            first = mid + 1;
            count = count - half - 1;
        } else {
            count = half;
        }
    }
    return first;
}
