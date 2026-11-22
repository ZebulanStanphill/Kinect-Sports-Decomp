typedef struct Var_8227C810 {
    int a;
    int b;

    union {
        double d;
        int i;
        unsigned char b;
        const void *p;
    } u;
} Var_8227C810;

typedef struct Ref_8227C810 {
    void *p;
    void *rc;
} Ref_8227C810;

typedef struct Obj_8227C810 {
    char pad0[0xa68];
    int a68; /* 0xa68 */
} Obj_8227C810;

typedef struct Details_8227C810 {
    char pad00[0x4];
    int avatar;       /* 0x04 */
    int state;        /* 0x08 */
    char name[0x40];  /* 0x0c */
    float value4c;    /* 0x4c */
    unsigned int u50; /* 0x50 */
    unsigned int u54; /* 0x54 */
    float value58;    /* 0x58 */
    unsigned int u5c; /* 0x5c */
    unsigned int u60; /* 0x60 */
} Details_8227C810;

extern void fn_82273CD8(Var_8227C810 *, int);
extern void fn_82273C88(Var_8227C810 *);
extern Ref_8227C810 *fn_82279C58(Ref_8227C810 *, Obj_8227C810 *);
extern void fn_82672C20(void *, const char *, Var_8227C810 *, int);
extern void fn_826728E8(void *, const char *, int);
extern void fn_822315A0(void *);
extern int fn_8227C0A8(Obj_8227C810 *self);
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);

static __forceinline void SetNumber(Var_8227C810 *v, double d)
{
    fn_82273CD8(v, 3);
    v->u.d = d;
}

static __forceinline void SetBool(Var_8227C810 *v, unsigned char b)
{
    fn_82273CD8(v, 2);
    v->u.b = b;
}

static __forceinline void SetString(Var_8227C810 *v, const char *s)
{
    fn_82273CD8(v, 5);
    v->u.p = s;
}

void fn_8227C810(Obj_8227C810 *self, int player, int mode, Details_8227C810 *details, int flag)
{
    Ref_8227C810 r;
    Ref_8227C810 r2;
    Var_8227C810 v[11];
    char avatar[16];
    Var_8227C810 *p;
    int i;

    for (i = 0; i < 11; i++) {
        v[i].a = 0;
        v[i].b = 0;
    }
    SetNumber(&v[0], (double)player);
    SetString(&v[2], details->name);
    SetNumber(&v[4], (double)details->u54);
    SetNumber(&v[5], (double)details->u50);
    SetNumber(&v[6], (double)details->value4c);
    SetNumber(&v[7], (double)details->u60);
    SetNumber(&v[8], (double)details->u5c);
    SetNumber(&v[9], (double)details->value58);
    SetBool(&v[10], self->a68 != 0);
    switch (mode) {
    case 1:
        SetNumber(&v[1], 1.0);
        SetBool(&v[3], 0);
        break;
    case 2:
        SetNumber(&v[1], 0.0);
        SetBool(&v[3], 0);
        break;
    default:
        SetBool(&v[3], details->state == 2);
        if (fn_8227C0A8(self) != 0 && flag != 0) {
            SetNumber(&v[1], 4.0);
        } else {
            SetNumber(&v[1], 3.0);
        }
        break;
    }
    fn_82672C20(fn_82279C58(&r, self)->p, "_root.mainCtrl.setPlayerDetails", v, 11);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    fn_82526C70(avatar, 16, "avatar_0%d", player);
    fn_826728E8(fn_82279C58(&r2, self)->p, avatar, details->avatar);
    if (r2.rc != 0) {
        fn_822315A0(r2.rc);
    }
    p = v + 11;
    i = 10;
    do {
        p--;
        fn_82273C88(p);
    } while (--i >= 0);
}
