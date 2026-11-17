extern unsigned char lbl_83219B90[];
extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);
extern int fn_82A20E30(void *id);
extern unsigned int *fn_82A23408(void *cache, int flags, void *key, unsigned int size, int mode);
extern void fn_82A214B0(void *cache, void *entry);
extern unsigned int fn_82A23880(void *id);

unsigned int fn_82A23980(void)
{
    unsigned char id[16];
    unsigned int *entry;
    unsigned int value;

    if (*(int *)(lbl_83219B90 + 0xf8) == 0) {
        RtlEnterCriticalSection(lbl_83219B90 + 0x10);
        if (fn_82A20E30(id)) {
            entry = fn_82A23408(*(void **)(lbl_83219B90 + 4), 0, id, 16, 0);
            if (entry) {
                value = entry[2];
                *(int *)(lbl_83219B90 + 0xf8) = 1;
                lbl_83219B90[0xf4] = (unsigned char)value;
                fn_82A214B0(*(void **)(lbl_83219B90 + 4), entry);
            } else {
                RtlLeaveCriticalSection(lbl_83219B90 + 0x10);
                lbl_83219B90[0xf4] = fn_82A23880(id);
                *(int *)(lbl_83219B90 + 0xf8) = 1;
                goto done;
            }
        } else {
            *(int *)(lbl_83219B90 + 0xf8) = 1;
            lbl_83219B90[0xf4] = 0;
        }
        RtlLeaveCriticalSection(lbl_83219B90 + 0x10);
    }
done:
    return lbl_83219B90[0xf4];
}
