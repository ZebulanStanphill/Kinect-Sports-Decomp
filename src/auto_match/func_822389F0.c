typedef struct Sub {
    char data[0x68];
} Sub;
typedef struct Obj {
    void *vtbl;
    char pad[0xe4 - 4];
    Sub s0;
    Sub s1;
    Sub s2;
    char last[0x350 - 0xc - 0x21c];
} Obj;
typedef struct Rep {
    void *vtbl;
    int uses;
    int weaks;
    Obj obj;
} Rep;
typedef struct SP {
    Obj *ptr;
    Rep *rep;
} SP;
extern void fn_822315A0(Rep *r);
extern void fn_82232CC8(Obj *o);
extern void fn_82233250(void *p);
extern unsigned char fn_8223AAC0(Rep *r);
extern void fn_8223B930(Sub *s);
extern void *fn_8265C9E0(int size);
extern char lbl_82196C48[];
extern char lbl_821AD588[];

SP *fn_822389F0(SP *out)
{
    Rep *rep = (Rep *)fn_8265C9E0(0x350);
    Obj *obj;
    if (rep != 0) {
        rep->uses = 1;
        rep->vtbl = lbl_821AD588;
        rep->weaks = 1;
        obj = &rep->obj;
        if (obj != 0) {
            fn_82232CC8(obj);
            obj->vtbl = lbl_82196C48;
            fn_8223B930(&obj->s0);
            fn_8223B930(&obj->s1);
            fn_8223B930(&obj->s2);
            fn_82233250(obj->last);
        }
    } else {
        rep = 0;
    }
    obj = &rep->obj;
    out->ptr = 0;
    out->rep = 0;
    if (rep != 0) {
        if (fn_8223AAC0(rep)) {
            if (out->rep != 0) {
                fn_822315A0(out->rep);
            }
            out->rep = rep;
            out->ptr = obj;
        }
        fn_822315A0(rep);
    }
    return out;
}
