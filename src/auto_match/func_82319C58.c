typedef struct Msg { int v[4]; int flag; } Msg;
typedef struct Inner { char pad[0x578]; int x578; } Inner;
typedef struct Mid { char pad[0x1e8]; Inner *inner; } Mid;
typedef struct Obj { char pad[0xc]; Mid *mid; } Obj;
extern void fn_823000E0(Inner *in, Msg *m);

void fn_82319C58(Obj *o)
{
    Mid *m = o->mid;
    Msg msg;
    msg.flag = 0;
    m->inner->x578 = 0;
    fn_823000E0(m->inner, &msg);
}
