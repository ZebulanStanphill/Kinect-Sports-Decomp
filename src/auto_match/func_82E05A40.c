typedef struct Elem_82E05A40 { int w[4]; } Elem_82E05A40;
typedef struct Array_82E05A40 { Elem_82E05A40 *data; int size; int capFlags; } Array_82E05A40;

extern void fn_82CE6310(void *alloc, Array_82E05A40 *a, int cap, int elemSize);
extern void fn_82CF6B28(void *dst, void *src, int n);

void fn_82E05A40(Array_82E05A40 *a, void *alloc, int index, int numDel, Elem_82E05A40 *src, int numIns)
{
    int size = a->size;
    int newSize = size - numDel + numIns;
    int tail = size - index - numDel;
    int cap = a->capFlags & 0x3fffffff;
    Elem_82E05A40 *d;
    int i;
    if (cap < newSize) {
        int nc = cap * 2;
        fn_82CE6310(alloc, a, newSize < nc ? nc : newSize, sizeof(Elem_82E05A40));
    }
    fn_82CF6B28(a->data + index + numIns, a->data + index + numDel, tail * sizeof(Elem_82E05A40));
    d = a->data + index;
    for (i = 0; i < numIns; i++) {
        d[i] = src[i];
    }
    a->size = newSize;
}
