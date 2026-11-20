typedef struct Elem_829EA3B0 {
    int v[3];
} Elem_829EA3B0;

typedef struct Array_829EA3B0 {
    int unknown0;              /* 0x0 */
    Elem_829EA3B0 *begin;      /* 0x4 */
    Elem_829EA3B0 *end;        /* 0x8 */
    Elem_829EA3B0 *storageEnd; /* 0xc */
} Array_829EA3B0;

#define GROW_BY(capacity) ((capacity) == 0 ? 4 : ((capacity) + 7) >> 3)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

extern unsigned char fn_829E9EA0(Array_829EA3B0 *array, unsigned int count);
extern Elem_829EA3B0 *fn_829E99A0(Array_829EA3B0 *array, Elem_829EA3B0 *first, Elem_829EA3B0 *last);

int fn_829EA3B0(Array_829EA3B0 *array, unsigned int count)
{
    unsigned int size = array->end - array->begin;

    if (count > size) {
        unsigned int capacity = array->storageEnd - array->begin;
        Elem_829EA3B0 *p;

        if (count > capacity) {
            if (!fn_829E9EA0(array, MAX(count - capacity, GROW_BY(capacity)))) {
                return 0x8007000E;
            }
        }
        for (p = array->end; p != array->begin + count; p++) {
        }
        array->end = p;
    } else if (count < size) {
        fn_829E99A0(array, array->begin + count, array->end);
    }
    return 0;
}
