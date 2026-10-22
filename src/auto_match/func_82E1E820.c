extern void fn_8265CA20(void *p);
extern void fn_8265CAA0(void *p);
extern void fn_82A1E650(void *h, unsigned int timeout);
extern void fn_82A1E658(void *h);
extern void fn_82E20BF8(void *p);
extern void fn_82E21080(void *p);

typedef struct Deletable Deletable;
typedef struct {
    void (*destroy)(Deletable *d, int flags);
} DeletableVt;
struct Deletable {
    DeletableVt *vt;
};

typedef struct {
    void *buf0;
    void *buf4;
    char pad8[0xd];
    unsigned char x15;
    char pad16[6];
    void *thread1c;
    char pad20[0x28];
    void *x48;
    void *buf4c;
    int pad50;
    void *x54;
    Deletable *x58;
    int pad5c;
    void *thread60;
} Obj;

void fn_82E1E820(Obj *p)
{
    void *q;

    if (p->buf0 != 0) {
        fn_8265CAA0(p->buf0);
        p->buf0 = 0;
    }
    if (p->buf4 != 0) {
        fn_8265CAA0(p->buf4);
        p->buf4 = 0;
    }
    if (p->buf4c != 0) {
        fn_8265CAA0(p->buf4c);
        p->buf4c = 0;
    }
    q = p->x54;
    if (q != 0) {
        fn_82E20BF8(q);
        fn_8265CA20(q);
        p->x54 = 0;
    }
    q = p->x48;
    if (q != 0) {
        fn_82E21080(q);
        fn_8265CA20(q);
    }
    if (p->x58 != 0) {
        p->x58->vt->destroy(p->x58, 1);
    }
    p->x15 = 1;
    if (p->thread1c != 0) {
        fn_82A1E650(p->thread1c, 0xffffffff);
        fn_82A1E658(p->thread1c);
    }
    if (p->thread60 != 0) {
        fn_82A1E650(p->thread60, 0xffffffff);
        fn_82A1E658(p->thread60);
    }
}
