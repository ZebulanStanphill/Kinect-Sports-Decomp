typedef struct Request_82820A80 {
    int path;          /* 0x00 */
    unsigned int size; /* 0x04 */
    int reserved08[2]; /* 0x08 */
    int flags;         /* 0x10 */
    int offset;        /* 0x14 */
    int length;        /* 0x18 */
    int reserved1c[2]; /* 0x1c */
    int pending;       /* 0x24 */
} Request_82820A80;

typedef struct Item_82820A80 {
    int reserved00[3];         /* 0x00 */
    int flags;                 /* 0x0c */
    unsigned int state;        /* 0x10 */
    int callback;              /* 0x14 */
    int handle;                /* 0x18 */
    int reserved1c;            /* 0x1c */
    Request_82820A80 *request; /* 0x20 */
} Item_82820A80;

typedef struct Owner_82820A80 {
    int reserved00[4];           /* 0x00 */
    void (*release)(int handle); /* 0x10 */
    int count;                   /* 0x14 */
} Owner_82820A80;

extern int (*lbl_8320A5D4)(int handle);
extern int lbl_8320A5D8;
extern unsigned int fn_82815268(Owner_82820A80 *self, Item_82820A80 *item, int callback);
extern void fn_82820970(Item_82820A80 *item);
extern int fn_82816480(Owner_82820A80 *self, int path, int offset, int length, Request_82820A80 **request,
                       int flags, unsigned int size, int retry);

void fn_82820A80(Owner_82820A80 *self, Item_82820A80 *item, int cancel)
{
    if (cancel != 0) {
        item->flags |= 0x10000;
    }
    if (item->flags != 0) {
        fn_82815268(self, item, item->callback);
        return;
    }
    item->state |= 0x20000;
    fn_82820970(item);
    if (item->state & 2) {
        if (self->release != 0) {
            self->release(item->handle);
        }
        self->count--;
    } else {
        if (lbl_8320A5D4 != 0 && lbl_8320A5D4(item->handle) != 0) {
            item->flags |= 0x400;
        }
        lbl_8320A5D8--;
    }
    if (item->flags != 0) {
        fn_82815268(self, item, item->callback);
        return;
    }
    item->state |= 0x801;
    item->request->pending = 0;
    fn_82816480(self, item->request->path, item->request->offset, item->request->length, &item->request,
                item->request->flags, item->request->size, 1);
}
