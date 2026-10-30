typedef struct {
    char pad[0x14];
    int x14;
    char pad2[0x18];
    int x30;
} Item;
typedef struct {
    char pad[0x70];
    char map[0x20];
    int x90;
} Obj;
extern int fn_83019E38(void *map, int key, Item **item);
extern void fn_8300F848(Obj *o, Item *item, int flag);
extern void fn_8300F2C0(Obj *o, Item *item);
void fn_8300FE88(Obj *o, int key, Item *item, int v)
{
    Item *it = item;
    it->x14 = o->x90;
    it->x30 = v;
    if (fn_83019E38(o->map, key, &item) != 1) {
        fn_8300F848(o, it, 0);
        fn_8300F2C0(o, it);
    }
}
