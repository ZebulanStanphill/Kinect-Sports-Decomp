typedef struct Handler Handler;
typedef struct HandlerVtbl {
    void *f0;
    void *f4;
    int (*Begin)(Handler *self, void *req);
    void *fc;
    int (*End)(Handler *self, void *req);
} HandlerVtbl;
struct Handler {
    HandlerVtbl *vt;
};

typedef struct Slot {
    char pad[0x74];
    Handler *handler;
} Slot;

typedef struct Req {
    int id;
    int sub;
    char pad[0x24 - 8];
    void *owner;
} Req;

typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f[8];
    void *(*GetCtx)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
    int index;
    int id;
    int pad0c;
    int pad10;
    int key;
    int pad18;
    int pad1c;
    char *slots;
    int pad24;
    int pad28;
    int pad2c;
    int mode;
};

extern int fn_827D50F8(int key);
extern void fn_827E4218(void *ctx, Req **out);
extern void fn_82517A50(int *dst, int *src);

int fn_827E5CB8(Obj *obj, Req **out)
{
    Handler *h;
    Req *r;
    int hr;

    if (fn_827D50F8(obj->key) != 0)
        return 0x4c7;
    fn_827E4218(obj->vt->GetCtx(obj), out);
    (*out)->owner = obj;
    (*out)->id = obj->id;
    fn_82517A50(&(*out)->sub, &obj->key);
    if (obj->mode == 0) {
        r = *out;
        h = *(Handler **)(obj->index * 0x28 + obj->slots + 0x74);
        hr = h->vt->Begin(h, r);
    } else if (obj->mode == 1) {
        r = *out;
        h = *(Handler **)(obj->index * 0x28 + obj->slots + 0x74);
        hr = h->vt->End(h, r);
    } else {
        return 0x57;
    }
    if (hr == 0x3e5 || hr == 0x3e4)
        hr = 0;
    return hr;
}
