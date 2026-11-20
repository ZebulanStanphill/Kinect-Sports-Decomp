typedef struct Elem_829EE3F8 {
    int v[9];
} Elem_829EE3F8;

typedef struct Array_829EE3F8 {
    int unknown0;              /* 0x0 */
    Elem_829EE3F8 *begin;      /* 0x4 */
    Elem_829EE3F8 *end;        /* 0x8 */
    Elem_829EE3F8 *storageEnd; /* 0xc */
} Array_829EE3F8;

#define GROW_BY(capacity) ((capacity) == 0 ? 4 : ((capacity) + 7) >> 3)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

extern unsigned char fn_829EE280(Array_829EE3F8 *array, unsigned int count);
extern Elem_829EE3F8 *fn_829EE368(Array_829EE3F8 *array, Elem_829EE3F8 *first, Elem_829EE3F8 *last);
extern Elem_829EE3F8 *fn_829E9888(Elem_829EE3F8 *elem);

int fn_829EE3F8(Array_829EE3F8 *array, unsigned int count)
{
    unsigned int size = array->end - array->begin;

    if (count > size) {
        unsigned int capacity = array->storageEnd - array->begin;
        Elem_829EE3F8 *p;

        if (count > capacity) {
            if (!fn_829EE280(array, MAX(count - capacity, GROW_BY(capacity)))) {
                return 0x8007000E;
            }
        }
        for (p = array->end; p != array->begin + count; p++) {
            if (p != 0) {
                fn_829E9888(p);
            }
        }
        array->end = p;
    } else if (count < size) {
        fn_829EE368(array, array->begin + count, array->end);
    }
    return 0;
}
