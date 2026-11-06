typedef struct StrData_8272C8F8 { int pad[2]; int refs; } StrData_8272C8F8;
typedef struct Str_8272C8F8 { StrData_8272C8F8 *data; } Str_8272C8F8;
typedef struct Value_8272C8F8 { unsigned char type; char pad[15]; } Value_8272C8F8;

typedef struct Iface_8272C8F8 Iface_8272C8F8;
typedef struct IfaceVt_8272C8F8 {
    void *s[11];
    unsigned char (*get)(Iface_8272C8F8 *self, void *ctx, Str_8272C8F8 *name, Value_8272C8F8 *out);
} IfaceVt_8272C8F8;
struct Iface_8272C8F8 { IfaceVt_8272C8F8 *vt; };
typedef struct Target_8272C8F8 { int pad[4]; Iface_8272C8F8 iface; } Target_8272C8F8;

typedef struct Movie_8272C8F8 { char pad[0x78]; char *root; } Movie_8272C8F8;
typedef struct Node_8272C8F8 { char pad[0x68]; unsigned short flags; } Node_8272C8F8;
typedef struct Ref_8272C8F8 { char pad[0x114]; int node; } Ref_8272C8F8;
typedef struct Def_8272C8F8 { char pad[0x50]; unsigned short flags; } Def_8272C8F8;

typedef struct Obj_8272C8F8 Obj_8272C8F8;
typedef struct ObjVt_8272C8F8 {
    void *s0[2];
    unsigned char (*isActive)(Obj_8272C8F8 *self);
    void *s3[19];
    Movie_8272C8F8 *(*getMovie)(Obj_8272C8F8 *self);
} ObjVt_8272C8F8;
struct Obj_8272C8F8 {
    ObjVt_8272C8F8 *vt;
    char pad[0x68];
    Target_8272C8F8 *target;
    char pad2[0x1c];
    unsigned int flags;
    char pad3[0xc];
    Def_8272C8F8 *def;
    Ref_8272C8F8 *ref;
};

extern void fn_82681728(Str_8272C8F8 *s, char *base, const char *name);
extern void fn_826944C8(StrData_8272C8F8 *d);
extern unsigned char fn_82695608(Value_8272C8F8 *v, Movie_8272C8F8 *m);
extern void fn_82696330(Value_8272C8F8 *v);

unsigned char fn_8272C8F8(Obj_8272C8F8 *o)
{
    unsigned char hidden;
    unsigned char bad;
    if (o->vt->isActive(o)) {
        if (o->ref->node != 0) {
            hidden = ((Node_8272C8F8 *)o->ref->node)->flags & 1;
        } else {
            hidden = (o->def->flags >> 3) & 1;
        }
        if (!hidden) {
            if ((o->flags & 0x60) == 0) {
                Target_8272C8F8 *t = o->target;
                if (t != 0) {
                    Value_8272C8F8 v;
                    Str_8272C8F8 s;
                    Movie_8272C8F8 *m;
                    unsigned char ok;
                    unsigned char empty;
                    v.type = 0;
                    m = o->vt->getMovie(o);
                    fn_82681728(&s, m->root + 0x254, "tabEnabled");
                    ok = t->iface.vt->get(&t->iface, &m->root, &s, &v);
                    {
                        StrData_8272C8F8 *d = s.data;
                        if (--d->refs == 0) {
                            fn_826944C8(d);
                        }
                    }
                    if (ok) {
                        if (v.type == 0 || v.type == 0xa) {
                            empty = 1;
                        } else {
                            empty = 0;
                        }
                        if (!empty) {
                            unsigned char r = fn_82695608(&v, m);
                            fn_82696330(&v);
                            return r;
                        }
                    }
                    fn_82696330(&v);
                }
            }
            if ((o->flags & 0x60) != 0 && (o->flags & 0x60) != 0x60) {
                bad = 1;
            } else {
                bad = 0;
            }
            return !bad;
        }
    }
    return 0;
}
