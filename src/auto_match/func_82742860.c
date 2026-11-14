typedef struct Parser_82742860 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_82742860;

typedef struct Matrix_82742860 {
    float a, b, tx;
    float c, d, ty;
} Matrix_82742860;

extern unsigned char fn_82695468(Parser_82742860 *p, int kind);
extern void fn_826954C0(Parser_82742860 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_82742860 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern void fn_82741A50(Matrix_82742860 *out, char *obj, int ctx);
extern void fn_82741C18(char *obj, int ctx, Matrix_82742860 *m);
extern void fn_8268CF60(Matrix_82742860 *m, Matrix_82742860 *r);
extern double cos(double x);
extern double sin(double x);

void fn_82742860(Parser_82742860 *param_1)
{
    char *obj;
    float angle;
    float c;
    float s;
    Matrix_82742860 r;
    Matrix_82742860 m;

    if (fn_82695468(param_1, 0xf) == 0) {
        fn_826954C0(param_1, "Matrix", 0, 0);
        return;
    }
    obj = param_1->node ? param_1->node - 0x10 : 0;
    if (obj != 0 && param_1->count > 0) {
        angle = (float)fn_826972E0(fn_826957D0(param_1, 0), param_1->ctx);
        fn_82741A50(&m, obj, param_1->ctx);
        c = (float)cos(angle);
        s = (float)sin(angle);
        r.a = c;
        r.b = -s;
        r.tx = 0.0f;
        r.c = s;
        r.d = c;
        r.ty = 0.0f;
        fn_8268CF60(&m, &r);
        fn_82741C18(obj, param_1->ctx, &m);
    }
}
