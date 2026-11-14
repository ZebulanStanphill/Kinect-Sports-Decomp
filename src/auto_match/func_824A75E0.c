typedef struct Res_824A75E0 Res_824A75E0;
struct Res_824A75E0 { void (**vt)(Res_824A75E0 *self); };

typedef struct Holder_824A75E0 {
    char pad0[0x34];
    Res_824A75E0 *res;
} Holder_824A75E0;

typedef struct Obj_824A75E0 {
    char pad0[0x3c];
    Holder_824A75E0 *holder;
} Obj_824A75E0;

extern unsigned char fn_82536358(Res_824A75E0 *r);
extern void fn_82536288(Res_824A75E0 **pr);

void fn_824A75E0(Obj_824A75E0 *o)
{
    Res_824A75E0 *r = o->holder->res;
    if (r != 0) {
        if (fn_82536358(r)) {
            r->vt[0](r);
            fn_82536288(&o->holder->res);
        }
        o->holder->res = 0;
    }
}
