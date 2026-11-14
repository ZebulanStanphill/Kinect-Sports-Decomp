typedef struct Item_827F9A10 {
    char pad0[0x32];
    unsigned char level;
} Item_827F9A10;

typedef struct Obj_827F9A10 {
    char pad0[8];
    void *data;
} Obj_827F9A10;

extern unsigned short fn_827F7210(Obj_827F9A10 *self);
extern void fn_827F98C8(Obj_827F9A10 *self, unsigned int index, Item_827F9A10 **out);

unsigned short fn_827F9A10(Obj_827F9A10 *self)
{
    unsigned short count;
    unsigned short best;
    unsigned int i;
    Item_827F9A10 *item;

    if (self->data == 0) {
        return 0xffff;
    }
    count = fn_827F7210(self);
    for (i = 0, best = 0; i < count; i++) {
        fn_827F98C8(self, i, &item);
        if (item->level > best) {
            best = item->level;
        }
    }
    return best + 1;
}
