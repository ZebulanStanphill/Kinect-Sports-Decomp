typedef struct { char pad[0x20]; int v; } Inner_8304EE50;
typedef struct { char pad[0x50]; int h; char pad2[0x18]; Inner_8304EE50 *inner; } Obj_8304EE50;
typedef struct { int a; float f; int b; int c; } Msg_8304EE50;
extern int lbl_83264308;
extern void fn_83013E80(int ctx, int h, Msg_8304EE50 *m, int r);

void fn_8304EE50(int r, Obj_8304EE50 *o, float f, int a, int b)
{
    Msg_8304EE50 m;
    m.c = o->inner->v;
    m.a = a;
    m.f = f;
    m.b = b;
    fn_83013E80(lbl_83264308, o->h, &m, r);
}
