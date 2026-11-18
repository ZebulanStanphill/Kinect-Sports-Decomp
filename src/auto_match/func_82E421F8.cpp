typedef struct Stream_82E421F8 Stream_82E421F8;
typedef struct Listener_82E421F8 Listener_82E421F8;

typedef struct StreamVt_82E421F8 {
    char pad0[0x8c];
    int (*GetTime)(Stream_82E421F8 *self, __int64 *time); /* 0x8c */
    char pad90[0x24];
    int (*GetFlags)(Stream_82E421F8 *self, unsigned int *flags); /* 0xb4 */
} StreamVt_82E421F8;

struct Stream_82E421F8 {
    StreamVt_82E421F8 *vt;
};

class Handler_82E421F8
{
  public:
    virtual void Unknown00();
    virtual unsigned int GetSize(Stream_82E421F8 *stream);                                      /* 0x04 */
    virtual int Process(Stream_82E421F8 *stream, void *arg, void *buffer, unsigned int *count); /* 0x08 */
};

typedef struct ListenerVt_82E421F8 {
    void *pad0[3];
    void (*Notify)(Listener_82E421F8 *self, int failed, int arg); /* 0x0c */
} ListenerVt_82E421F8;

struct Listener_82E421F8 {
    ListenerVt_82E421F8 *vt;
};

typedef struct Stats_82E421F8 {
    int succeeded; /* 0x00 */
    int failed;    /* 0x04 */
} Stats_82E421F8;

typedef struct Self_82E421F8 {
    char pad0[0x6c];
    Handler_82E421F8 *handlers[0x80]; /* 0x06c */
    char pad26c[0x44];
    Stats_82E421F8 *stats[0x80]; /* 0x2b0 */
    void *queue;                 /* 0x4b0 */
    char pad4b4[0xe0];
    unsigned int busy; /* 0x594 */
    int pad598[2];
    void *buffer; /* 0x5a0 */
    char pad5a4[0x1c];
    Listener_82E421F8 *listener; /* 0x5c0 */
} Self_82E421F8;

extern "C" int fn_82E41F18(Self_82E421F8 *self, unsigned int size);
extern "C" int fn_82E74A28(void *queue, void *buffer, unsigned int count);

extern "C" int fn_82E421F8(Self_82E421F8 *self, unsigned short index, Stream_82E421F8 *stream, void *arg)
{
    Handler_82E421F8 *handler;
    unsigned int count;
    unsigned int flags;
    __int64 time;
    int hr;

    if (stream == 0) {
        return 0x80070057;
    }
    if (index > 0x7f || self->handlers[index] == 0) {
        return 0xc00d36b3;
    }
    time = 0x7fffffffffffffff;
    flags = 0;
    if (self->busy != 0) {
        hr = 0xc00d36b5;
    } else {
        stream->vt->GetTime(stream, &time);
        stream->vt->GetFlags(stream, &flags);
        handler = self->handlers[index];
        hr = fn_82E41F18(self, handler->GetSize(stream));
        if (hr >= 0) {
            count = 0;
            hr = handler->Process(stream, arg, self->buffer, &count);
            if (hr >= 0) {
                if (count != 0) {
                    hr = fn_82E74A28(self->queue, self->buffer, count);
                }
                self->stats[index]->succeeded++;
                if (self->listener != 0) {
                    self->listener->vt->Notify(self->listener, 0, 1);
                }
                return hr;
            }
        }
    }
    self->stats[index]->failed++;
    if (self->listener != 0) {
        self->listener->vt->Notify(self->listener, 1, 1);
    }
    return hr;
}
