class Stream_82E6F788
{
  public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual int Tell(unsigned int *);
    virtual int Read(unsigned int, unsigned __int64 *, int);
};

struct Owner_82E6F788 {
    char pad[0x30];
    unsigned __int64 base;
    char pad2[0x20];
    Stream_82E6F788 *stream;
};

extern "C" int fn_82E6F788(Owner_82E6F788 *self, unsigned __int64 size, unsigned __int64 *out)
{
    int hr;
    unsigned __int64 read;
    unsigned int pos;
    if (!out)
        return 0x80004003;
    *out = 0;
    if (size > 0xffffffffULL)
        return 0xc00d3a9d;
    read = 0;
    hr = self->stream->Read((unsigned int)size, &read, 0);
    if (hr < 0)
        return hr;
    pos = 0;
    hr = self->stream->Tell(&pos);
    if (hr < 0)
        return hr;
    *out = self->base + pos + read;
    return hr;
}
