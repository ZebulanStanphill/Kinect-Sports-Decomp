typedef struct Unknown_82EEAAE8 Unknown_82EEAAE8;

typedef struct UnknownVtbl_82EEAAE8 {
    int (*QueryInterface)(Unknown_82EEAAE8 *self, void *iid, void **out);
    unsigned int (*AddRef)(Unknown_82EEAAE8 *self);
} UnknownVtbl_82EEAAE8;

struct Unknown_82EEAAE8 {
    UnknownVtbl_82EEAAE8 *vt;
};

typedef struct Queue_82EEAAE8 {
    char pad[0x64];
    unsigned int state;
} Queue_82EEAAE8;

typedef struct Self_82EEAAE8 {
    char pad[0x4c];
    int shutdown;
    Queue_82EEAAE8 *queue;
    char cs[0x1c];
    void *event;
} Self_82EEAAE8;

extern void fn_82A29A38(void);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82E3C770(Queue_82EEAAE8 *queue, Unknown_82EEAAE8 **item);
extern int fn_82A1E810(void *event);
extern int fn_82A1F470(void);

int fn_82EEAAE8(Self_82EEAAE8 *self, Unknown_82EEAAE8 *item)
{
    int hr;

    if (self->shutdown != 0) {
        fn_82A29A38();
        return 0xc00d3e85;
    }
    RtlEnterCriticalSection(self->cs);
    if (self->queue != 0) {
        hr = fn_82E3C770(self->queue, &item);
        if (hr < 0)
            goto done;
        item->vt->AddRef(item);
    } else {
        hr = 0x80004005;
    }
    if (hr >= 0 && self->queue->state == 1 && fn_82A1E810(self->event) == 0) {
        int err = fn_82A1F470();
        hr = err <= 0 ? err : ((err & 0xffff) | 0x80070000);
        if (hr >= 0)
            hr = 0x8000ffff;
    }
done:
    RtlLeaveCriticalSection(self->cs);
    return hr;
}
