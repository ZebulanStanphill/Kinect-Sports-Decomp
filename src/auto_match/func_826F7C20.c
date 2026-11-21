typedef struct StringData_826F7C20 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
    char text[1];      /* 0x8 */
} StringData_826F7C20;

typedef struct String_826F7C20 {
    unsigned int tagged; /* 0x0 */
} String_826F7C20;

typedef struct Formatter_826F7C20 {
    char pad0[0xc];
    void *streamVtbl; /* 0xc */
    char pad10[0x8];
    char *text; /* 0x18 */
    char pad1c[0x30];
} Formatter_826F7C20;

typedef struct Settings_826F7C20 Settings_826F7C20;

typedef struct SettingsVtbl_826F7C20 {
    void *slot0;
    void (*get)(Settings_826F7C20 *self, const char *key, String_826F7C20 *value); /* 0x4 */
    void (*set)(Settings_826F7C20 *self, const char *key, const char *value);      /* 0x8 */
} SettingsVtbl_826F7C20;

struct Settings_826F7C20 {
    SettingsVtbl_826F7C20 *vtbl; /* 0x0 */
    char pad4[0x8];
    int loaded; /* 0xc */
};

typedef struct Registry_826F7C20 Registry_826F7C20;

typedef struct RegistryVtbl_826F7C20 {
    void *slots[3];
    Settings_826F7C20 *(*find)(Registry_826F7C20 *self, int id); /* 0xc */
} RegistryVtbl_826F7C20;

struct Registry_826F7C20 {
    RegistryVtbl_826F7C20 *vtbl;
};

typedef struct Game_826F7C20 {
    char pad0[0x8];
    Registry_826F7C20 registry; /* 0x8 */
    char padC[0xa9c];
    __int64 startTime; /* 0xaa8 */
} Game_826F7C20;

extern char lbl_8200C4D4[];
extern long _InterlockedExchangeAdd(long volatile *value, long add);
extern void fn_8267C4F0(Settings_826F7C20 *settings);
extern unsigned __int64 fn_826933E8(void);
extern void fn_826EFBA8(Formatter_826F7C20 *formatter, __int64 value);
extern void fn_826EFDB8(Formatter_826F7C20 *formatter);
extern void fn_826EF268(Formatter_826F7C20 *formatter);
extern void fn_8268B330(String_826F7C20 *string);
extern __int64 fn_82F6C9F8(const char *text, char **end, int base);
extern void fn_8267BE38(void *block);

__int64 fn_826F7C20(Game_826F7C20 *self)
{
    Settings_826F7C20 *settings;
    __int64 time;
    Formatter_826F7C20 formatter;
    String_826F7C20 value;
    StringData_826F7C20 *data;

    settings = self->registry.vtbl->find(&self->registry, 0x24);
    if (settings != 0) {
        fn_8267C4F0(settings);
        if (settings->loaded == 0) {
            time = fn_826933E8() / 1000 - self->startTime;
            fn_826EFBA8(&formatter, time);
            fn_826EFDB8(&formatter);
            settings->vtbl->set(settings, "timer", formatter.text);
            formatter.streamVtbl = lbl_8200C4D4;
            fn_826EF268(&formatter);
        } else {
            fn_8268B330(&value);
            settings->vtbl->get(settings, "timer", &value);
            time = fn_82F6C9F8(((StringData_826F7C20 *)(value.tagged & ~3u))->text, 0, 10);
            data = (StringData_826F7C20 *)(value.tagged & ~3u);
            if (_InterlockedExchangeAdd(&data->refCount, -1) - 1 == 0) {
                fn_8267BE38(data);
            }
        }
    } else {
        time = fn_826933E8() / 1000 - self->startTime;
    }
    return time;
}
