extern unsigned char lbl_83219B90[];
extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern void fn_82A1F560(void *self, void *item);
extern void fn_82A20688(void *self);
extern void fn_82A247C0(void *self);
extern void fn_82A25330(void *self);

void fn_82A250F8(unsigned char *self)
{
    unsigned char *globals = lbl_83219B90;
    RtlEnterCriticalSection(globals + 0x10);
    if ((*(unsigned int *)(self + 0x14) & 0xc0000000) == 0xc0000000) {
        fn_82A247C0(self);
    } else {
        __int64 position;
        *(unsigned __int64 *)(globals + 0x64) += *(unsigned int *)(*(unsigned char **)(self + 0x20) + 0x24);
        *(unsigned int *)(**(unsigned char ***)(self + 0xc) + 0xc) = *(unsigned int *)(self + 0x2c);
        fn_82A1F560(*(void **)(globals + 0xc), *(void **)(self + 0x20));
        position = *(__int64 *)(*(unsigned char **)(self + 0x20) + 0x10);
        *(__int64 *)(self + 0x28) = position;
        if (position >= *(unsigned int *)(**(unsigned char ***)(self + 0xc) + 8)) {
            fn_82A247C0(self);
        } else {
            *(unsigned int *)(self + 8) = 0;
            *(void (**)(void *))(self + 0x10) = fn_82A25330;
            fn_82A20688(self);
        }
    }
    RtlLeaveCriticalSection(globals + 0x10);
}
