extern "C" unsigned long __cdecl _byteswap_ulong(unsigned long);
class Stream_82E6F498 {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18();
    virtual long f1c();
    virtual void v20();
    virtual long Read(void *buf, unsigned int size, unsigned int *read);
};
struct Obj_82E6F498 { char pad[0x2c]; Stream_82E6F498 *stream; };

extern "C" long fn_82E6F498(Obj_82E6F498 *self, int unused, unsigned int *out)
{
    long hr;
    unsigned int n;
    if (out == 0)
        return 0x80004003;
    hr = self->stream->f1c();
    if (hr >= 0) {
        n = 0;
        hr = self->stream->Read(out, 4, &n);
        if (hr >= 0) {
            if (n != 4)
                hr = 0xc00d36bb;
            else
                *out = _byteswap_ulong(*out);
        }
    }
    return hr;
}
