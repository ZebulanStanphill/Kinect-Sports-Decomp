typedef struct Obj_82FB4990 Obj_82FB4990;

typedef struct ObjVtbl_82FB4990 {
    void (*Destroy)(Obj_82FB4990 *self, int flags);
} ObjVtbl_82FB4990;

struct Obj_82FB4990 {
    ObjVtbl_82FB4990 *vt;
    int pad4[6];
    void *res;
    int pad20[11];
    int refs;
};

extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FA9208(void *p);
extern void *lbl_831BC768;

void fn_82FB4990(Obj_82FB4990 *o)
{
    void *res;
    void *heap;

    if (--o->refs == 0) {
        res = o->res;
        o->res = 0;
        if (res != 0) {
            fn_82FA9208(res);
        }
        heap = lbl_831BC768;
        o->vt->Destroy(o, 0);
        fn_82FA5190(heap, o);
    }
}
