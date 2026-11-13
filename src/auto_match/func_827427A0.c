typedef struct Parser_827427A0 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
} Parser_827427A0;

typedef struct Matrix_827427A0 {
    float a, b, tx;
    float c, d, ty;
} Matrix_827427A0;

extern unsigned char fn_82695468(Parser_827427A0 *p, int kind);
extern void fn_826954C0(Parser_827427A0 *p, const char *name, int a, int b);
extern Matrix_827427A0 *fn_82741A50(Matrix_827427A0 *out, char *obj, int ctx);
extern void fn_82741C18(char *obj, int ctx, Matrix_827427A0 *m);
extern void fn_8268CD40(Matrix_827427A0 *m, Matrix_827427A0 *src);

void fn_827427A0(Parser_827427A0 *param_1)
{
    char *obj;
    Matrix_827427A0 *m;
    Matrix_827427A0 tmp;
    Matrix_827427A0 copy;

    if (fn_82695468(param_1, 0xf) == 0) {
        fn_826954C0(param_1, "Matrix", 0, 0);
        return;
    }
    obj = param_1->node ? param_1->node - 0x10 : 0;
    if (obj != 0) {
        m = fn_82741A50(&tmp, obj, param_1->ctx);
        copy.a = m->a;
        copy.b = m->b;
        copy.tx = m->tx;
        copy.c = m->c;
        copy.d = m->d;
        copy.ty = m->ty;
        fn_8268CD40(m, &copy);
        fn_82741C18(obj, param_1->ctx, m);
    }
}
