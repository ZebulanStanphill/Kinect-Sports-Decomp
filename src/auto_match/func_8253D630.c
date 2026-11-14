typedef struct Msg_8253D630 {
    int type;
    int size;
    int data[2];
} Msg_8253D630;
typedef struct Item_8253D630 {
    char pad[0xc];
    int id;
} Item_8253D630;
typedef struct Obj_8253D630 {
    char pad0[0xb8];
    void *fb8;
    char pad1[0x208 - 0xbc];
    void *f208;
    char pad2[0x7fc - 0x20c];
    char f7fc[4];
} Obj_8253D630;
extern void XMemSet(void *dst, int value, unsigned int size);
extern void fn_8257C8F0(void *target, Msg_8253D630 *msg);
extern void fn_8257E0B8(void *target, Msg_8253D630 *msg);
extern void fn_82599A38(void *list, Item_8253D630 *item);
extern void fn_825A39F0(void *target, Item_8253D630 *item);

void fn_8253D630(Obj_8253D630 *self, Item_8253D630 *item)
{
    Msg_8253D630 m;
    XMemSet(m.data, 0, 8);
    m.type = 0x4e;
    m.size = 0x10;
    if (item != 0) {
        m.data[0] = item->id;
        m.data[1] = (int)item;
    }
    fn_8257C8F0(self, &m);
    fn_8257E0B8(self->fb8, &m);
    fn_82599A38(self->f7fc, item);
    if (item != 0) {
        fn_825A39F0(self->f208, item);
    }
}
