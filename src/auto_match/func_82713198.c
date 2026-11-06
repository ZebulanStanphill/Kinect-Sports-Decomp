typedef struct { char b[0x18]; } Str_82713198;
typedef struct Value_82713198 Value_82713198;
typedef struct {
    char pad[0x10];
    Str_82713198 *(*toString)(Str_82713198 *ret, Value_82713198 *v);
} ValueVt_82713198;
struct Value_82713198 { ValueVt_82713198 *vt; };
typedef struct {
    void *pad0;
    void *vm;
    char *top;
    char pad0c[0x18 - 0xc];
    void *locale;
} Ctx_82713198;

extern unsigned char fn_82695468(Ctx_82713198 *c, int type);
extern void fn_826954C0(Ctx_82713198 *c, const char *expected, int a, int b);
extern double fn_826972E0(Str_82713198 *s, void *locale);
extern void fn_82681898(void *vm, double d);
extern void fn_82696330(Str_82713198 *s);

void fn_82713198(Ctx_82713198 *c)
{
    Str_82713198 s;
    Value_82713198 *v;
    if (!fn_82695468(c, 9)) {
        fn_826954C0(c, "Number", 0, 0);
        return;
    }
    v = c->top != 0 ? (Value_82713198 *)(c->top - 0x10) : 0;
    fn_82681898(c->vm, fn_826972E0(v->vt->toString(&s, v), c->locale));
    fn_82696330(&s);
}
