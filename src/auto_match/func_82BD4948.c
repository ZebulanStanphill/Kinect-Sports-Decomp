long _InterlockedExchange(long volatile *target, long value);

typedef struct Object_82BD4948 {
    char pad[0x124];
    long state;
} Object_82BD4948;

int fn_82BD4948(Object_82BD4948 *self, long state)
{
    _InterlockedExchange(&self->state, state);
    return 0;
}
