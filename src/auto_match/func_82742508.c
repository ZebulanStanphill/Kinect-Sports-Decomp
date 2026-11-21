#include <math.h>

typedef struct Parser_82742508 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_82742508;

typedef struct Matrix_82742508 {
    float a, b, tx;
    float c, d, ty;
} Matrix_82742508;

extern unsigned char fn_82695468(Parser_82742508 *p, int kind);
extern void fn_826954C0(Parser_82742508 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_82742508 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern void fn_8268CC00(Matrix_82742508 *m);
extern void fn_8268CF60(Matrix_82742508 *p, const Matrix_82742508 *m);
extern void fn_82741C18(char *obj, int ctx, Matrix_82742508 *m);

void fn_82742508(Parser_82742508 *parser)
{
    char *obj;
    float x;
    float y;
    float angle;
    float tx;
    float ty;
    float cosine;
    float sine;
    Matrix_82742508 m;
    Matrix_82742508 rotation;

    if (fn_82695468(parser, 0xf) == 0) {
        fn_826954C0(parser, "Matrix", 0, 0);
        return;
    }
    obj = parser->node ? parser->node - 0x10 : 0;
    if (obj != 0 && parser->count > 1) {
        fn_8268CC00(&m);
        x = (float)fn_826972E0(fn_826957D0(parser, 0), parser->ctx);
        y = (float)fn_826972E0(fn_826957D0(parser, 1), parser->ctx);
        angle = 0.0f;
        tx = x * 0.5f;
        ty = y * 0.5f;
        if (parser->count > 2) {
            angle = (float)fn_826972E0(fn_826957D0(parser, 2), parser->ctx);
            if (parser->count > 3) {
                tx += (float)fn_826972E0(fn_826957D0(parser, 3), parser->ctx);
                if (parser->count > 4) {
                    ty += (float)fn_826972E0(fn_826957D0(parser, 4), parser->ctx);
                }
            }
        }
        x *= 0.0006103515625f;
        y *= 0.0006103515625f;
        cosine = (float)cos(angle);
        sine = (float)sin(angle);
        rotation.a = cosine;
        rotation.b = -sine;
        rotation.tx = 0.0f;
        rotation.c = sine;
        rotation.d = cosine;
        rotation.ty = 0.0f;
        fn_8268CF60(&m, &rotation);
        m.a *= x;
        m.b *= x;
        m.tx *= x;
        m.c *= y;
        m.d *= y;
        m.ty *= y;
        m.tx += tx;
        m.ty += ty;
        fn_82741C18(obj, parser->ctx, &m);
    }
}
