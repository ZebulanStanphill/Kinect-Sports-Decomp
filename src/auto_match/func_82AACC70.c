extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82A29A38(void);
extern void *memcpy(void *dest, const void *src, unsigned int size);

typedef struct Array_82AACC70 {
    void *data;               /* 0x0 */
    unsigned int elementSize; /* 0x4 */
    unsigned int capacity;    /* 0x8 */
} Array_82AACC70;

int fn_82AACC70(Array_82AACC70 *array, unsigned int index)
{
    unsigned int bytes;
    unsigned int usable;
    void *data;

    if (array == 0) {
        fn_82A29A38();
    }
    if (array->elementSize == 0) {
        fn_82A29A38();
    }
    if (index >= array->capacity) {
        if (array->capacity != 0) {
            bytes = (array->elementSize * array->capacity + 0xfff) & ~0xfff;
        } else {
            bytes = 0x1000;
        }
        for (;;) {
            usable = bytes - 0x20;
            if (usable >= array->elementSize * (index + 1)) {
                break;
            }
            bytes <<= 1;
            if (bytes == 0) {
                return 0;
            }
        }
        data = fn_8265C940(usable, 0x24870000);
        if (data == 0) {
            return 0;
        }
        if (array->capacity != 0) {
            memcpy(data, array->data, array->elementSize * array->capacity);
            fn_8265C990(array->data, 0x24870000);
        }
        array->data = data;
        array->capacity = usable / array->elementSize;
    }
    return 1;
}
