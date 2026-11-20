typedef struct StringData_82712A28 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char text[1];      /* 0x8 */
} StringData_82712A28;

typedef struct String_82712A28 {
    unsigned int tagged; /* 0x0 */
} String_82712A28;

typedef struct Formatter_82712A28 {
    char pad0[0xc];
    void *streamVtbl; /* 0xc */
    char pad10[0x8];
    char *text; /* 0x18 */
    char pad1c[0x30];
} Formatter_82712A28;

typedef struct Settings_82712A28 Settings_82712A28;

typedef struct SettingsVtbl_82712A28 {
    void *slot0;
    void (*get)(Settings_82712A28 *self, const char *key, String_82712A28 *value); /* 0x4 */
    void (*set)(Settings_82712A28 *self, const char *key, const char *value);      /* 0x8 */
} SettingsVtbl_82712A28;

struct Settings_82712A28 {
    SettingsVtbl_82712A28 *vtbl; /* 0x0 */
    char pad4[0x8];
    int loaded; /* 0xc */
};

typedef struct Registry_82712A28 Registry_82712A28;

typedef struct RegistryVtbl_82712A28 {
    void *slots[3];
    Settings_82712A28 *(*find)(Registry_82712A28 *self, int id); /* 0xc */
} RegistryVtbl_82712A28;

struct Registry_82712A28 {
    RegistryVtbl_82712A28 *vtbl;
};

typedef struct Game_82712A28 {
    char pad0[0x8];
    Registry_82712A28 registry; /* 0x8 */
} Game_82712A28;

extern char lbl_8200C4D4[];
extern long _InterlockedExchangeAdd(long volatile *value, long add);
extern void fn_8267C4F0(Settings_82712A28 *settings);
extern unsigned int fn_8278FAF0(void);
extern void fn_826EFAF8(Formatter_82712A28 *formatter, unsigned int value);
extern void fn_826EFDB8(Formatter_82712A28 *formatter);
extern void fn_826EF268(Formatter_82712A28 *formatter);
extern void fn_8268B330(String_82712A28 *string);
extern unsigned int fn_82F6A3F0(const char *text, char **end, int base);
extern void fn_8267BE38(void *block);

unsigned int fn_82712A28(Game_82712A28 *self)
{
    Settings_82712A28 *settings;
    unsigned int seed;
    Formatter_82712A28 formatter;
    String_82712A28 value;
    StringData_82712A28 *data;

    settings = self->registry.vtbl->find(&self->registry, 0x24);
    if (settings != 0) {
        fn_8267C4F0(settings);
        if (settings->loaded == 0) {
            seed = fn_8278FAF0();
            fn_826EFAF8(&formatter, seed);
            fn_826EFDB8(&formatter);
            settings->vtbl->set(settings, "random", formatter.text);
            formatter.streamVtbl = lbl_8200C4D4;
            fn_826EF268(&formatter);
        } else {
            fn_8268B330(&value);
            settings->vtbl->get(settings, "random", &value);
            seed = fn_82F6A3F0(((StringData_82712A28 *)(value.tagged & ~3u))->text, 0, 10);
            data = (StringData_82712A28 *)(value.tagged & ~3u);
            if (_InterlockedExchangeAdd(&data->refCount, -1) - 1 == 0) {
                fn_8267BE38(data);
            }
        }
    } else {
        seed = fn_8278FAF0();
    }
    return seed;
}
