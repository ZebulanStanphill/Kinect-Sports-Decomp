typedef struct Buf_82F01808 {
    char pad0[0x40];
    int f40;
    char pad44[0x14];
    int f58;
    char pad5c[0x14];
    int f70;
} Buf_82F01808;

typedef struct Obj_82F01808 {
    char pad0[0x300];
    Buf_82F01808 *f300;
    Buf_82F01808 *f304;
    char pad308[0x574 - 0x308];
    int f574;
    int f578;
    char pad57c[0x4a94 - 0x57c];
    int f4a94;
    int f4a98;
    int f4a9c;
} Obj_82F01808;

void fn_82F00330(Obj_82F01808 *o);

void fn_82F01808(Obj_82F01808 *o)
{
    Buf_82F01808 *t = o->f304;
    o->f304 = o->f300;
    o->f300 = t;
    o->f4a94 = o->f304->f40 + o->f574;
    o->f4a98 = o->f304->f58 + o->f578;
    o->f4a9c = o->f304->f70 + o->f578;
    fn_82F00330(o);
}
