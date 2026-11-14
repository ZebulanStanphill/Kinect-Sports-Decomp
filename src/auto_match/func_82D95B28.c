typedef struct Array_82D95B28 {
    void **data;
    unsigned short size;
    unsigned short capFlags;
} Array_82D95B28;

typedef struct Owner_82D95B28 {
    char pad0[0x20];
    Array_82D95B28 items;
} Owner_82D95B28;

void fn_83081A78(Array_82D95B28 *a, int elemSize);
void fn_82D95B28(Owner_82D95B28 *self, void *item)
{
    Array_82D95B28 *a = &self->items;
    int i = 0;
    if (i < self->items.size) {
        void **data = a->data;
        void **p = data;
        do {
            if (*p == 0) {
                if (i >= 0) {
                    data[i] = item;
                    return;
                }
                break;
            }
            ++i;
            ++p;
        } while (i < a->size);
    }
    if (self->items.size == (a->capFlags & 0x3fff))
        fn_83081A78(a, 4);
    a->data[a->size] = item;
    a->size++;
}
