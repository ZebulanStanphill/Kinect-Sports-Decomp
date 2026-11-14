typedef struct Lock_82A4B188 Lock_82A4B188;
typedef struct LockVt_82A4B188 {
    void *f0;
    void *f4;
    void (*enter)(Lock_82A4B188 *self);
    void *fc;
    void *f10;
    void (*leave)(Lock_82A4B188 *self);
} LockVt_82A4B188;
struct Lock_82A4B188 { LockVt_82A4B188 *vt; };

typedef struct Sink_82A4B188 Sink_82A4B188;
typedef struct SinkVt_82A4B188 {
    void *f0;
    void *f4;
    void (*notify)(Sink_82A4B188 *self, long value);
} SinkVt_82A4B188;
struct Sink_82A4B188 { SinkVt_82A4B188 *vt; };

typedef struct Thread_82A4B188 { char pad[0x10]; unsigned int id; } Thread_82A4B188;

typedef struct Outer_82A4B188 Outer_82A4B188;
typedef struct OuterVt_82A4B188 {
    char pad[0x3c];
    void (*close)(Outer_82A4B188 *self, int flag);
} OuterVt_82A4B188;
struct Outer_82A4B188 { OuterVt_82A4B188 *vt; };

typedef struct Self_82A4B188 {
    char pad0[0xc];
    int open;                   /* 0x0c */
    Lock_82A4B188 lock;         /* 0x10 */
    char pad14[0x20];
    long result;                /* 0x34 */
    char pad38[4];
    Thread_82A4B188 *thread;    /* 0x3c */
    char pad40[4];
    Sink_82A4B188 *sink;        /* 0x44 */
} Self_82A4B188;

#define OUTER(s) ((Outer_82A4B188 *)((char *)(s) - 0xc))

extern long _InterlockedCompareExchange(long volatile *target, long exchange, long comparand);
extern unsigned int fn_82A1BB18(void);
extern void fn_82A4B0D8(Outer_82A4B188 *self, int flag, int extra);

void fn_82A4B188(Self_82A4B188 *self, long value)
{
    Lock_82A4B188 *lock = &self->lock;

    lock->vt->enter(lock);
    if (_InterlockedCompareExchange(&self->result, value, 0) >= 0) {
        if (self->open != 0) {
            unsigned int id = self->thread->id;
            if (fn_82A1BB18() != id)
                OUTER(self)->vt->close(OUTER(self), 1);
            else
                fn_82A4B0D8(OUTER(self), 1, 0);
        }
        if (self->sink != 0)
            self->sink->vt->notify(self->sink, value);
    }
    lock->vt->leave(lock);
}
