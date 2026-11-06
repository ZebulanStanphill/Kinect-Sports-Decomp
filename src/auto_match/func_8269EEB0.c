struct Sub_8269EEB0;
typedef struct SubVT_8269EEB0 {
    int pad[0x48 / 4];
    int (*f48)(struct Sub_8269EEB0 *, int, int, int);
} SubVT_8269EEB0;
typedef struct Sub_8269EEB0 {
    SubVT_8269EEB0 *vt;
} Sub_8269EEB0;
typedef struct Item_8269EEB0 {
    int pad0[2];
    unsigned int flags;
    int pad1;
    Sub_8269EEB0 sub;
} Item_8269EEB0;
struct Obj_8269EEB0;
typedef struct ObjVT_8269EEB0 {
    int pad[0xe0 / 4];
    Item_8269EEB0 *(*fe0)(struct Obj_8269EEB0 *);
} ObjVT_8269EEB0;
typedef struct Obj_8269EEB0 {
    ObjVT_8269EEB0 *vt;
} Obj_8269EEB0;
extern void fn_826824B0(Item_8269EEB0 *);

int fn_8269EEB0(char *param_1, int a, int b, int c)
{
    Obj_8269EEB0 *self = (Obj_8269EEB0 *)(param_1 - 0x68);
    Item_8269EEB0 *item = self->vt->fe0(self);
    int r;
    Sub_8269EEB0 *sub;
    if (item != 0) {
        item->flags = (item->flags + 1) & 0x8fffffff;
        sub = &item->sub;
        r = sub->vt->f48(sub, a, b, c);
    } else {
        r = 0;
    }
    if (item != 0)
        fn_826824B0(item);
    return r;
}
