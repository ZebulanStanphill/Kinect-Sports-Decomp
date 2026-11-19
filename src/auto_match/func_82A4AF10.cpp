struct Lock_82A4AF10 {
    virtual void v0();
    virtual void v1();
    virtual void lock();
    virtual void v3();
    virtual void v4();
    virtual void unlock();
};

// The base class the callee takes; it starts at 0x4, after the owner's vtable pointer.
struct Request_82A4AF10 {
    char unknown4[0x1c - 0x4];
};

struct Owner_82A4AF10 : Request_82A4AF10 {
    virtual void v0();

    Lock_82A4AF10 lock; /* 0x1c */
    char unknown20[0x44 - 0x20];
    int handle; /* 0x44 */
    int unknown48;
    int context; /* 0x4c */
};

extern "C" int fn_82A5B318(Request_82A4AF10 *, int, void *, int *, int, int, int, int, int, int,
                           Lock_82A4AF10 *, int);

extern "C" int fn_82A4AF10(Owner_82A4AF10 *self, int a, char *data, int b, int c, int d, int e, int f,
                           int *out)
{
    Lock_82A4AF10 *lock = &self->lock;
    int result;
    int value;

    lock->lock();
    void *adjusted = data ? data + 4 : 0;
    int context = self->context;
    int handle = self->handle;
    value = 0;
    result = fn_82A5B318(self, a, adjusted, &value, b, c, d, e, handle, context, lock, f);
    if (result >= 0) {
        *out = value;
    }
    lock->unlock();
    return result;
}
