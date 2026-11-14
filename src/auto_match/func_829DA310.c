typedef struct State_829DA310 {
    char pad[0x8f4b0];
    void *thread;
    unsigned long threadId;
} State_829DA310;

extern State_829DA310 *lbl_832179FC;

extern void *fn_82A1E0C0(void *attributes, unsigned long stackSize, unsigned long (*start)(void *),
                         void *param, unsigned long flags, unsigned long *threadId);
extern unsigned long fn_82A1E508(void *thread, unsigned long processor);
extern unsigned long fn_82A1E2C0(void *thread);
extern unsigned long fn_82A1F470(void);
extern void fn_829D4EB8(void);
extern unsigned long fn_829D9FF8(void *param);

long fn_829DA310(unsigned long processor)
{
    long hr;

    lbl_832179FC->thread = fn_82A1E0C0(0, 0x8000, fn_829D9FF8, 0, 4, &lbl_832179FC->threadId);
    if (lbl_832179FC->thread == 0) {
        hr = 0x8007000e;
    } else if (fn_82A1E508(lbl_832179FC->thread, processor) == (unsigned long)-1) {
        long err = fn_82A1F470();
        hr = err <= 0 ? err : (long)((err & 0xffff) | 0x80070000);
    } else {
        fn_82A1E2C0(lbl_832179FC->thread);
        return 0;
    }
    fn_829D4EB8();
    return hr;
}
