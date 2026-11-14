typedef struct Desc_825BA530 {
    char data[6];
} Desc_825BA530;

typedef struct A_825BA530 {
    int f0;
    Desc_825BA530 desc;     /* 0x04 */
    char pad0a[9];
    unsigned char f13;      /* 0x13 */
    char pad14[0x20];
    void *f34;              /* 0x34 */
    void *f38;              /* 0x38 */
    void *f3c;              /* 0x3c */
    char pad40[8];
    int f48;                /* 0x48 */
} A_825BA530;

typedef struct Def_825BA530 {
    char pad0[0x42];
    char name[0x40];        /* 0x42 */
    char pad82[0x52];
    void *fd4;              /* 0xd4 */
    int padd8;
    void *fdc;              /* 0xdc */
    void *fe0;              /* 0xe0 */
    char pade4[0x5c8 - 0xe4];
} Def_825BA530;

typedef struct Elem_825BA530 {
    const char *name;
} Elem_825BA530;

typedef struct B_825BA530 B_825BA530;

extern void fn_82529508(Def_825BA530 *def);
extern Elem_825BA530 *fn_82587B68(int i);
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern void *fn_8255C3D8(void *, void *, B_825BA530 *);
extern void *fn_82587AC0(void *);
extern void *fn_82529A38(void *, void *, int);
extern void fn_82564348(void *);

void fn_825BA530(A_825BA530 *self, B_825BA530 *b)
{
    Def_825BA530 def;
    void *obj;
    void *key;

    fn_82529508(&def);
    fn_82526C70(def.name, 0x40, "objDefId_%s", fn_82587B68(2)->name);
    fn_8255C3D8(&def, &self->desc, b);
    if (self->f34 != 0)
        def.fd4 = self->f34;
    if (self->f38 != 0)
        def.fdc = self->f38;
    if (self->f3c != 0)
        def.fe0 = self->f3c;
    key = fn_82587AC0(def.name + 9);
    obj = fn_82529A38(key, &def, 0);
    if (self->f13 != 0 || self->f48 != 0)
        fn_82564348(obj);
}
