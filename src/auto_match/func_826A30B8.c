typedef struct Array_826A30B8 {
    int *data;
    int size;
} Array_826A30B8;

typedef struct Obj_826A30B8 {
    char pad0[0x34];
    Array_826A30B8 items;
} Obj_826A30B8;

extern void fn_827A9810(Array_826A30B8 *a, int size);

void fn_826A30B8(Obj_826A30B8 *self, int pos, int count)
{
    Array_826A30B8 *a = &self->items;
    int old = self->items.size;
    int i;

    fn_827A9810(a, old + count);
    if (old != 0) {
        for (i = self->items.size - 1; i >= pos + count; i--) {
            a->data[i] = a->data[i - count];
        }
    }
    for (i = 0; i < count; i++) {
        self->items.data[pos + i] = 0;
    }
}
