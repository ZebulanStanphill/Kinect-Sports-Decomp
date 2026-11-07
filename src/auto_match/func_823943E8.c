typedef struct Obj_823943E8 Obj_823943E8;

typedef struct {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void *slot4;
    void (*f14)(Obj_823943E8 *self, void *a, void *b);
} Vtbl_823943E8;

struct Obj_823943E8 {
    Vtbl_823943E8 *vt;
};

typedef struct {
    unsigned int w[4];
} Buf_823943E8;

extern void *fn_82394228(void *c);
extern void fn_82394380(void *c, void *buf);

void fn_823943E8(Obj_823943E8 *p, void *a, void *c)
{
    Buf_823943E8 buf;
    void *r;

    r = fn_82394228(c);
    if (r != 0) {
        p->vt->f14(p, a, r);
    } else {
        p->vt->f14(p, a, &buf);
        fn_82394380(c, &buf);
    }
}
