typedef struct Location_82934540 {
    int kind;                 /* 0x00 */
    int line;                 /* 0x04 */
    const char *name;         /* 0x08 */
    int column;               /* 0x0c */
    unsigned __int64 f10;     /* 0x10 */
    unsigned __int64 f18;     /* 0x18 */
} Location_82934540;

typedef struct Type_82934540 {
    int f0;
    int cls;                  /* 0x04 */
    int f8;
    int fc;
    int base;                 /* 0x10 */
    int rows;                 /* 0x14 */
    int f18;
    int f1c;
    unsigned int cols;        /* 0x20 */
} Type_82934540;

typedef struct Symbol_82934540 {
    char pad0[0x30];
    Type_82934540 *type;      /* 0x30 */
} Symbol_82934540;

typedef struct Compiler_82934540 {
    char pad0[4];
    char *state;              /* 0x04 */
} Compiler_82934540;

typedef struct Context_82934540 {
    Compiler_82934540 *compiler;
    int scope;
} Context_82934540;

extern char lbl_8202C724[];
extern char lbl_8202C728[];
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_829873C0(Compiler_82934540 *, int, Location_82934540 *, int, int, int, int, Symbol_82934540 **, int);
extern int fn_82934408(Type_82934540 *, unsigned int *, int);
extern void fn_828FA8D8(void *log, Location_82934540 *loc, int code, const char *fmt, ...);

int fn_82934540(Context_82934540 *ctx, Location_82934540 *loc, const char *name, unsigned int *count)
{
    Location_82934540 key;
    Symbol_82934540 *sym;
    int hr;

    key = *loc;
    key.kind = 10;
    key.name = name + 2;
    if (fn_829873C0(ctx->compiler, 1, &key, 0, 0, ctx->scope, 2, &sym, 0) != 0) {
        *count = 0;
        return 0;
    }
    hr = fn_82934408(sym->type, count, 0);
    if (hr < 0) {
        return hr;
    }
    if (memcmp(name, lbl_8202C724, 2) == 0) {
        if (*count == 1 && sym->type->cls == 9 && sym->type->base == 0 && sym->type->rows == 0) {
            return 0;
        }
        fn_828FA8D8(ctx->compiler->state + 0x18, loc, 0xb54,
                    "boolean constant register '%s' must be defined as a variable of type bool only", name);
        return 0x80004005;
    }
    if (memcmp(name, lbl_8202C728, 2) == 0) {
        if (*count == 1 && sym->type->cls == 9 && sym->type->base == 1 && sym->type->rows == 5 && sym->type->cols >= 3) {
            return 0;
        }
        fn_828FA8D8(ctx->compiler->state + 0x18, loc, 0xb55,
                    "integer constant register '%s' must be defined as a variable of type int3 or int4 only", name);
        return 0x80004005;
    }
    return 0;
}
