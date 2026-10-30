struct Target_8300F3D0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10(unsigned *out);
    unsigned pad[4];
    unsigned flags;
    int Kind() { return flags >> 8; }
};
struct Holder_8300F3D0 {
    int pad[2];
    Target_8300F3D0 *t;
};
extern "C" {
unsigned char fn_83032FE8(Target_8300F3D0 *);
void fn_8300F3D0(void *unused, Holder_8300F3D0 *h, int mode)
{
    unsigned buf[18];
    buf[0] = 0;
    int k = h->t->Kind();
    if (k == 0x4011 || (k == 0x5011 && (fn_83032FE8(h->t) != 0 || mode == 0xd))) {
        h->t->v10(buf);
    }
}
}
