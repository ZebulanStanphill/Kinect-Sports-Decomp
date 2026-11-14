typedef struct Array_82D945B0 {
    void **data;
    int size;
    int capacityAndFlags;
} Array_82D945B0;

typedef struct Obj_82D945B0 {
    unsigned char pad[0x2c];
    Array_82D945B0 items; /* 0x2c */
} Obj_82D945B0;

static __forceinline void MemMove(void *dst, const void *src, int nbytes)
{
    char *d = (char *)dst;
    const char *s = (const char *)src;
    int i;
    for (i = 0; i < nbytes; i += 4) {
        *(unsigned int *)(d + i) = *(const unsigned int *)(s + i);
    }
}

static __forceinline void RemoveAtAndCopy(Array_82D945B0 *a, int index)
{
    Array_82D945B0 *arr = a;
    arr->size--;
    MemMove(arr->data + index, arr->data + index + 1, (arr->size - index) * sizeof(void *));
}

void fn_82D945B0(Obj_82D945B0 *self)
{
    int i;
    for (i = self->items.size - 1; i >= 0; i--) {
        if (self->items.data[i] == 0) {
            RemoveAtAndCopy(&self->items, i);
        }
    }
}
