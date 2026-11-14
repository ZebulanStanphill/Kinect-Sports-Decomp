typedef struct Item_82815268 {
    int x0;
    int x4;
    int x8;
    unsigned int flags;
    unsigned int state;
    int x14;
    int handle;
    int x1c;
    int x20;
    unsigned int name;
} Item_82815268;

typedef struct Owner_82815268 {
    int x0[4];
    void (*release)(int handle);
    int count;
} Owner_82815268;

typedef void (*Callback_82815268)(int, int, unsigned int);

extern void fn_82814F70(Item_82815268 *item);
extern int (*lbl_8320A5D4)(int handle);
extern int lbl_8320A5D8;

unsigned int fn_82815268(Owner_82815268 *self, Item_82815268 *item, Callback_82815268 done)
{
    unsigned int flags;
    unsigned int name;

    if (item != 0) {
        flags = item->flags;
        if (item->name != 0) {
            name = item->name;
        } else {
            name = item->handle;
        }
    } else {
        flags = 2;
        name = 0;
    }
    if (item != 0) {
        if (item->state & 2) {
            if (self->release != 0) {
                self->release(item->handle);
            }
            self->count--;
        } else {
            if (!(flags & 0x10) && lbl_8320A5D4 != 0 && lbl_8320A5D4(item->handle) != 0) {
                flags |= 0x400;
            }
            lbl_8320A5D8--;
        }
        fn_82814F70(item);
    }
    if (done != 0) {
        done(0, name, flags);
    }
    return flags;
}
