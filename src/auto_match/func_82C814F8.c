typedef struct {
    char pad[0x24];
    int w0, h0, w1, h1;
    char pad2[0x130 - 0x34];
    void *buf0;
    void *buf1;
} Obj_82C814F8;
extern void *fn_82C53960(unsigned int size, unsigned int flags);
extern void fn_82C53970(void *p);
extern unsigned int fn_82C80360(Obj_82C814F8 *o, int w, int h);

int fn_82C814F8(Obj_82C814F8 *o)
{
    unsigned int s0, s1;
    if (o->buf0 != 0) {
        fn_82C53970(o->buf0);
        o->buf0 = 0;
    }
    if (o->buf1 != 0) {
        fn_82C53970(o->buf1);
        o->buf1 = 0;
    }
    s0 = fn_82C80360(o, o->w0, o->h0);
    s1 = fn_82C80360(o, o->w1, o->h1);
    o->buf0 = fn_82C53960(s0, 0);
    if (o->buf0 == 0) {
        return 0;
    }
    o->buf1 = fn_82C53960(s1, 0);
    return o->buf1 != 0;
}
