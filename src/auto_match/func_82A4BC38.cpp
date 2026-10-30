class Lock_82A4BC38 {
public:
    virtual void v0();
    virtual void v1();
    virtual void lock();
    virtual void v3();
    virtual void v4();
    virtual void unlock();
};

struct Obj_82A4BC38 {
    char pad[0x1c];
    Lock_82A4BC38 lk;
    char pad2[0x17c - 0x20];
    int mode;
};

extern "C" int fn_82A4B800(Obj_82A4BC38 *o, int a, int b);

extern "C" int fn_82A4BC38(Obj_82A4BC38 *o, int a, int b)
{
    int r;
    o->lk.lock();
    r = 0;
    if (o->mode == 2) {
        r = fn_82A4B800(o, a, b);
    }
    o->lk.unlock();
    return r;
}
