typedef struct Obj_82749748 {
    int pad0;
    int pad4;
    int refcount;
} Obj_82749748;

typedef struct Var_82749748 {
    unsigned char type;
    unsigned char pad1[7];
    int value;
    int pad2;
} Var_82749748;

typedef struct Temps_82749748 {
    unsigned char b[10];
    Obj_82749748 *s[9];
} Temps_82749748;

extern void fn_82749668(int *self, unsigned int *ctx);
extern void fn_826BF638(int *dst, int *self, unsigned int *ctx, char *name, unsigned char *kind);
extern void fn_82681728(Obj_82749748 **out, unsigned int base, char *name);
extern void fn_826C1FF8(int *dst, unsigned int *ctx, Obj_82749748 **name, Var_82749748 *v, unsigned char *kind);
extern void fn_826944C8(Obj_82749748 *o);
extern void fn_82696330(Var_82749748 *v);

extern char lbl_82012D58[];
extern char lbl_82012C60[];
extern char lbl_82012D54[];
extern char lbl_82012B48[];
extern char lbl_82012BC4[];
extern char lbl_82012BB4[];
extern char lbl_82012BA4[];
extern char lbl_82012B94[];
extern char lbl_82012B88[];
extern char lbl_82012B7C[];
extern char lbl_82012B70[];
extern char lbl_82012B64[];
extern char lbl_82012B60[];

static __forceinline void addProp_82749748(int *dst, unsigned int *ctx, Obj_82749748 **s,
                                           Var_82749748 *v, unsigned char *b, char *name)
{
    Obj_82749748 *o;
    *b = 2;
    v->type = 4;
    v->value = 0;
    fn_82681728(s, *ctx + 0x254, name);
    fn_826C1FF8(dst, ctx, s, v, b);
    o = *s;
    if (--o->refcount == 0) {
        fn_826944C8(o);
    }
    fn_82696330(v);
}

int *fn_82749748(int *param_1, unsigned int *param_2)
{
    Temps_82749748 t;
    Var_82749748 v[9];
    int *props;

    fn_82749668(param_1, param_2);
    param_1[0] = (int)lbl_82012D58;
    param_1[4] = (int)lbl_82012C60;
    param_1[0x14] = (int)lbl_82012D54;
    t.b[8] = 6;
    props = param_1 + 4;
    fn_826BF638(param_1 + 0x14, param_1, param_2, lbl_82012B48, &t.b[8]);

    addProp_82749748(props, param_2, &t.s[7], &v[0], &t.b[2], lbl_82012BC4);
    addProp_82749748(props, param_2, &t.s[5], &v[5], &t.b[6], lbl_82012BB4);
    addProp_82749748(props, param_2, &t.s[3], &v[3], &t.b[4], lbl_82012BA4);
    addProp_82749748(props, param_2, &t.s[0], &v[7], &t.b[0], lbl_82012B94);
    addProp_82749748(props, param_2, &t.s[1], &v[1], &t.b[1], lbl_82012B88);
    addProp_82749748(props, param_2, &t.s[2], &v[2], &t.b[3], lbl_82012B7C);
    addProp_82749748(props, param_2, &t.s[4], &v[4], &t.b[5], lbl_82012B70);
    addProp_82749748(props, param_2, &t.s[6], &v[6], &t.b[7], lbl_82012B64);
    addProp_82749748(props, param_2, &t.s[8], &v[8], &t.b[9], lbl_82012B60);
    return param_1;
}
