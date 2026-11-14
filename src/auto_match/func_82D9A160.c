typedef struct Array_82D9A160 {
    void **data;
    int size;
    int capacityAndFlags;
} Array_82D9A160;

typedef struct Obj_82D9A160 {
    unsigned char pad[0x8c];
    Array_82D9A160 items; /* 0x8c */
} Obj_82D9A160;

static __forceinline void MemMove(void *dst, const void *src, int nbytes)
{
    char *d = (char *)dst;
    const char *s = (const char *)src;
    int i;
    for (i = 0; i < nbytes; i += 4) {
        *(unsigned int *)(d + i) = *(const unsigned int *)(s + i);
    }
}

static __forceinline void RemoveAtAndCopy(Array_82D9A160 *a, int index)
{
    Array_82D9A160 *arr = a;
    arr->size--;
    MemMove(arr->data + index, arr->data + index + 1, (arr->size - index) * sizeof(void *));
}

void fn_82D9A160(Obj_82D9A160 *self)
{
    int i;
    for (i = self->items.size - 1; i >= 0; i--) {
        if (self->items.data[i] == 0) {
            RemoveAtAndCopy(&self->items, i);
        }
    }
}
