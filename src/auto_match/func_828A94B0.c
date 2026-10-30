typedef struct {
    unsigned __int64 val;
    unsigned int ptr;
    unsigned char c;
    unsigned char d;
    unsigned char e;
} Arg_828A94B0;
typedef struct { char pad0[0x60]; char sub[0x2c]; unsigned int h; } Obj_828A94B0;
extern void fn_828AC5E0();
extern void fn_828ED218();
extern void fn_828ED288();
extern void fn_828ED2F8();
extern void fn_828ED350();

void fn_828A94B0(Obj_828A94B0 *o, Arg_828A94B0 *a)
{
    unsigned int h = o->h;
    if (a->d) {
        if (a->c)
            fn_828ED218(h, a->ptr, a->e);
        else
            fn_828ED288(h, a->val, a->e);
    } else {
        if (a->c)
            fn_828ED2F8(h, a->ptr);
        else
            fn_828ED350(h, a->val);
    }
    fn_828AC5E0(o->sub, a->d, a->c, a->e);
}
