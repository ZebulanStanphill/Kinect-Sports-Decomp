class File_82E6E8B0 {
public:
    virtual void f00();
    virtual void f04();
    virtual void f08();
    virtual void f0c();
    virtual void f10();
    virtual void f14();
    virtual void f18();
    virtual int Seek(unsigned __int64 offset);                                  /* 0x1c */
    virtual void f20();
    virtual void f24();
    virtual void f28();
    virtual void f2c();
    virtual int Read(void *buffer, unsigned int size, unsigned int *got);       /* 0x30 */
};

struct Stream_82E6E8B0;

struct StreamVt_82E6E8B0 {
    char pad0[0x10];
    int (*getSize)(Stream_82E6E8B0 *self, unsigned __int64 *size);  /* 0x10 */
};

struct Stream_82E6E8B0 {
    StreamVt_82E6E8B0 *vt;
    int pad4;
    File_82E6E8B0 *file;        /* 0x08 */
    int padc;
    unsigned __int64 base;      /* 0x10 */
    int pad18[4];
    unsigned int bufferSize;    /* 0x28 */
    int pad2c;
    unsigned __int64 pos;       /* 0x30 */
    void *buffer;               /* 0x38 */
    int loaded;                 /* 0x3c */
};

extern "C" int fn_82E6E8B0(Stream_82E6E8B0 *o)
{
    unsigned __int64 size;
    unsigned __int64 pos;
    unsigned int n;
    unsigned int got;
    int hr;

    if (o->buffer == 0)
        return 0;
    if (o->file == 0)
        return 0xc00d36bb;
    size = 0;
    hr = o->vt->getSize(o, &size);
    if (hr < 0)
        return hr;
    n = o->bufferSize;
    pos = o->pos;
    if (n + pos > size)
        n = (unsigned int)size - (unsigned int)pos;
    hr = o->file->Seek(o->base + pos);
    if (hr < 0)
        return hr;
    got = 0;
    hr = o->file->Read(o->buffer, n, &got);
    if (hr < 0)
        return hr;
    if (got != n)
        return 0xc00d36bb;
    o->loaded = 1;
    return hr;
}
