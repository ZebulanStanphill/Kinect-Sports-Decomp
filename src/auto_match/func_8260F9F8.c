typedef struct Msg_8260F9F8 {
    int type;
    int size;
    int a;
    int b;
    int first;
} Msg_8260F9F8;
typedef struct Src_8260F9F8 {
    char pad[0x10];
    int a, b;
} Src_8260F9F8;
typedef struct Obj_8260F9F8 {
    char pad[0x60];
    void **target;
} Obj_8260F9F8;
extern void fn_82A1EFC0(void *dst, int value, unsigned int size);
extern void fn_8257C8F0(void *target, Msg_8260F9F8 *msg);

void fn_8260F9F8(Obj_8260F9F8 *self, int unused, Src_8260F9F8 *src, int unused2, int state)
{
    Msg_8260F9F8 m;

    if (state == 0 || state == 1) {
        fn_82A1EFC0(&m.a, 0, 0xc);
        m.first = state == 0;
        m.type = 0x2c;
        m.size = 0x14;
        m.a = src->a;
        m.b = src->b;
        fn_8257C8F0(*self->target, &m);
    }
}
