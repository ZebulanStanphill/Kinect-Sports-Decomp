typedef struct Unknown_82EE8420 Unknown_82EE8420;
typedef struct UnknownVtbl_82EE8420 {
    long (*QueryInterface)(Unknown_82EE8420 *self, const void *iid, void **out);
    unsigned long (*AddRef)(Unknown_82EE8420 *self);
    unsigned long (*Release)(Unknown_82EE8420 *self);
} UnknownVtbl_82EE8420;
struct Unknown_82EE8420 {
    UnknownVtbl_82EE8420 *vt;
};

typedef struct Worker_82EE8420 {
    char pad0[0x10];
    int thread;
    char pad14[0x24 - 0x14];
    char lock[0x60 - 0x24];
    Unknown_82EE8420 *callback;
    int savedPriority;
    int boostPriority;
} Worker_82EE8420;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern int fn_82A1E3B8(int thread);
extern int fn_82A1E338(int thread, int priority);

long fn_82EE8420(Worker_82EE8420 *self, int boost, Unknown_82EE8420 *callback)
{
    long hr = 0;

    fn_82E50CB8(self->lock);
    if (self->thread == -1)
        goto fail;
    if (boost != 0) {
        if (self->savedPriority == -1)
        self->savedPriority = fn_82A1E3B8(self->thread);
        if (self->boostPriority != -1)
        fn_82A1E338(self->thread, self->boostPriority);
    } else {
        fn_82A1E338(self->thread, self->savedPriority);
        self->savedPriority = -1;
    }
    if (callback != 0) {
        if (self->callback != 0)
            goto fail;
        self->callback = callback;
        callback->vt->AddRef(callback);
    }
    goto done;
fail:
    hr = 0x8000ffff;
done:
    fn_82E50F10(self->lock);
    return hr;
}
