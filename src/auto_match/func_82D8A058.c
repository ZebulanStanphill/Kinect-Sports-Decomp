typedef struct Array_82D8A058 {
    void **data;
    unsigned short size;
    unsigned short capFlags;
} Array_82D8A058;

typedef struct Owner_82D8A058 {
    char pad0[0x200];
    Array_82D8A058 items; /* 0x200 */
} Owner_82D8A058;

void fn_83081A78(Array_82D8A058 *a, int elemSize);

static __forceinline int IndexOf(const Array_82D8A058 *a, const void *v)
{
    int i = 0;
    if (i < a->size) {
        void *const *p = a->data;
        do {
            if (*p == v)
                return i;
            ++i;
            ++p;
        } while (i < a->size);
    }
    return -1;
}

static __forceinline void PushBack(Array_82D8A058 *a, void *v)
{
    if (a->size == (a->capFlags & 0x3fff))
        fn_83081A78(a, 4);
    a->data[a->size] = v;
    a->size++;
}

void fn_82D8A058(Owner_82D8A058 *self, void *item)
{
    int index = IndexOf(&self->items, 0);

    if (index >= 0)
        self->items.data[index] = item;
    else
        PushBack(&self->items, item);
}
