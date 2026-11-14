typedef void (*Callback_82857CB8)(int context, int handle, int a, int b, int data);

typedef struct Entry_82857CB8 {
    int f0;
    Callback_82857CB8 callback;   /* +0x4 */
    int f8;
    int data;                     /* +0xc */
    unsigned short a;             /* +0x10 */
    unsigned short b;             /* +0x12 */
} Entry_82857CB8;

typedef struct Table_82857CB8 {
    char pad0[0xc];
    int key;                      /* +0xc */
    Entry_82857CB8 *entries;      /* +0x10 */
    char pad14[0xe];
    unsigned short count;         /* +0x22 */
} Table_82857CB8;

extern void fn_82851B40(int *self, int key, int *handle);

void fn_82857CB8(int *self, Table_82857CB8 *table)
{
    int handle;
    int i;
    Entry_82857CB8 *e;

    fn_82851B40(self, table->key, &handle);
    for (i = 0, e = table->entries; i < table->count; i++, e++) {
        if (e->callback != 0)
            e->callback(*self, handle, e->a, e->b, e->data);
    }
}
