extern long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Lockable_82A4B498 Lockable_82A4B498;
typedef struct LockableVtbl_82A4B498 {
    void *pad0[2];
    void (*lock)(Lockable_82A4B498 *self);          /* 0x08 */
    void *pad0c[2];
    void (*unlock)(Lockable_82A4B498 *self);        /* 0x14 */
} LockableVtbl_82A4B498;
struct Lockable_82A4B498 {
    LockableVtbl_82A4B498 *vt;
};

typedef struct Callback_82A4B498 Callback_82A4B498;
typedef struct CallbackVtbl_82A4B498 {
    void *pad0[2];
    void (*complete)(Callback_82A4B498 *self, long hr);  /* 0x08 */
} CallbackVtbl_82A4B498;
struct Callback_82A4B498 {
    CallbackVtbl_82A4B498 *vt;
};

typedef struct Obj_82A4B498 {
    char pad0[0x1c];
    Lockable_82A4B498 lock;         /* 0x1c */
    char pad20[0x40 - 0x20];
    long status;                    /* 0x40 */
    int pad44;
    void *device;                   /* 0x48 */
    void *stream;                   /* 0x4c */
    Callback_82A4B498 *callback;    /* 0x50 */
} Obj_82A4B498;

extern void fn_82A59DB0(void *device, unsigned int enable);
extern long fn_82A5CC60(void *stream);
extern long fn_82A4B0D8(Obj_82A4B498 *self, int mode, int arg);

int fn_82A4B498(Obj_82A4B498 *self, unsigned int flags)
{
    unsigned int enable = flags & 1;
    Lockable_82A4B498 *lock;
    long hr;

    fn_82A59DB0(self->device, enable);
    lock = &self->lock;
    lock->vt->lock(lock);
    hr = fn_82A5CC60(self->stream);
    if (hr >= 0) {
        hr = fn_82A4B0D8(self, (enable == 0) + 1, 0);
        if (hr >= 0)
            goto done;
    }
    if (_InterlockedCompareExchange(&self->status, hr, 0) >= 0) {
        if (self->callback != 0)
            self->callback->vt->complete(self->callback, hr);
    }
done:
    lock->vt->unlock(lock);
    return 0;
}
