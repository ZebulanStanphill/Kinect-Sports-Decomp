extern "C" long _InterlockedDecrement(long volatile *addend);

/* Reference-counted object: the count sits at +0x9c and the virtual destructor in vtable slot 7. */
class Obj_82F8DFB0 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual ~Obj_82F8DFB0();

    char pad[0x98];
    long refs;
};

extern "C" void fn_82F8DFB0(Obj_82F8DFB0 *self, int arg)
{
    long n = _InterlockedDecrement(&self->refs);
    if (n == 0) {
        delete self;
    }
}
