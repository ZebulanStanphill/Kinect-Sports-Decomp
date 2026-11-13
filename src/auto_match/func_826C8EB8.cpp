extern "C" long _InterlockedExchangeAdd(long volatile *, long);
extern "C" void fn_8267BE38(void *p);

struct Str_826C8EB8 {
    unsigned int tagged;
};
extern "C" void fn_8268C750(Str_826C8EB8 *s, const Str_826C8EB8 *src);

struct Event_826C8EB8 {
    Str_826C8EB8 name;
    unsigned int value[4];
};

struct Listener_826C8EB8 {
    virtual void v0();
    virtual void v1();
    virtual void Handle(Event_826C8EB8 *e, int arg);
};

struct Owner_826C8EB8 {
    char pad0[0x14];
    Listener_826C8EB8 *listener;   /* 0x14 */
};

struct Self_826C8EB8 {
    char pad0[0x10];
    Owner_826C8EB8 *owner;         /* 0x10 */
};

extern "C" void fn_826C8EB8(Self_826C8EB8 *self, const Str_826C8EB8 *name, const unsigned int *value, int arg)
{
    Listener_826C8EB8 *listener;
    Event_826C8EB8 e;
    unsigned int w0, w1, w2, w3;
    unsigned int obj;
    long n;

    listener = self->owner->listener;
    if ((int)listener != 0) {
        w3 = value[3];
        w2 = value[2];
        w1 = value[1];
        w0 = value[0];
        fn_8268C750(&e.name, name);
        e.value[0] = w0;
        e.value[1] = w1;
        e.value[2] = w2;
        e.value[3] = w3;
        listener->Handle(&e, arg);
        obj = e.name.tagged & ~3u;
        n = _InterlockedExchangeAdd((long *)(obj + 4), -1);
        if (n - 1 == 0) fn_8267BE38((void *)obj);
    }
}
