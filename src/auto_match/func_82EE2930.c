extern void fn_82E50F00(void *p, int n);
extern void fn_82E51028(void *p, int n);
extern void *fn_82E63500(void *p, void *q);

typedef struct Obj {
    struct ObjVtbl *vt;
} Obj;
typedef struct ObjVtbl {
    void *f0;
    void (*AddRef)(Obj *o);
} ObjVtbl;

typedef struct Item {
    unsigned short type;
    short pad;
    int pad2;
    Obj *obj;
} Item;

int fn_82EE2930(char *param_1, void *param_2, Obj *param_3)
{
    Item *it;
    int hr;

    fn_82E50F00(param_1 + 4, 1);
    it = (Item *)fn_82E63500(param_1, param_2);
    hr = 0;
    if (it == 0) {
        hr = 0x8007000e;
    } else {
        it->obj = param_3;
        it->type = 0xd;
        if (param_3 != 0) {
            param_3->vt->AddRef(param_3);
        }
    }
    fn_82E51028(param_1 + 4, 1);
    return hr;
}
