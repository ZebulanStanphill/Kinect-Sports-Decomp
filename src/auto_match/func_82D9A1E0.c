typedef struct PtrArray_82D9A1E0 {
    void **data;
    int size;
    int capacityAndFlags;
} PtrArray_82D9A1E0;

typedef struct Owner_82D9A1E0 {
    char pad[0x98];
    PtrArray_82D9A1E0 items;
} Owner_82D9A1E0;

static __forceinline void MemCpy4(void *dst, const void *src, int nbytes)
{
    int i;
    for (i = 0; i < nbytes; i += 4) {
        *(int *)((char *)dst + i) = *(const int *)((const char *)src + i);
    }
}

static __forceinline void RemoveAtAndCopy(PtrArray_82D9A1E0 *a, int index)
{
    PtrArray_82D9A1E0 *arr = a;
    arr->size--;
    MemCpy4(arr->data + index, arr->data + index + 1, (arr->size - index) * 4);
}

void fn_82D9A1E0(Owner_82D9A1E0 *self)
{
    int i;
    for (i = self->items.size - 1; i >= 0; i--) {
        if (self->items.data[i] == 0) {
            RemoveAtAndCopy(&self->items, i);
        }
    }
}
