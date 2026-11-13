extern unsigned char lbl_83215000[];
extern unsigned char KfAcquireSpinLock(void *lock);
extern void KfReleaseSpinLock(void *lock, unsigned char irql);
extern void fn_829C8440(unsigned int mode, int notify);

int fn_829C89A8(int index, unsigned int mode)
{
    unsigned char irql;

    if (index == 1) {
        return 0x80070057;
    }
    if (mode >= 2) {
        return 0x80070057;
    }
    irql = KfAcquireSpinLock(lbl_83215000 + 0x6c);
    if (*(unsigned int *)(lbl_83215000 + 0x690) != mode) {
        *(unsigned int *)(lbl_83215000 + 0x690) = mode;
        KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
        fn_829C8440(mode, 1);
    } else {
        KfReleaseSpinLock(lbl_83215000 + 0x6c, irql);
    }
    return 0;
}
