typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct Mgr Mgr;
typedef struct MgrVtbl {
    void *pad[6];
    void (*m18)(Mgr *self, Obj *o, void *msg);
} MgrVtbl;
struct Mgr {
    MgrVtbl *vtbl;
};

extern Obj *fn_827DE938(Obj *o);
extern void fn_82811438(void *dst, void *src, int size);
extern Mgr *lbl_83156AA0;

void fn_825BF2B0(void *param_1, Obj *param_2)
{
    Obj *child;
    int data[4];
    char msg[32];

    if (fn_827DE938(param_2) != 0) {
        child = fn_827DE938(param_2);
        if (child != 0) {
            child->vtbl->dtor(child, 1);
        }
    }
    param_2->vtbl->dtor(param_2, 0);
    data[0] = 3;
    fn_82811438(msg, data, 0x10);
    lbl_83156AA0->vtbl->m18(lbl_83156AA0, param_2, msg);
}
