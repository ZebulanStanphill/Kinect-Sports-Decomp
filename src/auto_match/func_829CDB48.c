#define __sync() __emit(0x7C0004AC)

typedef struct Entry_829C95E8 {
    int words[19];
} Entry_829C95E8;

typedef struct Mode_829CDB48 {
    unsigned int words[10];
} Mode_829CDB48;

extern unsigned char lbl_83215000[];
extern int memcmp(const void *, const void *, unsigned int);
extern unsigned char KfAcquireSpinLock(void *);
extern void KfReleaseSpinLock(void *, unsigned char);
extern Entry_829C95E8 *fn_829C95E8(void);
extern void fn_829C9680(Entry_829C95E8 *entry);
extern int fn_829CB948(Entry_829C95E8 *entry, Mode_829CDB48 *mode);
extern void fn_829C91E8(void);
extern void fn_829CB7D8(int flag);

#define PENDING ((Entry_829C95E8 **)(lbl_83215000 + 0x2324))
#define LOCK (lbl_83215000 + 0x232c)
#define BUSY (*(int *)(lbl_83215000 + 0x2334))
#define ENABLED (*(int *)(lbl_83215000 + 0x2338))
#define PENDING_INDEX (*(unsigned int *)(lbl_83215000 + 0x2340))
#define CURRENT_MODE (*(Mode_829CDB48 *)(lbl_83215000 + 0x28b4))

void fn_829CDB48(void)
{
    Entry_829C95E8 *entry;
    Mode_829CDB48 mode;
    unsigned char irql;
    int i;

    if (PENDING[PENDING_INDEX] != 0) {
        return;
    }
    entry = fn_829C95E8();
    if (entry == 0) {
        return;
    }
    if (fn_829CB948(entry, &mode) != 0) {
        if (memcmp(&mode, &CURRENT_MODE, sizeof(mode)) != 0) {
            for (i = 0; i < 10; i++) {
                CURRENT_MODE.words[i] = mode.words[i];
            }
            fn_829C91E8();
            fn_829CB7D8(0);
        }
        irql = KfAcquireSpinLock(LOCK);
        if (ENABLED != 0 && BUSY == 0) {
            PENDING[PENDING_INDEX] = entry;
            PENDING_INDEX = (PENDING_INDEX - 1) & 1;
            __sync();
            entry = 0;
        }
        KfReleaseSpinLock(LOCK, irql);
    }
    if (entry != 0) {
        fn_829C9680(entry);
    }
}
