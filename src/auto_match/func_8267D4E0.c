#define __lwsync() __emit(0x7C2004AC)
extern long _InterlockedExchangeAdd(long volatile *, long);
extern int fn_82A1E2C0(void *handle);

typedef struct S_8267D4E0 {
    char pad0[0x18];
    unsigned int flags;   /* +0x18 */
    long count;           /* +0x1c */
    char pad20[0xc];
    void *handle;         /* +0x2c */
} S_8267D4E0;

int fn_8267D4E0(S_8267D4E0 *self)
{
    long old;
    if ((self->flags & 1) == 0)
        return 0;
    old = _InterlockedExchangeAdd(&self->count, -1);
    __lwsync();
    if (old >= 1 && (old != 1 || fn_82A1E2C0(self->handle) != -1))
        return 1;
    return 0;
}
