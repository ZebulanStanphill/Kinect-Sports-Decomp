typedef struct _GUID {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;

typedef struct Entry_82E3D760 Entry_82E3D760;

typedef struct EntryVt_82E3D760 {
    void *slot0;
    void *slot4;
    void *slot8;
    void (*GetInterface)(Entry_82E3D760 *self, void **out); /* 0xc */
} EntryVt_82E3D760;

struct Entry_82E3D760 {
    EntryVt_82E3D760 *vt; /* 0x0 */
    char pad4[0x18];
    GUID id; /* 0x1c */
};

typedef struct Key_82E3D760 {
    unsigned int words[5];
} Key_82E3D760;

typedef struct Iter_82E3D760 {
    void *node;
    void *prev;
} Iter_82E3D760;

typedef struct Table_82E3D760 {
    void **buckets;
} Table_82E3D760;

typedef struct Owner_82E3D760 {
    char pad0[0x1ac];
    Table_82E3D760 entries; /* 0x1ac */
} Owner_82E3D760;

extern int memcmp(const void *a, const void *b, unsigned int size);
extern void fn_82E3ACD8(GUID *out, Owner_82E3D760 *self, const GUID *id);
extern int fn_82E3BDF8(Table_82E3D760 *table, Iter_82E3D760 *it);
extern int fn_82E3C690(Table_82E3D760 *table, Iter_82E3D760 *it, Key_82E3D760 *key, Entry_82E3D760 **value);
extern int fn_82E6EEC0(Entry_82E3D760 *entry, void *out, int flags);

static __forceinline int IsEqualId(GUID a, const GUID *b)
{
    return memcmp(&a, b, 16) == 0;
}

int fn_82E3D760(Owner_82E3D760 *self, GUID id, void **outInterface, void *outInfo)
{
    int hr = 1;

    if (outInterface != 0) {
        *outInterface = 0;
    }
    if (outInfo != 0) {
        *(int *)outInfo = 0;
    }
    {
        GUID key;
        Iter_82E3D760 it;
        Key_82E3D760 entryKey;
        Entry_82E3D760 *entry;

        fn_82E3ACD8(&key, self, &id);
        entry = 0;
        fn_82E3BDF8(&self->entries, &it);
        while (fn_82E3C690(&self->entries, &it, &entryKey, &entry)) {
            Entry_82E3D760 *current = entry;

            hr = 0;
            if (IsEqualId(current->id, &key)) {
                hr = 0;
                if (outInterface != 0) {
                    current->vt->GetInterface(current, outInterface);
                }
                if (outInfo != 0) {
                    fn_82E6EEC0(current, outInfo, 0);
                }
                break;
            }
        }
    }
    return hr;
}
