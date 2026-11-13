typedef struct { int *key; int value; } Pair_82E17730;
typedef struct { Pair_82E17730 *data; int size; unsigned int cap; } Array_82E17730;
typedef struct { char pad[0xc]; int heap; } Mem_82E17730;
extern Mem_82E17730 *fn_82CE5410(void);
extern int fn_82CE6310(int heap, Array_82E17730 *a, int n, int elemSize);

void fn_82E17730(int *keys, int n, int value, Array_82E17730 *arr)
{
    int heap = fn_82CE5410()->heap;
    int size = arr->size;
    int newsize = size + n;
    int cap = arr->cap & 0x3fffffff;
    Pair_82E17730 *e;
    if (cap < newsize) {
        int nc = cap * 2;
        fn_82CE6310(heap, arr, newsize < nc ? nc : newsize, 8);
    }
    e = arr->data + size;
    arr->size += n;
    if (n > 0) {
        int i;
        for (i = 0; i < n; i++) {
            e[i].key = keys + i;
            e[i].value = value;
        }
    }
}

