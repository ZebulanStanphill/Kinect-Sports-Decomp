typedef struct Value_826BA068 { unsigned char type; char pad[15]; } Value_826BA068;
typedef struct RefObj_826BA068 { int pad[2]; unsigned int rc; int pad2[2]; struct RefObj_826BA068 *scope; } RefObj_826BA068;
typedef struct StrData_826BA068 { int pad[2]; int refs; } StrData_826BA068;
typedef struct Str_826BA068 { StrData_826BA068 *data; } Str_826BA068;
typedef struct TryInfo_826BA068 { unsigned char *rec; int base; unsigned int depth; } TryInfo_826BA068;
typedef struct Frame_826BA068 { char pad[0xc]; int result; } Frame_826BA068;
typedef struct Env_826BA068 { int pad[2]; Frame_826BA068 *frame; } Env_826BA068;
typedef struct ScopeStack_826BA068 { RefObj_826BA068 **data; unsigned int count; } ScopeStack_826BA068;
typedef struct Ctx_826BA068 {
    int pad0[2];
    Value_826BA068 *top;
    Value_826BA068 *pageBase;
    int pad10[3];
    int pages;
    char pad20[0x90];
    Value_826BA068 exc;
    char padc0[6];
    unsigned char flagsC6;
    char padc7;
    ScopeStack_826BA068 scopes;
} Ctx_826BA068;

extern void fn_826ADE00(TryInfo_826BA068 *info, Ctx_826BA068 *c);
extern void fn_82683270(void *stack, unsigned int n);
extern void *fn_826A9878(Ctx_826BA068 *c, int reg);
extern void fn_82695FA0(void *dst, Value_826BA068 *v);
extern RefObj_826BA068 *fn_826B1CC8(Ctx_826BA068 *c);
extern void fn_826824B0(RefObj_826BA068 *o);
extern void *fn_826A7AD0(Str_826BA068 *s, TryInfo_826BA068 *info, Ctx_826BA068 *c);
extern void fn_826B35F0(Ctx_826BA068 *c, void *name, Value_826BA068 *v);
extern void fn_826944C8(StrData_826BA068 *d);
extern void fn_826959C8(Value_826BA068 *v);
extern void fn_826B55A0(Env_826BA068 *env, Ctx_826BA068 *c, int start, int len, int a, int b, int d);
extern void fn_826B0AD8(ScopeStack_826BA068 *s, unsigned int n);
extern void fn_82696330(Value_826BA068 *v);

static __forceinline void addref_826BA068(RefObj_826BA068 *o)
{
    if (o != 0) {
        o->rc = (o->rc + 1) & 0x8fffffff;
    }
}

static __forceinline void release_826BA068(RefObj_826BA068 *o)
{
    if (o != 0) {
        fn_826824B0(o);
    }
}

static __forceinline void assign_826BA068(RefObj_826BA068 **slot, RefObj_826BA068 *v)
{
    release_826BA068(*slot);
    *slot = v;
}

#define U16_826BA068(p, i) (((p)[(i) + 1] << 8) | (p)[i])

int fn_826BA068(Ctx_826BA068 *c, Env_826BA068 *env, int ret, int *count, int a, int b, int d)
{
    Value_826BA068 *exc = &c->exc;
    for (;;) {
        unsigned char done = 0;
        if (exc->type != 10) {
            int n;
            for (n = *count; n > 0; n--) {
                TryInfo_826BA068 info;
                Value_826BA068 v;
                unsigned char *rec;
                int base;
                unsigned int sz;
                if (done) {
                    break;
                }
                fn_826ADE00(&info, c);
                (*count)--;
                sz = (c->top - c->pageBase) + (c->pages - 1) * 32;
                if (sz > info.depth) {
                    fn_82683270(&c->top, sz - info.depth);
                }
                rec = info.rec;
                base = info.base;
                if (rec[0] & 1) {
                    unsigned int depth = 0;
                    if (rec[0] & 4) {
                        fn_82695FA0(fn_826A9878(c, rec[7]), exc);
                    } else {
                        RefObj_826BA068 *scope;
                        RefObj_826BA068 *o;
                        Str_826BA068 s;
                        depth = c->scopes.count;
                        if (depth != 0) {
                            scope = c->scopes.data[depth - 1];
                        } else {
                            scope = 0;
                        }
                        addref_826BA068(scope);
                        o = fn_826B1CC8(c);
                        addref_826BA068(o);
                        addref_826BA068(scope);
                        assign_826BA068(&o->scope, scope);
                        fn_826B35F0(c, fn_826A7AD0(&s, &info, c), exc);
                        {
                            StrData_826BA068 *sd = s.data;
                            if (--sd->refs == 0) {
                                fn_826944C8(sd);
                            }
                        }
                        release_826BA068(o);
                        release_826BA068(scope);
                    }
                    fn_826959C8(exc);
                    exc->type = 10;
                    c->flagsC6 &= 0x7f;
                    fn_826B55A0(env, c, U16_826BA068(rec, 1) + base, U16_826BA068(rec, 3), a, b, d);
                    done = 1;
                    ret = U16_826BA068(rec, 5) + U16_826BA068(rec, 1) + U16_826BA068(rec, 3) + base;
                    if (rec[0] & 4) {
                        v.type = 0;
                        fn_82695FA0(fn_826A9878(c, ((rec[0] & 1) && (rec[0] & 4)) ? rec[7] : -1), &v);
                        fn_82696330(&v);
                    } else {
                        fn_826B0AD8(&c->scopes, depth);
                    }
                }
                if (rec[0] & 2) {
                    int start = U16_826BA068(rec, 3) + U16_826BA068(rec, 1) + base;
                    c->flagsC6 |= 0x80;
                    fn_826B55A0(env, c, start, U16_826BA068(rec, 5), a, b, d);
                    c->flagsC6 &= 0x7f;
                }
            }
            if (!done) {
                return env->frame->result;
            }
        }
        if (!done) {
            return ret;
        }
    }
}
