typedef struct Item_827521A8 {
    char pad0[0x3c];
    unsigned char value;     /* 0x3c */
} Item_827521A8;

typedef struct Obj_827521A8 {
    int pad0;
    void *owner;
    char *item;
} Obj_827521A8;

extern void fn_8269A1F0(void *owner, unsigned char v);

void fn_827521A8(Obj_827521A8 *o)
{
    Item_827521A8 *item = (Item_827521A8 *)(o->item ? o->item - 0x10 : 0);
    fn_8269A1F0(o->owner, item->value);
}
