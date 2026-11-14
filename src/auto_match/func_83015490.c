typedef struct Obj_83015490 Obj_83015490;

typedef struct {
    void *f0;
    int (*f1)(Obj_83015490 *self, int a, int b, int c);
} Vtbl_83015490;

struct Obj_83015490 {
    Vtbl_83015490 *vt;
};

typedef struct {
    int pad0;
    Obj_83015490 *obj;
} Entry_83015490;

extern Entry_83015490 *fn_82FFE0F0(void *p);

int fn_83015490(char *param_1, int param_2, int param_3, int param_4, int param_5)
{
    Entry_83015490 *e;
    Obj_83015490 *o;

    e = fn_82FFE0F0(param_1 + 4);
    if (e != 0) {
        o = e->obj;
        return o->vt->f1(o, param_3, param_4, param_5);
    }
    return 0xe;
}
