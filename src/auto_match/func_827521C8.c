typedef struct Item_827521C8 {
    char pad0[0x38];
    int value;     /* 0x38 */
} Item_827521C8;

typedef struct Obj_827521C8 {
    int pad0;
    void *owner;
    char *item;
} Obj_827521C8;

extern void fn_8269A1F0(void *owner, int v);

void fn_827521C8(Obj_827521C8 *o)
{
    Item_827521C8 *item = (Item_827521C8 *)(o->item ? o->item - 0x10 : 0);
    fn_8269A1F0(o->owner, item->value);
}
