typedef struct {
    int *data;
    unsigned int capacity;
    unsigned int size;
} Array_82CBBCE0;

extern void *malloc(unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);

Array_82CBBCE0 *fn_82CBBCE0(Array_82CBBCE0 *a, unsigned int capacity, unsigned int size)
{
    if (a == 0) {
        return 0;
    }
    if (capacity < 0x10) {
        capacity = 0x10;
    }
    if (size > capacity) {
        size = capacity;
    }
    a->data = (int *)malloc(capacity * sizeof(int));
    if (a->data == 0) {
        return 0;
    }
    a->capacity = capacity;
    memset(a->data, 0, (size > capacity ? size : capacity) * sizeof(int));
    a->size = size;
    return a;
}
