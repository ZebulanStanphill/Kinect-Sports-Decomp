typedef unsigned int uint;
typedef unsigned __int64 U64;

typedef struct Key_82CE3A28 {
    unsigned char hasExtra : 1;
    unsigned char flag6 : 1;
    unsigned char index : 6;
} Key_82CE3A28;

typedef struct EntryFlags_82CE3A28 {
    unsigned valid : 1;
    unsigned busy : 1;
    unsigned reserved : 28;
    unsigned mode : 2;
} EntryFlags_82CE3A28;

typedef struct Entry_82CE3A28 {
    EntryFlags_82CE3A28 flags;
    unsigned int w4;
    U64 value;
} Entry_82CE3A28;

typedef struct Ctx_82CE3A28 {
    int pad[5];
    int handle;
} Ctx_82CE3A28;

typedef union Slot_82CE3A28 {
    unsigned short id;
    Entry_82CE3A28 *entry;
} Slot_82CE3A28;

extern int fn_82CE2468(Ctx_82CE3A28 *ctx, Key_82CE3A28 *key);
extern int fn_82CE2888(int handle, unsigned int id, unsigned int *out);
extern int fn_82CE3870(Ctx_82CE3A28 *ctx, Slot_82CE3A28 *out);
extern int fn_82CE3978(Entry_82CE3A28 *table, unsigned int index, Slot_82CE3A28 *out);

int fn_82CE3A28(Entry_82CE3A28 *table, uint mode, Ctx_82CE3A28 *ctx, Key_82CE3A28 *key,
                unsigned int *out)
{
    int hr;
    Slot_82CE3A28 slot;
    unsigned int value;

    hr = fn_82CE2468(ctx, key);
    if (hr >= 0 && key->index != 0x3f) {
        if (key->hasExtra) {
            unsigned int idx;
            unsigned int m;
            Entry_82CE3A28 *e;
            EntryFlags_82CE3A28 f;
            U64 v;

            hr = fn_82CE3870(ctx, &slot);
            if (hr < 0) {
                return hr;
            }
            hr = fn_82CE2888(ctx->handle, slot.id, &value);
            if (hr < 0) {
                return hr;
            }
            idx = key->index;
            m = mode & 3;
            if (idx >= 0x40 || m > 3) {
                return 0x80070057;
            }
            e = &table[idx];
            if (e->flags.busy) {
                return 0x80004005;
            }
            v = value;
            f.mode = m;
            f.valid = 1;
            f.busy = 0;
            f.reserved = 0;
            e->w4 = 0;
            e->flags = f;
            e->value = v;
        }
        hr = fn_82CE3978(table, key->index, &slot);
        if (hr >= 0) {
            *out = (unsigned int)slot.entry->value;
        }
    }
    return hr;
}
