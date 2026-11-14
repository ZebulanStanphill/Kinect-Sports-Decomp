typedef struct Var_8227C610 {
    int a;
    int b;
    union {
        double d;
        int i;
        unsigned char b;
        const void *p;
    } u;
} Var_8227C610;

typedef struct Ref_8227C610 {
    void *p;
    void *rc;
} Ref_8227C610;

typedef struct Obj_8227C610 {
    char pad0[0x270];
    char name[0xa6c - 0x270];   /* 0x270 */
    int a6c;                    /* 0xa6c */
    int a70;                    /* 0xa70 */
} Obj_8227C610;

extern const double lbl_821954B0[];
extern void fn_82273CD8(Var_8227C610 *, int);
extern void fn_82273C88(Var_8227C610 *);
extern Ref_8227C610 *fn_82279C58(Ref_8227C610 *, Obj_8227C610 *);
extern void fn_82672C20(void *, const char *, Var_8227C610 *, int);
extern void fn_822315A0(void *);
extern int fn_8227C118(Obj_8227C610 *self, unsigned int row);
extern int fn_8227C0A8(Obj_8227C610 *self);

static __forceinline void SetNumber(Var_8227C610 *v, double d)
{
    fn_82273CD8(v, 3);
    v->u.d = d;
}

static __forceinline void SetBool(Var_8227C610 *v, unsigned char b)
{
    fn_82273CD8(v, 2);
    v->u.b = b;
}

static __forceinline void SetInt(Var_8227C610 *v, int i)
{
    fn_82273CD8(v, 5);
    v->u.i = i;
}

void fn_8227C610(Obj_8227C610 *self, unsigned int row, int mode, int value, unsigned int index, int flag)
{
    Ref_8227C610 r;
    Var_8227C610 v[8];
    Var_8227C610 *p;
    int ready;
    int i;

    for (i = 0; i < 8; i++) { v[i].a = 0; v[i].b = 0; }
    SetNumber(&v[0], (double)row);
    SetInt(&v[2], value);
    SetBool(&v[3], self->a6c != 0);
    SetNumber(&v[4], (double)(index + 1));
    SetBool(&v[5], flag != 0);
    ready = fn_8227C118(self, row);
    switch (mode) {
    case 1:
        fn_82273CD8(&v[1], 3);
        v[1].u.d = lbl_821954B0[112];
        break;
    case 2:
        fn_82273CD8(&v[1], 3);
        v[1].u.d = lbl_821954B0[15];
        break;
    default:
        if (fn_8227C0A8(self) != 0 && ready != 0) {
            fn_82273CD8(&v[1], 3);
            v[1].u.d = lbl_821954B0[33];
        } else {
            fn_82273CD8(&v[1], 3);
            v[1].u.d = lbl_821954B0[136];
        }
        break;
    }
    if (self->a70 != 0 && ready != 0) {
        fn_82273CD8(&v[7], 5);
        v[7].u.p = self->name;
    } else {
        fn_82273CD8(&v[7], 0);
    }
    fn_82672C20(fn_82279C58(&r, self)->p, "_root.mainCtrl.setupRow", v, 8);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    p = v + 8; i = 7; do { p--; fn_82273C88(p); } while (--i >= 0);
}
