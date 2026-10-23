typedef struct Handler Handler;
typedef struct {
    void (*f0)(Handler *h);
    void (*f1)(Handler *h);
    void (*f2)(Handler *h, void *obj, void *arg);
} HandlerVtbl;
struct Handler {
    HandlerVtbl *vtbl;
};

typedef struct {
    char pad0[0x18];
    unsigned int flags;
    char pad1c[0x2c - 0x1c];
    Handler *handler;
} Obj;

extern void fn_82BE64E0(Obj *o, int v);

void fn_82BE6638(Obj *param_1, void *param_2)
{
    fn_82BE64E0(param_1, 0x2000);
    if ((param_1->flags & 0xf00000) == 0) {
        param_1->handler->vtbl->f2(param_1->handler, param_1, param_2);
    }
}
