typedef struct Value_827465C0 {
    unsigned char type; /* 0x0 */
    char pad1[0xf];
} Value_827465C0;

typedef struct Env_827465C0 {
    char pad0[0x78];
    char context[4]; /* 0x78 */
} Env_827465C0;

typedef struct FnCall_827465C0 {
    int pad0;
    unsigned char *result; /* 0x04 */
    char *thisPtr;         /* 0x08 */
    char pad0C[0xc];
    Env_827465C0 *env; /* 0x18 */
} FnCall_827465C0;

extern const double lbl_82005710;

extern unsigned char fn_82695468(FnCall_827465C0 *fn, int kind);
extern void fn_826954C0(FnCall_827465C0 *fn, const char *name, int a, int b);
extern void fn_827450A8(char *rectangle, void *context, Value_827465C0 *properties);
extern double fn_826972E0(Value_827465C0 *value, Env_827465C0 *env);
extern void fn_826959C8(unsigned char *value);
extern void fn_82696330(Value_827465C0 *value);

static __forceinline unsigned char IsNaN_827465C0(double d)
{
    unsigned __int64 b = *(unsigned __int64 *)&d;
    return (b & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL && (b & 0x000fffffffffffffULL) != 0;
}

void fn_827465C0(FnCall_827465C0 *fn)
{
    char *rectangle;
    Value_827465C0 properties[4];
    unsigned char empty;
    unsigned char *result;
    int i;

    if (fn_82695468(fn, 0x11) == 0) {
        fn_826954C0(fn, "Rectangle", 0, 0);
        return;
    }
    rectangle = fn->thisPtr ? fn->thisPtr - 0x10 : 0;
    for (i = 0; i < 4; i++) {
        properties[i].type = 0;
    }
    fn_827450A8(rectangle, fn->env->context, properties);
    if (IsNaN_827465C0(fn_826972E0(&properties[2], fn->env)) ||
        IsNaN_827465C0(fn_826972E0(&properties[3], fn->env))) {
        empty = 1;
    } else {
        double height;
        double width;
        fn_826972E0(&properties[0], fn->env);
        fn_826972E0(&properties[1], fn->env);
        height = fn_826972E0(&properties[3], fn->env);
        width = fn_826972E0(&properties[2], fn->env);
        empty = width <= lbl_82005710 || height <= lbl_82005710;
    }
    result = fn->result;
    fn_826959C8(result);
    result[4] = empty;
    result[0] = 2;
    {
        Value_827465C0 *value = properties + 4;
        for (i = 3; i >= 0; i--) {
            value--;
            fn_82696330(value);
        }
    }
}
