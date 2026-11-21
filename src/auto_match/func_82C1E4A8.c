typedef struct Format_82C1E4A8 {
    int f0;
    int f4;
    unsigned int blockSize;  /* 0x8 */
    unsigned int blockCount; /* 0xc */
    unsigned int length;     /* 0x10 */
    unsigned int dataOffset; /* 0x14 */
} Format_82C1E4A8;

typedef struct SeekEntry_82C1E4A8 {
    unsigned int block;
    unsigned int f4;
} SeekEntry_82C1E4A8;

typedef struct SeekTable_82C1E4A8 {
    int f0;
    unsigned int interval; /* 0x4 */
    int f8;
    unsigned int count;          /* 0xc */
    SeekEntry_82C1E4A8 *entries; /* 0x10 */
} SeekTable_82C1E4A8;

typedef struct Item_82C1E4A8 {
    int pad0;
    int state; /* 0x4 */
    char pad8[0x28];
    int kind; /* 0x30 */
    char pad34[0x14];
    SeekTable_82C1E4A8 *seekTable; /* 0x48 */
    int pad4c;
    int pending; /* 0x50 */
} Item_82C1E4A8;

typedef struct Context_82C1E4A8 {
    int pad0;
    Format_82C1E4A8 *format; /* 0x4 */
    int pad8;
    int padC;
    __int64 base; /* 0x10 */
    char pad18[0x7c];
    void *items;              /* 0x94 */
    unsigned short itemCount; /* 0x98 */
} Context_82C1E4A8;

typedef struct Owner_82C1E4A8 {
    char pad0[0x1c];
    Context_82C1E4A8 *context; /* 0x1c */
} Owner_82C1E4A8;

extern int fn_82C10F68(void *table, int *cursor, Item_82C1E4A8 **item, unsigned char *flag);
extern int fn_82C10FD0(void *table, int cursor, Item_82C1E4A8 **item, unsigned char *flag);
extern int fn_82C11038(void *table, int cursor);
extern int fn_82C1E328(Owner_82C1E4A8 *owner, __int64 time);

int fn_82C1E4A8(Owner_82C1E4A8 *owner, __int64 position)
{
    Context_82C1E4A8 *context;
    unsigned char flag;
    Item_82C1E4A8 *item;
    int cursor;
    int found;
    int hr;
    __int64 offset;
    unsigned int block;
    SeekTable_82C1E4A8 *table;
    Format_82C1E4A8 *format;

    context = owner->context;
    item = 0;
    flag = 0;
    found = 0;
    offset = context->format->dataOffset + position;
    if (offset > context->format->length)
        goto invalid;
    if (offset < context->format->dataOffset)
        goto invalid;
    if (context->itemCount != 0) {
        hr = fn_82C10F68(context->items, &cursor, &item, &flag);
        if (hr != 0x80500016) {
            if (hr < 0)
                return hr;
            do {
                if (hr < 0)
                    return hr;
                if (item != 0 && item->kind == 2 && item->state != 0 && item->pending == 0) {
                    found = 1;
                    break;
                }
                hr = fn_82C10FD0(context->items, cursor, &item, &flag);
            } while (hr != 0x80500016);
        }
        fn_82C11038(context->items, cursor);
        if (found) {
            table = item->seekTable;
            block = (unsigned int)(offset / table->interval);
            if (block > item->seekTable->count)
                goto invalid;
            format = context->format;
            block = item->seekTable->entries[block].block;
            if (block > format->blockCount)
                goto invalid;
            goto seek;
        }
    }
    format = context->format;
    block = 0;
    if (format->length > 0)
        block = (unsigned int)(context->format->blockCount * position / context->format->length);
seek:
    return fn_82C1E328(owner, (unsigned int)(format->blockSize * block) + context->base);

invalid:
    return 0x80070057;
}
