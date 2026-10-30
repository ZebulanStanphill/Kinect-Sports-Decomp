typedef struct VT_826A6CB8 {
    void *s[2];
    int (*kind)(struct Obj8_826A6CB8 *);
} VT_826A6CB8;
typedef struct Obj8_826A6CB8 {
    VT_826A6CB8 *vt;
} Obj8_826A6CB8;
typedef struct Flag_826A6CB8 {
    unsigned char a;
    unsigned char pad1[3];
    unsigned char b;
} Flag_826A6CB8;
typedef struct Ctx_826A6CB8 {
    char pad[0x74];
    void *f74;
} Ctx_826A6CB8;
typedef struct Obj_826A6CB8 {
    int pad0;
    Flag_826A6CB8 *flag;
    Obj8_826A6CB8 *sub;
    int pad[3];
    Ctx_826A6CB8 *ctx;
    int count;
} Obj_826A6CB8;
extern void fn_826959C8(Flag_826A6CB8 *f);
extern int fn_826957D0(Obj_826A6CB8 *o, int a);
extern int fn_82697610(int a, Ctx_826A6CB8 *c);
extern int fn_826C6748(void *p);

void fn_826A6CB8(Obj_826A6CB8 *param_1)
{
    Flag_826A6CB8 *f;
    unsigned int x;
    Obj8_826A6CB8 *sub;
    int a;
    int b;

    if (param_1->count >= 1) {
        f = param_1->flag;
        fn_826959C8(f);
        x = 0;
        f->a = 2;
        f->b = 0;
        sub = param_1->sub;
        if (sub == 0) {
            x = (unsigned int)param_1->ctx->f74;
        } else {
            if (sub->vt->kind(sub) != 2) {
                return;
            }
            if (param_1->sub != 0) {
                x = (unsigned int)param_1->sub - 0x68;
            } else {
                x = 0;
            }
        }
        if (x != 0) {
            a = fn_82697610(fn_826957D0(param_1, 0), param_1->ctx);
            b = fn_826C6748((void *)x);
            if (a < b) {
                f = param_1->flag;
                fn_826959C8(f);
                f->a = 2;
                f->b = 1;
            }
        }
    }
}
