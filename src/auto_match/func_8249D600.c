typedef int (*Hook_8249D600)(void);

typedef struct Range_8249D600 {
    int *begin; /* 0x0 */
    int *end;   /* 0x4 */
} Range_8249D600;

typedef struct Entry_8249D600 {
    int key;    /* 0x0 */
    int active; /* 0x4 */
    int value;  /* 0x8 */
} Entry_8249D600;

typedef struct Registry_8249D600 {
    char pad0[0x14];
    Entry_8249D600 *begin; /* 0x14 */
    Entry_8249D600 *end;   /* 0x18 */
} Registry_8249D600;

typedef struct Settings_8249D600 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Settings_8249D600;

typedef struct Session_8249D600 {
    char pad0[0x70];
    void *player; /* 0x70 */
} Session_8249D600;

typedef struct Screen_8249D600 {
    char pad0[0x24];
    unsigned int busy;    /* 0x24 */
    unsigned int allowed; /* 0x28 */
} Screen_8249D600;

extern Hook_8249D600 lbl_83276774[];
extern Settings_8249D600 *lbl_832975B0;
extern unsigned int lbl_832960A0;

extern Range_8249D600 *fn_8229E7D0(void);
extern Registry_8249D600 *fn_82512C30(void);
extern Settings_8249D600 *fn_82250A18(void);
extern Session_8249D600 *fn_8249ABC0(void);
extern unsigned int fn_8249D748(Screen_8249D600 *self);

static __forceinline Settings_8249D600 *GetSettings(void)
{
    Settings_8249D600 *settings = lbl_832975B0;

    if (lbl_832975B0 == 0) {
        settings = fn_82250A18();
    }
    return settings;
}

static __forceinline int IsEnabled(void)
{
    Registry_8249D600 *registry = fn_82512C30();
    Entry_8249D600 *entry;

    for (entry = registry->begin; entry != registry->end; entry++) {
        if (entry->active != 0) {
            if (GetSettings()->enabled == 0) {
                return 0;
            }
            break;
        }
    }
    return 1;
}

static __forceinline int CallHook(void)
{
    if (lbl_83276774[9] != 0) {
        return lbl_83276774[9]();
    }
    return 0;
}

unsigned int fn_8249D600(Screen_8249D600 *self, unsigned int mode)
{
    unsigned int result = self->allowed;
    Range_8249D600 *range = fn_8229E7D0();
    int enabled;
    void *player;

    result = (range->begin == range->end) & result;
    enabled = IsEnabled();
    player = fn_8249ABC0()->player;
    switch (mode) {
    case 0:
        result &= 1;
        break;
    case 2:
        result &= enabled && player != 0 && lbl_832960A0 == 0 && CallHook() != 0;
        break;
    case 1:
        result &= enabled && player != 0 && lbl_832960A0 == 0 && self->busy == 0 && CallHook() != 0;
        break;
    }
    return fn_8249D748(self) & result;
}
