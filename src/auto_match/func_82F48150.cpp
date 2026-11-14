struct Iface_82F48150 {
    virtual void f00(); virtual void f04(); virtual void f08(); virtual void f0c();
    virtual void f10(); virtual void f14(); virtual void f18(); virtual void f1c();
    virtual void f20(); virtual void f24(); virtual void f28(); virtual void f2c();
    virtual void f30(); virtual void f34();
    virtual int get(int a, int b, unsigned short *index);
};

struct Object_82F48150 {
    virtual void f00(); virtual void f04(); virtual void f08(); virtual void f0c();
    virtual void f10(); virtual void f14(); virtual void f18(); virtual void f1c();
    virtual void f20(); virtual void f24(); virtual void f28(); virtual void f2c();
    virtual void f30(); virtual void f34(); virtual void f38(); virtual void f3c();
    virtual void f40(); virtual void f44(); virtual void f48(); virtual void f4c();
    virtual int hasHeader();
    char pad04[0x10];
    Iface_82F48150 *iface;      /* 0x14 */
    unsigned short count;       /* 0x18 */
    char pad1a[2];
    unsigned int stride;        /* 0x1c */
    char pad20[4];
    unsigned int numRows;       /* 0x24 */
};

extern "C" int fn_82F48150(Object_82F48150 *o, unsigned int row, int a, int b, unsigned __int64 *out)
{
    int hr;
    if (!out)
        return 0x80070057;
    *out = 0;
    if (row >= o->numRows)
        return 0xc00d3a9d;
    unsigned short idx = 0;
    hr = o->iface->get(a, b, &idx);
    if (hr >= 0) {
        if (idx >= o->count)
            hr = 0x8000ffff;
        else {
            *out = (unsigned int)(o->stride * row + idx * 4);
            if (o->hasHeader())
                *out += 4;
        }
    }
    return hr;
}
