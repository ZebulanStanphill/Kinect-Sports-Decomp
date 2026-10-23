typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void *f4;
    void (*Release)(Obj *);
    void *fc;
    void *f10;
    int (*IsValid)(Obj *);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Obj *fn_82FAB9C0(void *list, int key);
extern int fn_83002890(Obj *o, int arg);
extern char *lbl_832642E0;
extern char lbl_8326434C[];

int fn_82FEBBE8(int key, int arg)
{
    Obj *o;
    int r;

    RtlEnterCriticalSection(lbl_8326434C);
    o = fn_82FAB9C0(lbl_832642E0 + 4, key);
    if (o == 0) {
        RtlLeaveCriticalSection(lbl_8326434C);
        return 0xf;
    }
    if (o->vt->IsValid(o) == 0) {
        o->vt->Release(o);
        RtlLeaveCriticalSection(lbl_8326434C);
        return 4;
    }
    r = fn_83002890(o, arg);
    o->vt->Release(o);
    RtlLeaveCriticalSection(lbl_8326434C);
    return r;
}
