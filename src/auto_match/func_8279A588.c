typedef struct Item_8279A588 Item_8279A588;

typedef struct Obj_8279A588 {
    char pad[0x114];
    int item;
} Obj_8279A588;

extern void fn_827A2CF8(Item_8279A588 *item);

void fn_8279A588(Obj_8279A588 *self, int a, void *b, void *c, unsigned char enabled)
{
    if (self->item != 0 && enabled) {
        fn_827A2CF8((Item_8279A588 *)self->item);
    }
}
