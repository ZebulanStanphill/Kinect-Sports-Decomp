#define __lwsync() __emit(0x7C2004AC)
void __emit(unsigned int opcode);

typedef struct Obj_8267D748 {
    char pad[0x18];
    unsigned int flags;    /* 0x18 */
    long count;            /* 0x1c */
    char pad20[0xc];
    int handle;            /* 0x2c */
} Obj_8267D748;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern int fn_82A1E438(int handle);

int fn_8267D748(Obj_8267D748 *self)
{
    if ((self->flags & 1) != 0 && fn_82A1E438(self->handle) != -1) {
        __lwsync();
        _InterlockedExchangeAdd(&self->count, 1);
        __lwsync();
        return 1;
    }
    return 0;
}
