typedef struct Rep_827177B8 { int a; int b; int refs; } Rep_827177B8;
typedef struct Name_827177B8 { Rep_827177B8 *rep; } Name_827177B8;
typedef struct Value_827177B8 { unsigned char type; unsigned char pad[0xf]; } Value_827177B8;
typedef struct Path_827177B8 { char *base; } Path_827177B8;
typedef struct Ctx_827177B8 { char pad[0x78]; Path_827177B8 path; } Ctx_827177B8;
struct Iface_827177B8;
typedef struct IfaceVt_827177B8 {
    void *s[11];
    unsigned char (*get)(struct Iface_827177B8 *, Path_827177B8 *, Name_827177B8 *, Value_827177B8 *);
} IfaceVt_827177B8;
typedef struct Iface_827177B8 { IfaceVt_827177B8 *vt; } Iface_827177B8;
typedef struct Store_827177B8 { char pad[0x10]; Iface_827177B8 iface; } Store_827177B8;
struct Widget_827177B8;
typedef struct WidgetVt_827177B8 {
    void *s0, *s1;
    unsigned char (*isActive)(struct Widget_827177B8 *);
    void *s3[19];
    Ctx_827177B8 *(*getCtx)(struct Widget_827177B8 *);
} WidgetVt_827177B8;
typedef struct Widget_827177B8 {
    WidgetVt_827177B8 *vt; char pad[0x68]; Store_827177B8 *store; char pad70[0x1c]; unsigned int flags;
} Widget_827177B8;
extern void fn_82681728(Name_827177B8 *, char *, const char *);
extern void fn_826944C8(Rep_827177B8 *);
extern unsigned char fn_82695608(Value_827177B8 *, Ctx_827177B8 *);
extern void fn_82696330(Value_827177B8 *);

static __forceinline unsigned char isEmpty(Value_827177B8 *v)
{
    return v->type == 0 || v->type == 10;
}

unsigned char fn_827177B8(Widget_827177B8 *w)
{
    if (!w->vt->isActive(w))
        return 0;
    if ((w->flags & 0x60) == 0) {
        Store_827177B8 *st = w->store;
        if (st != 0) {
            Value_827177B8 v;
            Name_827177B8 n;
            Ctx_827177B8 *c;
            unsigned char ok;
            v.type = 0;
            c = w->vt->getCtx(w);
            fn_82681728(&n, c->path.base + 0x254, "tabEnabled");
            ok = st->iface.vt->get(&st->iface, &c->path, &n, &v);
            {
                Rep_827177B8 *rep = n.rep;
                if (--rep->refs == 0)
                    fn_826944C8(rep);
            }
            if (ok && !isEmpty(&v)) {
                unsigned char r = fn_82695608(&v, c);
                fn_82696330(&v);
                return r;
            }
            fn_82696330(&v);
        }
        return 1;
    }
    return (w->flags & 0x60) == 0x60;
}
