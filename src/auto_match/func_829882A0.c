typedef struct Type_829882A0 {
    int x0;
    int kind;
    int x8;
    int xc;
    struct Type_829882A0 *next;
    int x14;
} Type_829882A0;

extern void *fn_82930318(int size);
extern Type_829882A0 *fn_82931BC0(void *mem, int kind, unsigned int count);
extern int fn_82986DF0(void *ctx, void *expr, unsigned int *value);
extern void fn_82980C18(void *ctx, void *loc, int code, const char *fmt, ...);

/* wrap a type in an array dimension: the new array node goes after the
   existing array (kind 8) nodes of the chain */
Type_829882A0 *fn_829882A0(void *ctx, Type_829882A0 *type, void *dimExpr)
{
    unsigned int count;
    void *mem;
    Type_829882A0 *array;
    Type_829882A0 **link;

    if (fn_82986DF0(ctx, dimExpr, &count) < 0) {
        fn_82980C18(ctx, 0, 0xbf2, "array dimensions must be literal scalar expressions");
        return 0;
    }
    mem = fn_82930318(0x18);
    if (mem != 0) {
        array = fn_82931BC0(mem, 0, count);
    } else {
        array = 0;
    }
    if (array == 0) {
        return 0;
    }
    link = &type;
    while (*link != 0 && (*link)->kind == 8) {
        link = &(*link)->next;
    }
    array->next = *link;
    *link = array;
    return type;
}
