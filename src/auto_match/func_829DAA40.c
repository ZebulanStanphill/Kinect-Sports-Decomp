typedef struct Slot_829DAA40 {
    int handle;
    unsigned int busy : 1;
    unsigned int rest : 31;
    char pad[0x50];
} Slot_829DAA40;

typedef struct Mgr_829DAA40 {
    char pad0[0x8a0];
    Slot_829DAA40 slots[2];
} Mgr_829DAA40;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_829D4038(Mgr_829DAA40 *mgr, Slot_829DAA40 *slot, int mode);
extern void fn_82A1E810(void *event);
extern int fn_82A1E650(void *handle, unsigned int timeout);
extern char lbl_83215000[];
extern char *lbl_832179FC;

int fn_829DAA40(unsigned char force)
{
    int hr;
    void *cs;
    char *mgr;
    Slot_829DAA40 *slot;
    int i;

    if ((*(int *)(lbl_83215000 + 0x2148) == 0 && force == 0) || lbl_832179FC == 0) {
        return 0x83010005;
    }
    hr = 0;
    cs = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(cs);
    mgr = lbl_832179FC;
    if (mgr[0x24977] != 0) {
        RtlLeaveCriticalSection(cs);
        return 0x800700aa;
    }
    mgr[0x24977] = 1;
    slot = ((Mgr_829DAA40 *)mgr)->slots;
    for (i = 2; i != 0; i--) {
        if (slot->handle != 0) {
            if ((unsigned char)slot->busy && force == 0) {
                hr = 0x800700aa;
            } else {
                int r = fn_829D4038((Mgr_829DAA40 *)mgr, slot, 2);
                if (r < 0) {
                    hr = r;
                }
            }
        }
        slot++;
    }
    fn_82A1E810(*(void **)(lbl_832179FC + 0x8f4bc));
    RtlLeaveCriticalSection(cs);
    fn_82A1E650(*(void **)(lbl_832179FC + 0x8f4c0), 0xffffffff);
    return hr;
}
