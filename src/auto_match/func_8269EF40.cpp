// Member thunk-like function: locks a ref-counted node returned by a virtual
// of the object 0x68 bytes before this, forwards a virtual call to its
// sub-object, then releases the node.
class Iface_8269EF40 {
public:
    virtual void s00();
    virtual void s01();
    virtual void s02();
    virtual void s03();
    virtual void s04();
    virtual void s05();
    virtual void s06();
    virtual void s07();
    virtual void s08();
    virtual void s09();
    virtual void s0a();
    virtual void s0b();
    virtual void s0c();
    virtual void s0d();
    virtual void s0e();
    virtual void s0f();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual int f4c(int, int, int, int);
};

struct Node_8269EF40 {
    char pad0[8];
    unsigned rc;
    int pad0c;
    Iface_8269EF40 iface;
};

extern "C" void fn_826824B0(Node_8269EF40 *);
class Base_8269EF40 {
public:
    virtual void b00();
    virtual void b01();
    virtual void b02();
    virtual void b03();
    virtual void b04();
    virtual void b05();
    virtual void b06();
    virtual void b07();
    virtual void b08();
    virtual void b09();
    virtual void b0a();
    virtual void b0b();
    virtual void b0c();
    virtual void b0d();
    virtual void b0e();
    virtual void b0f();
    virtual void b10();
    virtual void b11();
    virtual void b12();
    virtual void b13();
    virtual void b14();
    virtual void b15();
    virtual void b16();
    virtual void b17();
    virtual void b18();
    virtual void b19();
    virtual void b1a();
    virtual void b1b();
    virtual void b1c();
    virtual void b1d();
    virtual void b1e();
    virtual void b1f();
    virtual void b20();
    virtual void b21();
    virtual void b22();
    virtual void b23();
    virtual void b24();
    virtual void b25();
    virtual void b26();
    virtual void b27();
    virtual void b28();
    virtual void b29();
    virtual void b2a();
    virtual void b2b();
    virtual void b2c();
    virtual void b2d();
    virtual void b2e();
    virtual void b2f();
    virtual void b30();
    virtual void b31();
    virtual void b32();
    virtual void b33();
    virtual void b34();
    virtual void b35();
    virtual void b36();
    virtual void b37();
    virtual void b38();
    virtual Node_8269EF40 *fe4();
};

extern "C" int fn_8269EF40(char *self, int a, int b, int c, int d)
{
    Base_8269EF40 *base = (Base_8269EF40 *)(self - 0x68);
    Node_8269EF40 *n;
    int r;

    n = base->fe4();
    if (n != 0) {
        Iface_8269EF40 *i;
        n->rc = (n->rc + 1) & 0x8fffffff;
        i = &n->iface;
        r = i->f4c(a, b, c, d);
    } else {
        r = 0;
    }
    if (n != 0) {
        fn_826824B0(n);
    }
    return r;
}
