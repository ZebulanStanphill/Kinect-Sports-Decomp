typedef struct Item_82C1E328 {
    int pad0;
    int state;          /* 0x04 */
    int position;       /* 0x08 */
    int length;         /* 0x0c */
    int value10;        /* 0x10 */
    int value14;        /* 0x14 */
    int value18;        /* 0x18 */
    int value1c;        /* 0x1c */
    unsigned char done; /* 0x20 */
    int value24;        /* 0x24 */
    int value28;        /* 0x28 */
} Item_82C1E328;

typedef struct Clock_82C1E328 {
    void *slots[6];
    int (*reset)(struct Clock_82C1E328 *self); /* 0x18 */
} Clock_82C1E328;

typedef struct Context_82C1E328 {
    Clock_82C1E328 *clock; /* 0x00 */
    int pad4;
    __int64 start; /* 0x08 */
    char pad10[0x10];
    __int64 current; /* 0x20 */
    __int64 last;    /* 0x28 */
    void *state30;   /* 0x30 */
    void *state34;   /* 0x34 */
    int value38;     /* 0x38 */
    int value3c;     /* 0x3c */
    short value40;   /* 0x40 */
    char pad42[0xe];
    int mode;    /* 0x50 */
    int value54; /* 0x54 */
    int value58; /* 0x58 */
    int value5c; /* 0x5c */
    int value60; /* 0x60 */
    int pad64;
    __int64 value68; /* 0x68 */
    char pad70[0x24];
    void *items; /* 0x94 */
} Context_82C1E328;

typedef struct Owner_82C1E328 {
    char pad0[0x1c];
    Context_82C1E328 *context; /* 0x1c */
} Owner_82C1E328;

extern void *memset(void *dst, int value, unsigned int size);
extern int fn_82C10F68(void *table, int *cursor, Item_82C1E328 **item, unsigned char *flag);
extern int fn_82C10FD0(void *table, int cursor, Item_82C1E328 **item, unsigned char *flag);
extern int fn_82C11038(void *table, int cursor);

int fn_82C1E328(Owner_82C1E328 *owner, __int64 time)
{
    Context_82C1E328 *context;
    unsigned char flag;
    Item_82C1E328 *item;
    int cursor;
    int hr;

    context = owner->context;
    item = 0;
    flag = 0;
    hr = context->clock->reset(context->clock);
    if (hr < 0) {
        return hr;
    }
    context->start = time;
    context->current = time;
    context->last = time;
    memset(context->state30, 0, 0x4c);
    memset(context->state34, 0, 0x5c);
    context->value38 = 0;
    context->value3c = 0;
    context->value40 = 0;
    context->mode = 5;
    context->value54 = 0;
    context->value58 = 0;
    context->value5c = 0;
    context->value60 = 0;
    context->value68 = 0;
    item = 0;
    hr = fn_82C10F68(context->items, &cursor, &item, &flag);
    if (hr != 0x80500016) {
        if (hr < 0) {
            return hr;
        }
        do {
            if (hr < 0) {
                return hr;
            }
            if (item != 0) {
                if (item->state == 3) {
                    item->state = 1;
                } else if (item->state == 2) {
                    item->state = 0;
                }
                item->value1c = 0;
                item->done = 0;
                item->position = 0;
                item->length = 0;
                item->value24 = 0;
                item->value28 = 0;
                item->value10 = 0;
                item->value14 = 0;
                item->value18 = 0;
            }
            hr = fn_82C10FD0(context->items, cursor, &item, &flag);
        } while (hr != 0x80500016);
    }
    hr = fn_82C11038(context->items, cursor);
    return 0x80500016 != hr ? hr : 0;
}
