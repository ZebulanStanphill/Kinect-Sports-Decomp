typedef struct Ctx {
    char pad00[0x5ac];
    int heap;
} Ctx;

typedef struct Obj {
    char pad00[0xc];
    Ctx *ctx;
    char pad10[0x80 - 0x10];
    void *vt80;
    char pad84[0x8c - 0x84];
    void *vt8c;
    char pad90[0x98 - 0x90];
    void *buf98;
    void *buf9c;
    void *bufa0;
    char pada4[0xac - 0xa4];
    int *objac;
    char padb0[0x814 - 0xb0];
    void *obj814;
    char pad818[0x858 - 0x818];
    int *arr858;
    int *arr85c;
} Obj;

extern char lbl_820E0214[];

void fn_82B7BEB0(int heap, void *p);
void fn_82BAFDC0(int *p);
void fn_82BBFE98(void *p);
void fn_82BC6DC0(void *p, int flag);

typedef struct Hdr { int heap; int data[1]; } Hdr;
static void FreeMem(int *p)
{
    Hdr *h = (Hdr *)(p - 1);
    fn_82B7BEB0(h->heap, h);
}

void fn_82BA3ED0(Obj *obj)
{
    int *p;

    p = obj->arr85c;
    if (p != 0) {
        FreeMem(p);
    }
    p = obj->arr858;
    if (p != 0) {
        FreeMem(p);
    }
    if (obj->obj814 != 0) {
        fn_82BC6DC0(obj->obj814, 1);
    }
    p = obj->objac;
    if (p != 0) {
        fn_82BAFDC0(p);
        FreeMem(p);
    }
    fn_82BBFE98(&obj->vt80);
    fn_82B7BEB0(obj->ctx->heap, obj->buf98);
    fn_82B7BEB0(obj->ctx->heap, obj->buf9c);
    fn_82B7BEB0(obj->ctx->heap, obj->bufa0);
    obj->vt8c = lbl_820E0214;
    obj->vt80 = lbl_820E0214;
}
