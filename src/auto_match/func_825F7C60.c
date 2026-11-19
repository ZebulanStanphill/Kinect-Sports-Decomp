typedef struct Buffer_825F7C60 {
    char pad0[0x18];
    unsigned int address; /* 0x18 */
    unsigned int size;    /* 0x1c */
} Buffer_825F7C60;

typedef struct Batch_825F7C60 {
    Buffer_825F7C60 *buffer; /* 0x00 */
    void *view;              /* 0x04 */
    char pad8[0x24];
    void *items;        /* 0x2c */
    unsigned int count; /* 0x30 */
    int used;           /* 0x34 */
    char pad38[0x10];
    unsigned char pending; /* 0x48 */
    char pad49[0x3];
    struct Batch_825F7C60 *next; /* 0x4c */
} Batch_825F7C60;

typedef struct List_825F7C60 {
    Batch_825F7C60 *head; /* 0x00 */
} List_825F7C60;

extern void *fn_82522D98(unsigned int size);
extern void fn_82522ED8(void *p);
extern void XMemSet(void *dst, int value, unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);
extern Buffer_825F7C60 *fn_82630040(unsigned int size, unsigned int align, int flags);
extern void *fn_8262F8D8(void *buffer, int type, int a, unsigned int address, int b, unsigned int base,
                         unsigned int size, int c, int flags);
extern void fn_8262FBD8(void *buffer, unsigned int address, int flags);

void fn_825F7C60(List_825F7C60 *list)
{
    Batch_825F7C60 *batch;

    for (batch = list->head; batch != 0; batch = batch->next) {
        if (batch->pending == 0) {
            continue;
        }
        if (batch->items == 0) {
            batch->items = fn_82522D98(batch->count * 0x50);
            if (batch->items == 0) {
                continue;
            }
            XMemSet(batch->items, 0, batch->count * 0x50);
        }
        batch->buffer = fn_82630040(batch->count << 7, 0, 0);
        if (batch->buffer == 0) {
            fn_82522ED8(batch->items);
            batch->items = 0;
            continue;
        }
        batch->view = fn_8262F8D8(batch->buffer, 10, 0, batch->buffer->address & ~3, 0,
                                  batch->buffer->address & ~3, batch->buffer->size & 0x3fffffc, 0,
                                  0x3000000);
        memset(batch->view, 0, batch->count << 7);
        fn_8262FBD8(batch->buffer, batch->buffer->address & ~3, 0);
        batch->used = 0;
        batch->pending = 0;
    }
}
