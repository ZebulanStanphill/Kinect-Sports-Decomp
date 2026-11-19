typedef struct IndexArray_82D07808 {
    int *data;                     /* 0x00 */
    int size;                      /* 0x04 */
    unsigned int capacityAndFlags; /* 0x08 */
} IndexArray_82D07808;

typedef struct Memory_82D07808 {
    char pad0[0x10];
    int heap; /* 0x10 */
} Memory_82D07808;

extern Memory_82D07808 *fn_82CE5410(void);
extern int fn_82CE6310(int heap, IndexArray_82D07808 *array, int capacity, int elementSize);

static __forceinline int *ExpandBy(IndexArray_82D07808 *array, int count)
{
    int heap = fn_82CE5410()->heap;
    int *sizeField = &array->size;
    int size = *sizeField;
    int newSize = size + count;
    int capacity = array->capacityAndFlags & 0x3fffffff;
    int *result;

    if (capacity < newSize) {
        int doubled = capacity * 2;
        fn_82CE6310(heap, array, newSize < doubled ? doubled : newSize, 4);
    }
    result = array->data + size;
    *sizeField += count;
    return result;
}

void fn_82D07808(int type, int count, int start, IndexArray_82D07808 *indices)
{
    int *out;
    int i;
    int vertex;

    switch (type) {
    case 3:
        out = ExpandBy(indices, count);
        for (i = 0; i < count; i++) {
            out[i] = (unsigned short)(start + i);
        }
        break;
    case 4:
        out = ExpandBy(indices, (count - 2) * 3);
        for (i = 2; i < count; i++) {
            vertex = start + i;
            *out++ = vertex - 2;
            if ((i & 1) == 0) {
                *out++ = vertex - 1;
                *out++ = vertex;
            } else {
                *out++ = vertex;
                *out++ = vertex - 1;
            }
        }
        break;
    }
}
