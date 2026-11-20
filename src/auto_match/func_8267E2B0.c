/* Both flags are written by other threads while a waiter polls them under the condition variable.
   They are volatile in the original: only then does the compiler keep the two byte loads after
   the wait in source order (the sibling fn_8267E350 that clears them matches with volatile too). */
typedef struct Event_8267E2B0 {
    char pad0[0x10];
    volatile unsigned char signaled;  /* 0x10 */
    volatile unsigned char autoReset; /* 0x11 */
    char pad12[2];
    char mutex[0x14]; /* 0x14 */
    char cond[4];     /* 0x28 */
} Event_8267E2B0;

extern void fn_8267C8D8(void *mutex);
extern void fn_8267CF60(void *cond, void *mutex, unsigned int timeout);
extern void fn_8267D9C0(void *mutex);

unsigned char fn_8267E2B0(Event_8267E2B0 *self, unsigned int timeout)
{
    unsigned char r;

    fn_8267C8D8(self->mutex);
    if (timeout != 0) {
        if (timeout != 0xffffffff) {
            if (self->signaled == 0) {
                fn_8267CF60(self->cond, self->mutex, timeout);
            }
        } else {
            while (self->signaled == 0) {
                fn_8267CF60(self->cond, self->mutex, 0xffffffff);
            }
        }
    }
    r = self->signaled;
    if (self->autoReset != 0) {
        self->autoReset = 0;
        self->signaled = 0;
    }
    fn_8267D9C0(self->mutex);
    return r;
}
