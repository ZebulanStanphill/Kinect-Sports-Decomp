typedef struct Compiler_82988100 {
    char pad0[0x28];
    int loc;                /* 0x28 */
} Compiler_82988100;

typedef struct Node_82988100 {
    char pad0[0x14];
    void *type;             /* 0x14 */
} Node_82988100;

extern int fn_82986DF0(Compiler_82988100 *c, void *source, unsigned int *out);
extern void fn_82980C18(Compiler_82988100 *c, void *loc, int code, const char *fmt, ...);
extern void *fn_82930318(unsigned int size);
extern void *fn_82931D88(void *p, int a, void *b, int c, int d, unsigned int e, int f);

void *fn_82988100(Compiler_82988100 *c, Node_82988100 *base, void *dimExpr)
{
    unsigned int value;
    unsigned int dim;
    void *p;

    if (base != 0) {
        if (fn_82986DF0(c, dimExpr, &value) < 0) {
            fn_82980C18(c, &c->loc, 0xbf4, "vector dimension must be a literal scalar expression");
            return 0;
        }
        dim = value;
        if (dim < 1 || dim > 4) {
            fn_82980C18(c, &c->loc, 0xbec, "vector dimension must be between 1 and %u", 4);
            return 0;
        }
        p = fn_82930318(0x28);
        if (p != 0)
            return fn_82931D88(p, 1, base->type, 0, 1, dim, 0);
    }
    return 0;
}
