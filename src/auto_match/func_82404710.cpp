// Creates a ref-counted object, hands it to the device (virtual calls) and
// registers it with the owner.
struct Obj_82404710;
struct Pair_82404710 {
    Obj_82404710 *first;
    void *second;
};

class Dev_82404710 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void f10(Obj_82404710 *, float *);
    virtual void f14(Obj_82404710 *, float *);
};

class Cb_82404710 {
public:
    virtual void v0();
    virtual void f4(float);
};

struct Self_82404710 {
    char pad0[0x48];
    Cb_82404710 *m48;
    char pad4c[0x68 - 0x4c];
    Dev_82404710 *m68;
};

extern "C" {
void *fn_8265C9E0(int);
Obj_82404710 *fn_822D7FE0(void *);
void fn_822D79D8(Pair_82404710 *, Obj_82404710 *);
void fn_828E9D90(Obj_82404710 *);
void fn_828E9D40(Obj_82404710 *);
void fn_828E2B28(Self_82404710 *, Pair_82404710 *);
void fn_822315A0(void *);

void fn_82404710(Self_82404710 *o, float f)
{
    Pair_82404710 pr;
    float out;
    void *mem;
    Obj_82404710 *obj;

    mem = fn_8265C9E0(0x28);
    if (mem != 0) {
        obj = fn_822D7FE0(mem);
    } else {
        obj = 0;
    }
    pr.first = 0;
    pr.second = 0;
    fn_822D79D8(&pr, obj);
    o->m68->f10(pr.first, &f);
    if (o->m48 != 0) {
        fn_828E9D90(pr.first);
        fn_828E9D40(pr.first);
        o->m68->f14(pr.first, &out);
        if (o->m48 != 0) {
            o->m48->f4(out);
        }
    }
    fn_828E2B28(o, &pr);
    if (pr.second != 0) {
        fn_822315A0(pr.second);
    }
}
}
