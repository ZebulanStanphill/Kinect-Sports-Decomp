extern void fn_822315A0(void *p);
extern void fn_82517978(void *out, int a, void *b, int c);
extern void fn_82522ED8(void *p);
extern int lbl_832767AC;

typedef struct Obj Obj;
typedef struct {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct {
    int a;
    void *b;
} Pair;

typedef struct {
    Obj *obj;
    int f4;
    int f8;
    int fc;
    void (*cb)(Pair *pair, int ctx);
    int ctx;
} Req;

void fn_8251FD50(Pair *p, Req *req)
{
    Pair tmp;
    void *b;

    if (req->cb != 0) {
        tmp.a = 0;
        tmp.b = 0;
        fn_82517978(&tmp, p->a, p->b, 0);
        req->cb(&tmp, req->ctx);
    }
    if (req->obj != 0)
        req->obj->vtbl->dtor(req->obj, 1);
    fn_82522ED8(req);
    b = p->b;
    lbl_832767AC--;
    if (b != 0)
        fn_822315A0(b);
}
