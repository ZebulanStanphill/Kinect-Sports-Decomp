class Writer_82CEE238 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int write(const void *buf, int nbytes);
};
struct Ostream_82CEE238 {
    int pad[2];
    Writer_82CEE238 *writer;
};
struct StringBuf_82CEE238 {
    const char *data;
    int size;
};

extern "C" Ostream_82CEE238 *fn_82CEE238(Ostream_82CEE238 *self, const StringBuf_82CEE238 *s)
{
    if ((int)s->data != 0) {
        self->writer->write(s->data, s->size - 1);
    } else {
        self->writer->write("(null)", 6);
    }
    return self;
}
