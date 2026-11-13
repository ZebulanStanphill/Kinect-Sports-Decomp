long _InterlockedAnd(long volatile *target, long value);
extern int KeSetEvent(void *event, int increment, unsigned char wait);

typedef struct Ctx_82658258 {
    char pad0[0x350];
    void (*callback)(void *arg);   /* 0x350 */
    void *arg;                     /* 0x354 */
} Ctx_82658258;

extern long lbl_8327609C;
extern char lbl_831BD848[];

void fn_82658258(int a, int b, Ctx_82658258 *ctx, unsigned long mask)
{
    ctx->callback(ctx->arg);
    if ((unsigned long)_InterlockedAnd(&lbl_8327609C, ~mask) == mask) {
        KeSetEvent(lbl_831BD848, 1, 0);
    }
}
