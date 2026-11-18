typedef struct Entry_82851428 {
    unsigned int count; /* 0x00 */
    char padding[16];
} Entry_82851428;

typedef struct Object_82851428 {
    char padding[0x178];
    unsigned int count;      /* 0x178 */
    Entry_82851428 *entries; /* 0x17c */
} Object_82851428;

extern void fn_82850FA8(Object_82851428 *self, void *output, unsigned int index, unsigned int last,
                        void *context);
extern void fn_828510B8(Object_82851428 *self, void *output, unsigned int index, unsigned int last,
                        float value, void *context);

void fn_82851428(Object_82851428 *self, void *output, void *context)
{
    unsigned int index;

    if (self->count == 0) {
        return;
    }
    for (index = 0; index < self->count; index++) {
        Entry_82851428 *list = self->entries;
        Entry_82851428 *entry = &list[index];

        fn_82850FA8(self, output, index, entry->count - 1, context);
        fn_828510B8(self, output, index, entry->count - 1, 0.0f, context);
    }
}
