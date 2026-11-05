typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

struct Getter_82252938 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void Get(int ctx, void *out);
};
struct Sink_82252938 {
    virtual void v0();
    virtual void Put(unsigned char a, int b, int c, __vector4 v);
};
struct Obj_82252938 {
    char pad[0x68];
    Getter_82252938 *g68;
    char pad6c[4];
    Getter_82252938 *g70;
    char pad74[4];
    Getter_82252938 *g78;
    char pad7c[4];
    Getter_82252938 *g80;
};
struct Dst_82252938 { char pad[0x10]; Sink_82252938 *sink; };

extern "C" void fn_82252938(Obj_82252938 *o, int ctx, Dst_82252938 *d)
{
    struct { unsigned char a; int c; int b; __vector4 v; } L;
    o->g68->Get(ctx, &L.a);
    o->g70->Get(ctx, &L.b);
    o->g78->Get(ctx, &L.c);
    o->g80->Get(ctx, &L.v);
    if (d->sink != 0) d->sink->Put(L.a, L.b, L.c, L.v);
}
