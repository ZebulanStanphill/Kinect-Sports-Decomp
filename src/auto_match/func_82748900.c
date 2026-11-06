typedef struct Value_82748900 { unsigned char type; char pad[7]; double num; } Value_82748900;
typedef struct StrData_82748900 { const char *chars; int pad; int refs; } StrData_82748900;
typedef struct Str_82748900 { StrData_82748900 *data; } Str_82748900;
typedef struct StrBuf_82748900 { const char *data; unsigned int len; int pad[6]; } StrBuf_82748900;
typedef struct CT_82748900 {
    char pad[0x30];
    float redMul;
    float redOff;
    float greenMul;
    float greenOff;
    float blueMul;
    float blueOff;
    float alphaMul;
    float alphaOff;
} CT_82748900;
typedef struct Env_82748900 { char pad[0x78]; char *heap; } Env_82748900;
typedef struct Ctx_82748900 { int pad0; void *ret; char *self; int padc[3]; Env_82748900 *env; } Ctx_82748900;

extern unsigned char fn_82695468(Ctx_82748900 *c, int cls);
extern void fn_826954C0(Ctx_82748900 *c, const char *name, int a, int b);
extern void fn_82696D38(Str_82748900 *out, Value_82748900 *v, Env_82748900 *env, int radix, int f);
extern void fn_82696330(Value_82748900 *v);
extern void fn_8268AFB0(StrBuf_82748900 *sb, void *heap);
extern void fn_8268B1F0(StrBuf_82748900 *sb, const char *s, int n);
extern void fn_8268AFD8(StrBuf_82748900 *sb);
extern StrData_82748900 *fn_82694610(char *mgr, const char *s, unsigned int n);
extern void fn_82681838(void *ret, Str_82748900 *s);
extern void fn_826944C8(StrData_82748900 *d);
extern void *lbl_831E7E64;
extern char lbl_821C24F0[];
extern char lbl_82196582[];

void fn_82748900(Ctx_82748900 *c)
{
    CT_82748900 *ct;
    Str_82748900 strs[8];
    StrBuf_82748900 sb;
    Value_82748900 v0;
    Value_82748900 v1;
    Value_82748900 v2;
    Value_82748900 v3;
    Value_82748900 v4;
    Value_82748900 v5;
    Value_82748900 v6;
    Value_82748900 v7;
    const char *p;
    StrData_82748900 *res;
    int i;
    Str_82748900 *s;
    if (!fn_82695468(c, 0x12)) {
        fn_826954C0(c, "ColorTransform", 0, 0);
        return;
    }
    ct = c->self ? (CT_82748900 *)(c->self - 0x10) : 0;
    v0.num = ct->redMul; v0.type = 3; fn_82696D38(&strs[0], &v0, c->env, 6, 0); fn_82696330(&v0);
    v1.num = ct->greenMul; v1.type = 3; fn_82696D38(&strs[1], &v1, c->env, 6, 0); fn_82696330(&v1);
    v2.num = ct->blueMul; v2.type = 3; fn_82696D38(&strs[2], &v2, c->env, 6, 0); fn_82696330(&v2);
    v3.num = ct->alphaMul; v3.type = 3; fn_82696D38(&strs[3], &v3, c->env, 6, 0); fn_82696330(&v3);
    v4.num = ct->redOff; v4.type = 3; fn_82696D38(&strs[4], &v4, c->env, 6, 0); fn_82696330(&v4);
    v5.num = ct->greenOff; v5.type = 3; fn_82696D38(&strs[5], &v5, c->env, 6, 0); fn_82696330(&v5);
    v6.num = ct->blueOff; v6.type = 3; fn_82696D38(&strs[6], &v6, c->env, 6, 0); fn_82696330(&v6);
    v7.num = ct->alphaOff; v7.type = 3; fn_82696D38(&strs[7], &v7, c->env, 6, 0); fn_82696330(&v7);
    fn_8268AFB0(&sb, lbl_831E7E64);
    fn_8268B1F0(&sb, "(redMultiplier=", -1);
    fn_8268B1F0(&sb, strs[0].data->chars, -1);
    fn_8268B1F0(&sb, ", greenMultiplier=", -1);
    fn_8268B1F0(&sb, strs[1].data->chars, -1);
    fn_8268B1F0(&sb, ", blueMultiplier=", -1);
    fn_8268B1F0(&sb, strs[2].data->chars, -1);
    fn_8268B1F0(&sb, ", alphaMultiplier=", -1);
    fn_8268B1F0(&sb, strs[3].data->chars, -1);
    fn_8268B1F0(&sb, ", redOffset=", -1);
    fn_8268B1F0(&sb, strs[4].data->chars, -1);
    fn_8268B1F0(&sb, ", greenOffset=", -1);
    fn_8268B1F0(&sb, strs[5].data->chars, -1);
    fn_8268B1F0(&sb, ", blueOffset=", -1);
    fn_8268B1F0(&sb, strs[6].data->chars, -1);
    fn_8268B1F0(&sb, ", alphaOffset=", -1);
    fn_8268B1F0(&sb, strs[7].data->chars, -1);
    fn_8268B1F0(&sb, lbl_821C24F0, -1);
    p = sb.data ? sb.data : lbl_82196582;
    res = fn_82694610(c->env->heap + 0x254, p, sb.len);
    {
        Str_82748900 tmp;
        tmp.data = res;
        res->refs++;
        fn_82681838(c->ret, &tmp);
    }
    if (--res->refs == 0) {
        fn_826944C8(res);
    }
    fn_8268AFD8(&sb);
    s = &strs[8];
    i = 7;
    do {
        StrData_82748900 *d;
        s--;
        d = s->data;
        if (--d->refs == 0) {
            fn_826944C8(d);
        }
        i--;
    } while (i >= 0);
}
