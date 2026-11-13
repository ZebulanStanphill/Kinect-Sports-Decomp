class Writer_82CEE128 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int write(const void *buf, int nbytes);
};
struct Ostream_82CEE128 {
    int pad[2];
    Writer_82CEE128 *writer;
};
struct StringPtr_82CEE128 {
    unsigned int stringAndFlag;
};

extern "C" int fn_82CED310(const StringPtr_82CEE128 *s);

static __forceinline const char *CStr(const StringPtr_82CEE128 *s) { return (const char *)(s->stringAndFlag & ~1u); }
extern "C" Ostream_82CEE128 *fn_82CEE128(Ostream_82CEE128 *self, const StringPtr_82CEE128 *s)
{
    if (CStr(s) != 0) {
        const char *c = CStr(s);
        self->writer->write(c, fn_82CED310(s));
    } else {
        self->writer->write("(null)", 6);
    }
    return self;
}
