class IStream_82E447C8
{
  public:
    virtual int QueryInterface(const void *iid, void **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
};

class ISource_82E447C8
{
  public:
    virtual int QueryInterface(const void *iid, void **out);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
    virtual void Slot03();
    virtual void Slot04();
    virtual void Slot05();
    virtual void Slot06();
    virtual void Slot07();
    virtual void Slot08();
    virtual void Slot09();
    virtual void Slot10();
    virtual void Slot11();
    virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14();
    virtual void Slot15();
    virtual void Slot16();
    virtual void Slot17();
    virtual void Slot18();
    virtual void Slot19();
    virtual void Slot20();
    virtual void Slot21();
    virtual void Slot22();
    virtual void Slot23();
    virtual void Slot24();
    virtual void Slot25();
    virtual void Slot26();
    virtual void Slot27();
    virtual void Slot28();
    virtual void Slot29();
    virtual void Slot30();
    virtual void Slot31();
    virtual void Slot32();
    virtual int GetStreamCount(unsigned int *count);                                       /* 0x84 */
    virtual int GetStreamNumber(unsigned int index, unsigned short *number, void *unused); /* 0x88 */
    virtual int GetStream(unsigned short number, IStream_82E447C8 **stream);               /* 0x8c */
};

struct Self_82E447C8 {
    char unknown00[0x78];
    ISource_82E447C8 *source; /* 0x78 */
};

extern "C" {
int fn_82E43B78(Self_82E447C8 *self);
int fn_82E43BE8(Self_82E447C8 *self);
int fn_82E43DC0(Self_82E447C8 *self);
int fn_82E5E390(ISource_82E447C8 *source);
int fn_82E5F3C0(ISource_82E447C8 *source);
int fn_82E447C8(Self_82E447C8 *self, ISource_82E447C8 *source);
}

static __forceinline int ReleaseOldStreams_82E447C8(Self_82E447C8 *self, ISource_82E447C8 *previous,
                                                    IStream_82E447C8 **stream)
{
    unsigned int count = 0;
    int hr = previous->GetStreamCount(&count);

    if (hr >= 0) {
        for (unsigned int i = 0; i < count; i++) {
            unsigned short number = 0;

            hr = previous->GetStreamNumber(i, &number, 0);
            if (hr < 0) {
                break;
            }
            if (self->source->GetStream(number, stream) < 0) {
                hr = 0;
            }
            if (*stream != 0) {
                (*stream)->Release();
                *stream = 0;
            }
        }
    }
    return hr;
}

int fn_82E447C8(Self_82E447C8 *self, ISource_82E447C8 *source)
{
    IStream_82E447C8 *stream;
    ISource_82E447C8 *previous;
    int hr;

    if (source == 0) {
        return 0x80070057;
    }
    stream = 0;
    previous = 0;
    if (fn_82E43B78(self) != 0) {
        hr = 0xC00D4650;
    } else {
        previous = self->source;
        self->source = source;
        source->AddRef();
        hr = fn_82E5F3C0(self->source);
        if (hr >= 0) {
            hr = fn_82E5E390(self->source);
            if (hr >= 0) {
                hr = fn_82E43BE8(self);
                if (hr >= 0) {
                    hr = fn_82E43DC0(self);
                    if (hr >= 0 && previous != 0) {
                        hr = ReleaseOldStreams_82E447C8(self, previous, &stream);
                    }
                }
            }
        }
    }
    if (stream != 0) {
        stream->Release();
        stream = 0;
    }
    if (previous != 0) {
        previous->Release();
    }
    return hr;
}
