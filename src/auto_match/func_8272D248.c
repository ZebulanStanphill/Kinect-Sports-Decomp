typedef struct Item_8272D248 {
    char pad0[0x68];
    unsigned short flags;
} Item_8272D248;

typedef struct Owner_8272D248 {
    char pad0[0x114];
    Item_8272D248 *item;
} Owner_8272D248;

typedef struct Object_8272D248 {
    char pad0[0xa0];
    Owner_8272D248 *owner;
} Object_8272D248;

extern Item_8272D248 *fn_82722B00(Object_8272D248 *self);

void fn_8272D248(Object_8272D248 *self, unsigned char enable)
{
    Item_8272D248 *item = self->owner->item;

    if (enable) {
        item = fn_82722B00(self);
        item->flags |= 2;
    } else if (item != 0) {
        item->flags &= ~2;
    }
}
