typedef struct {
    char pad[0x28];
    int w0, h0, w1, h1;
    char pad2[0x160 - 0x38];
    void *buf0;
    void *buf1;
} Obj_82EDD0B8;
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern unsigned int fn_82EDC068(Obj_82EDD0B8 *o, int w, int h);

int fn_82EDD0B8(Obj_82EDD0B8 *o)
{
    unsigned int s0, s1;
    if (o->buf0 != 0) {
        fn_8265C990(o->buf0, 0x248c8000);
        o->buf0 = 0;
    }
    if (o->buf1 != 0) {
        fn_8265C990(o->buf1, 0x248c8000);
        o->buf1 = 0;
    }
    s0 = fn_82EDC068(o, o->w0, o->h0);
    s1 = fn_82EDC068(o, o->w1, o->h1);
    o->buf0 = fn_8265C940(s0, 0x248c8000);
    if (o->buf0 == 0) {
        return 0;
    }
    o->buf1 = fn_8265C940(s1, 0x248c8000);
    return o->buf1 != 0;
}
