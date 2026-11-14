struct Array_82D828D0 { void **data; int size; };
struct Skip_82D828D0 { char pad[0x18]; void *entries[6]; };
struct Self_82D828D0 { char pad[0x114]; struct Array_82D828D0 items; char pad2[0xa0]; struct Skip_82D828D0 *skip; };

extern void fn_82D949A8(void *collector, void *item);

void fn_82D828D0(struct Self_82D828D0 *self, void *collector)
{
    struct Array_82D828D0 *items = &self->items;
    struct Skip_82D828D0 *skip = self->skip;
    int i;

    if (skip != 0) {
        for (i = 0; i < items->size; i++) {
            void *item = items->data[i];
            if (item != skip->entries[0] && item != skip->entries[1] && item != skip->entries[2] &&
                item != skip->entries[3] && item != skip->entries[4] && item != skip->entries[5]) {
                fn_82D949A8(collector, item);
            }
        }
    } else {
        for (i = 0; i < items->size; i++) {
            fn_82D949A8(collector, items->data[i]);
        }
    }
}
