typedef struct Region_82A30A08 {
    char pad0[0x14];
    unsigned int size;
    char pad18[4];
    unsigned int defaultSize; // 0x1c
    char pad20[0x15];
    unsigned char flags;
} Region_82A30A08;

typedef struct Context_82A30E88 {
    char pad[0x38];
    Region_82A30A08 defaultRegion;
    char pad2[0x5e];
    unsigned char writable;
} Context_82A30E88;

typedef struct Name_82A30E88 {
    unsigned short length;
    unsigned short capacity;
    const char *data;
} Name_82A30E88;

typedef struct Entry_82A30E88 {
    char name[0x28];
    unsigned char attributes;
    char pad[0xf];
    unsigned int created;
    unsigned int modified;
    unsigned int size;
    unsigned int requested;
} Entry_82A30E88;

typedef struct Item {
    char pad0[0x35];
    unsigned char flags;
    unsigned short count;
} Item;

extern int fn_82A30A08(void *, Region_82A30A08 *, unsigned int, unsigned int);
extern void fn_82A2C8E0(long long, unsigned int *);
extern Item *fn_82A2C278(Context_82A30E88 *, void *, void *, Entry_82A30E88 *);
extern int fn_82A30700(void *, Item *, int);
extern void fn_82A2C4A8(int);
extern void KeQuerySystemTime(long long *);
extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82A30E88(Context_82A30E88 *self, void *directory, const Name_82A30E88 *name, unsigned int attributes,
                unsigned int length, Entry_82A30E88 *entry, void *parent, Item **out)
{
    unsigned int size;
    long long now;
    unsigned int timestamp;
    Item *item;
    int result;

    if (self->writable == 0) {
        return 0xc00002ea;
    }
    size = entry->requested;
    if (size == (unsigned int)-1) {
        size = self->defaultRegion.defaultSize;
        result = fn_82A30A08(self, &self->defaultRegion, size + 0x1000, 0);
        if (result < 0) {
            return result;
        }
    } else if (size > 0x3fff80) {
        return 0xc00002ea;
    }

    entry->size = size;
    memset(entry, 0, 0x40);
    memcpy(entry, name->data, name->length);
    entry->attributes = (attributes << 7) | (entry->attributes & 0x40) | (name->length & 0x3f);
    KeQuerySystemTime(&now);
    fn_82A2C8E0(now, &timestamp);
    entry->created = timestamp;
    entry->modified = timestamp;
    item = fn_82A2C278(self, directory, parent, entry);
    if (item == 0) {
        return 0xc000009a;
    }
    if ((item->flags & 2) == 0) {
        result = fn_82A30A08(self, (Region_82A30A08 *)item, length, 0);
    } else {
        result = 0;
    }
    if (result >= 0) {
        result = fn_82A30700(self, item, 0);
        if (result >= 0) {
            *out = item;
            result = 0;
            goto done;
        }
    }
    fn_82A2C4A8((int)item);
done:
    return result;
}
