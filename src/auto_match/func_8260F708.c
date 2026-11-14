typedef struct Msg_8260F708 {
    int type;
    int size;
    int data[4];
} Msg_8260F708;
typedef struct Src_8260F708 {
    char pad[0x10];
    int a, b, c, d;
} Src_8260F708;
typedef struct Obj_8260F708 {
    char pad[0x60];
    void **target;
} Obj_8260F708;
extern void XMemSet(void *dst, int value, unsigned int size);
extern void fn_8257C8F0(void *target, Msg_8260F708 *msg);

void fn_8260F708(Obj_8260F708 *self, int unused, Src_8260F708 *src)
{
    Msg_8260F708 m;
    XMemSet(m.data, 0, 0x10);
    m.type = 0x2b;
    m.size = 0x18;
    m.data[0] = src->a;
    m.data[1] = src->b;
    m.data[2] = src->c;
    m.data[3] = src->d;
    fn_8257C8F0(*self->target, &m);
}
