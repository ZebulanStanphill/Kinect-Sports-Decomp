extern long _InterlockedIncrement(long *);
#define Sync() __emit(0x7C0004AC)

typedef struct Shared_828140F0 {
    char pad[12];
    long refs;
} Shared_828140F0;

typedef struct State_828140F0 {
    char pad[0x20];
    Shared_828140F0 *shared;
    long count;
    int unused;
    long refs;
    unsigned char closing;
    char gap[7];
    void *event;
} State_828140F0;

extern unsigned char fn_82813AE0(State_828140F0 *, void *);
extern void fn_82813680(State_828140F0 *, Shared_828140F0 *);
extern void fn_82813C48(State_828140F0 *);
extern void fn_82A1E658(void *);

void fn_828140F0(State_828140F0 *self)
{
    int item;
    if (!self->closing) {
        self->closing = 1;
        Sync();
    }
    while (fn_82813AE0(self, &item)) {
    }
    {
        Shared_828140F0 *shared = self->shared;
        _InterlockedIncrement(&shared->refs);
        fn_82813680(self, shared);
    }
    if (self->event)
        fn_82A1E658(self->event);
    _InterlockedIncrement(&self->refs);
    _InterlockedIncrement(&self->count);
    fn_82813C48(self);
}
