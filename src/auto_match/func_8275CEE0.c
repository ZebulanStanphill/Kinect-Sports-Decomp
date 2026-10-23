extern void fn_82685518(void *a, void *b);

typedef struct Del Del;
typedef struct DelVtbl {
    void (*dtor)(Del *d, int flags);
} DelVtbl;
struct Del {
    DelVtbl *vt;
};

typedef struct Obj {
    char pad0[0x18];
    void *p18;
    int pad1c;
    Del *p20;
} Obj;

void fn_8275CEE0(Obj *param_1)
{
    Del *d;

    if (param_1->p18 != 0) {
        fn_82685518(param_1->p18, param_1);
    }
    d = param_1->p20;
    param_1->p18 = 0;
    if (d != 0) {
        d->vt->dtor(d, 1);
    }
    param_1->p20 = 0;
}
