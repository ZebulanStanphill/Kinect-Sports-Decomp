typedef struct RefCounted_82698F98 RefCounted_82698F98;

typedef struct RefArray_82698F98 {
    RefCounted_82698F98 **data; /* 0x00 */
    unsigned int size;          /* 0x04 */
    int pad8;
    int fc; /* 0x0c */
} RefArray_82698F98;

extern void fn_82698CC0(RefCounted_82698F98 **slot, RefCounted_82698F98 *value);

void fn_82698F98(RefArray_82698F98 *array, unsigned int index, RefCounted_82698F98 *value)
{
    if (index < array->size) {
        array->fc = 0;
        fn_82698CC0(&array->data[index], value);
    }
}
