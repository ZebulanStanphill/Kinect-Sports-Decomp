typedef struct _GUID {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;

typedef struct Entry_82E3CE28 {
    char unknown00[0x1c];
    GUID type; /* 0x1c */
} Entry_82E3CE28;

typedef struct Position_82E3CE28 {
    void *found;
    void *previous;
} Position_82E3CE28;

typedef struct Table_82E3CE28 {
    void **buckets;
    unsigned int size;
} Table_82E3CE28;

typedef struct Request_82E3CE28 {
    unsigned short size; /* 0x00 */
    char unknown02[6];
    __int64 time; /* 0x08 */
} Request_82E3CE28;

typedef struct Lock_82E3CE28 Lock_82E3CE28;

typedef struct Owner_82E3CE28 {
    char unknown000[8];
    char lock[0x3c];    /* 0x008 */
    unsigned int flags; /* 0x044 */
    char unknown048[0x164];
    Table_82E3CE28 entries; /* 0x1ac */
} Owner_82E3CE28;

extern int memcmp(const void *a, const void *b, unsigned int size);
extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern int fn_82E3BF28(Table_82E3CE28 *table, const GUID *key, Entry_82E3CE28 **value,
                       Position_82E3CE28 *position);
extern int fn_82E71990(Entry_82E3CE28 *entry, __int64 time, int flag, int index, __int64 *result,
                       void *extra);
extern const GUID lbl_8214C020;
extern const GUID lbl_82154AE8;

static __forceinline int IsEqualId(GUID a, const GUID *b)
{
    return memcmp(&a, b, 16) == 0;
}

int fn_82E3CE28(Owner_82E3CE28 *self, Request_82E3CE28 *request, const GUID *format, unsigned int *out)
{
    int hr;
    int found;
    __int64 time;
    Entry_82E3CE28 *entry;
    __int64 result;

    fn_82E50CB8(self->lock);
    if (request == 0 || format == 0 || out == 0) {
        fn_82E50F10(self->lock);
        return 0x80070057;
    }
    *out = 0;
    if (request->size != 0x14 || memcmp(&lbl_8214C020, format, 16) != 0) {
        fn_82E50F10(self->lock);
        return 0x80070057;
    }
    time = request->time;
    entry = 0;
    {
        Position_82E3CE28 position;

        found = fn_82E3BF28(&self->entries, format, &entry, &position);
    }
    if (!found) {
        hr = 0xC00D4656;
        goto done;
    }
    if (!IsEqualId(entry->type, &lbl_82154AE8)) {
        hr = 0xC00D36BB;
        goto done;
    }
    result = 0;
    hr = fn_82E71990(entry, time, (self->flags >> 1) & 1, 0xff, &result, 0);
    if (hr >= 0) {
        *out = (unsigned int)result;
    }
done:
    fn_82E50F10(self->lock);
    return hr;
}
