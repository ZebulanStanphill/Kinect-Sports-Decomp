typedef struct Parser_82742A80 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_82742A80;

typedef struct Matrix_82742A80 {
    float a, b, tx;
    float c, d, ty;
} Matrix_82742A80;

extern unsigned char fn_82695468(Parser_82742A80 *p, int kind);
extern void fn_826954C0(Parser_82742A80 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_82742A80 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern void fn_82741A50(Matrix_82742A80 *out, char *obj, int ctx);
extern void fn_82741C18(char *obj, int ctx, Matrix_82742A80 *m);

void fn_82742A80(Parser_82742A80 *param_1)
{
    char *obj;
    float x;
    float y;
    Matrix_82742A80 m;

    if (fn_82695468(param_1, 0xf) == 0) {
        fn_826954C0(param_1, "Matrix", 0, 0);
        return;
    }
    obj = param_1->node ? param_1->node - 0x10 : 0;
    if (obj != 0 && param_1->count > 1) {
        x = (float)fn_826972E0(fn_826957D0(param_1, 0), param_1->ctx);
        y = (float)fn_826972E0(fn_826957D0(param_1, 1), param_1->ctx);
        fn_82741A50(&m, obj, param_1->ctx);
        m.tx += x;
        m.ty += y;
        fn_82741C18(obj, param_1->ctx, &m);
    }
}
