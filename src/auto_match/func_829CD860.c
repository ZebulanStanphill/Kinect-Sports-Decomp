typedef struct Entry_829CD860 {
    unsigned int value;
    unsigned int delta;
} Entry_829CD860;

typedef struct Globals_829CD860 {
    char pad[0x4a8];
    unsigned int enabled;
    int unknown4ac;
    unsigned int base;
    char pad4b4[0x4d4 - 0x4b4];
    unsigned int pending;
    char pad4d8[0x5b0 - 0x4d8];
    unsigned int lock;
    Entry_829CD860 *current;
    char pad5b8[0x5c4 - 0x5b8];
    Entry_829CD860 entries[4];
    unsigned int index;
} Globals_829CD860;

extern Globals_829CD860 lbl_83215000;
extern unsigned char KfAcquireSpinLock(unsigned int *lock);
extern void KfReleaseSpinLock(unsigned int *lock, unsigned char token);

void fn_829CD860(unsigned int value)
{
    if (lbl_83215000.enabled != 0) {
        unsigned char token = KfAcquireSpinLock(&lbl_83215000.lock);
        unsigned int delta;
        if (value != 0)
            delta = value - lbl_83215000.base - 0x43238;
        else
            delta = 0x153c32 - lbl_83215000.base;
        if (lbl_83215000.current == 0)
            lbl_83215000.current = &lbl_83215000.entries[lbl_83215000.index];
        lbl_83215000.current->value = value;
        lbl_83215000.current->delta = delta;
        lbl_83215000.pending = 1;
        KfReleaseSpinLock(&lbl_83215000.lock, token);
    }
}
