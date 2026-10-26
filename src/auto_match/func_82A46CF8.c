typedef struct Sink Sink;
typedef struct {
    void *slot0;
    void *slot1;
    void (*onError)(Sink *self, int hr);
} SinkVtbl;
struct Sink {
    SinkVtbl *vtbl;
};

typedef struct {
    int pad;
    Sink sink;
} Listener;

extern void fn_82A432C8(char *self, int a, int b);
extern int fn_82A46718(char *base, unsigned int arg);

void fn_82A46CF8(char *self, int unused, unsigned int arg)
{
    int hr;
    Listener *l;

    fn_82A432C8(self, 0, 0);
    if (arg != 0) {
        hr = fn_82A46718(self - 0x8c, arg);
        if (hr < 0) {
            l = *(Listener **)(self - 0x58);
            l->sink.vtbl->onError(&l->sink, hr);
        }
    }
}
