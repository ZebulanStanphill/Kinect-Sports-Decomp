typedef struct Obj_828D8D98 { char pad0[0x18]; int f18; char pad1c[0x50]; int f6c; char pad70[0x10]; int f80; int f84; } Obj_828D8D98;
extern int fn_828D8C08(int a, int b, int c, int d);
int fn_828D8D98(Obj_828D8D98 *o){ int b = o->f18;
    int a = o->f6c;
 return fn_828D8C08(a, b, o->f80, o->f84); }
