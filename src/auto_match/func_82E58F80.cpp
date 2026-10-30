extern "C" void *lbl_82154D18[];

class IStream_82E58F80 {
public:
    virtual void v0();
    virtual void AddRef();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int GetSize(int a, unsigned int *out);
};

struct Obj_82E58F80 {
    void **vt;
    int f4;
    unsigned int f8;
    unsigned int fc;
    IStream_82E58F80 *stream;
    unsigned int off;
};

extern "C" Obj_82E58F80 *fn_82E58F80(Obj_82E58F80 *self, IStream_82E58F80 *stream, unsigned int off, int *result)
{
    int hr;
    unsigned int size;
    self->stream = stream;
    self->off = off;
    self->f8 = 0;
    self->vt = lbl_82154D18;
    self->f4 = 1;
    self->fc = 0;
    stream->AddRef();
    size = 0;
    hr = self->stream->GetSize(0, &size);
    if (hr < 0 || self->off > size) {
        self->fc = 0;
        self->f8 = 0;
        if (self->off > size) {
            hr = -0x7ff8ffa9;
        }
    } else {
        unsigned int d = size - self->off;
        self->fc = d;
        self->f8 = d;
    }
    if (result != 0) {
        *result = hr;
    }
    return self;
}
