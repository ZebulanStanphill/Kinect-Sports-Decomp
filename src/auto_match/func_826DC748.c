typedef struct Inner {
    char pad[0x7c];
    unsigned int state;
    char *m80;
} Inner;

typedef struct Obj {
    void *vt;
    int pad[6];
    void *m1c;
    int m20;
    int pad24[3];
    void *m30;
} Obj;

extern char lbl_8200C6C0[];
extern void fn_8267BE38(void *p);
extern void fn_8267C498(void *p);
extern void fn_8267C4C8(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_8267C8D8(void *p);
extern void fn_8267CB10(void *p);
extern void fn_8267D9C0(void *p);
extern void fn_826D6370(void *p);
extern void fn_826E54D8(Obj *p);
extern void fn_827B0A40(void *p);

void fn_826DC748(Obj *o)
{
    char *r;
    Inner *in;
    void *m30;

    o->vt = lbl_8200C6C0;
    if (o->m20 != 0) {
        r = ((Inner *)o->m20)->m80;
    } else {
        r = 0;
    }
    if (r != 0) {
        fn_8267C4C8(r);
    }
    in = (Inner *)o->m20;
    if (o->m20 != 0) {
        if (in->state == 1) {
            char *q = in->m80 + 8;
            fn_8267C8D8(q);
            in->state = 3;
            fn_8267CB10(in->m80 + 0x1c);
            fn_8267D9C0(q);
        }
        if ((void *)o->m20 != 0) {
            fn_8267C4F0((void *)o->m20);
        }
        o->m20 = 0;
    }
    m30 = o->m30;
    if (m30 != 0) {
        fn_827B0A40(m30);
        fn_8267BE38(m30);
    }
    if (o->m1c != 0) {
        fn_8267C498(o->m1c);
    }
    o->m1c = 0;
    if (r != 0) {
        fn_826D6370(r);
        fn_8267C4F0(r);
    }
    if ((void *)o->m20 != 0) {
        fn_8267C4F0((void *)o->m20);
    }
    if (o->m1c != 0) {
        fn_8267C498(o->m1c);
    }
    fn_826E54D8(o);
}
