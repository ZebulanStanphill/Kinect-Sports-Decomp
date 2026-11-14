typedef struct Type_829881B8 {
    int f00[5];
    int scalar;
} Type_829881B8;

extern int fn_82986DF0(void *ctx, void *expr, unsigned int *out);
extern void fn_82980C18(void *ctx, void *loc, int code, const char *fmt, ...);
extern void *fn_82930318(unsigned int size);
extern void *fn_82931D88(void *self, int kind, int scalar, int a, unsigned int rows,
                         unsigned int cols, int b);

void *fn_829881B8(char *ctx, Type_829881B8 *type, void *rowsExpr, void *colsExpr)
{
    unsigned int rows;
    unsigned int cols;
    void *mem;

    if (type != 0) {
        if (fn_82986DF0(ctx, rowsExpr, &rows) < 0 || fn_82986DF0(ctx, colsExpr, &cols) < 0) {
            fn_82980C18(ctx, ctx + 0x28, 0xbf5, "matrix dimensions must be literal scalar expressions");
        } else if (rows < 1 || rows > 4 || cols < 1 || cols > 4) {
            fn_82980C18(ctx, ctx + 0x28, 0xbed, "matrix dimensions must be between 1 and %u", 4);
        } else {
            mem = fn_82930318(0x28);
            if (mem != 0)
                return fn_82931D88(mem, 2, type->scalar, 0, rows, cols, 0);
        }
    }
    return 0;
}
