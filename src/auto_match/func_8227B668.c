typedef struct Var_8227B800 {
    int a;
    int b;

    union {
        double d;
        int i;
    } u;
} Var_8227B800;

typedef struct Ref_8227B800 {
    void *p;
    void *rc;
} Ref_8227B800;

typedef struct Screen_8227B668 {
    char pad0[0xa48];
    int fa48;   /* 0xa48 */
    float fa4c; /* 0xa4c */
    char pad1[0x1c];
    int fa6c; /* 0xa6c */
    char pad2[0x14];
    int configuration; /* 0xa84 */
} Screen_8227B668;

extern void fn_82273CD8(Var_8227B800 *, int);
extern void fn_82273C88(Var_8227B800 *);
extern Ref_8227B800 *fn_82279C58(Ref_8227B800 *, void *);
extern void fn_82672C20(void *, const char *, Var_8227B800 *, int);
extern void fn_822315A0(void *);

void fn_8227B668(Screen_8227B668 *self, unsigned int players, unsigned int mode)
{
    Var_8227B800 v;
    Ref_8227B800 r;
    double value;

    self->configuration = 8;
    switch (mode) {
    case 0:
    case 1:
        switch (players) {
        case 1:
            self->configuration = 0;
            break;
        case 2:
            self->configuration = 1;
            break;
        case 3:
            self->configuration = 6;
            break;
        case 4:
            self->configuration = 7;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            self->configuration = 8;
            break;
        }
        break;
    case 2:
        switch (players) {
        case 2:
            self->configuration = 10;
            break;
        case 3:
            self->configuration = 11;
            break;
        case 4:
            self->configuration = 12;
            break;
        }
        break;
    case 3:
        switch (players) {
        case 3:
            self->configuration = 13;
            break;
        case 4:
            self->configuration = 14;
            break;
        }
        break;
    case 4:
        self->configuration = ((self->fa6c == 0) ^ 1) + 2;
        break;
    case 5:
        self->configuration = 9;
        break;
    }
    self->fa48 = 0;
    v.a = 0;
    v.b = 0;
    value = (double)self->configuration;
    self->fa4c = 0.0f;
    fn_82273CD8(&v, 3);
    v.u.d = value;
    fn_82672C20(fn_82279C58(&r, self)->p, "_root.mainCtrl.setConfiguration", &v, 1);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    fn_82273C88(&v);
}
