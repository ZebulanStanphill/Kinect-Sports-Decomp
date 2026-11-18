typedef struct StringPtr_82E080B8 {
    const char *stringAndFlag; /* 0x00 */
} StringPtr_82E080B8;

typedef struct Entry_82E080B8 {
    StringPtr_82E080B8 name; /* 0x00 */
    void *object;            /* 0x04: hkRefPtr */
} Entry_82E080B8;

typedef struct EntryArray_82E080B8 {
    Entry_82E080B8 *data; /* 0x00 */
    int size;             /* 0x04 */
    int capacityAndFlags; /* 0x08 */
} EntryArray_82E080B8;

typedef struct Named_82E080B8 {
    StringPtr_82E080B8 name;     /* 0x00 */
    EntryArray_82E080B8 entries; /* 0x04 */
} Named_82E080B8;

typedef struct Router_82E080B8 {
    char pad[0x10];
    void *heap; /* 0x10 */
} Router_82E080B8;

extern StringPtr_82E080B8 *fn_82CED6A8(StringPtr_82E080B8 *self, const StringPtr_82E080B8 *other);
extern Router_82E080B8 *fn_82CE5410(void);
extern void fn_82CE6310(void *allocator, EntryArray_82E080B8 *array, int capacity, int elementSize);
extern void fn_82CE4118(void *object);
extern void fn_82CED5B8(StringPtr_82E080B8 *string);
extern Entry_82E080B8 *fn_82E07630(Entry_82E080B8 *entry);
extern void fn_82E081D0(EntryArray_82E080B8 *array, void *allocator, int index, int numToDelete,
                        const Entry_82E080B8 *entries, int numToInsert);

static __forceinline void DestructEntries_82E080B8(Entry_82E080B8 *entries, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        if (entries[i].object != 0) {
            fn_82CE4118(entries[i].object);
        }
        entries[i].object = 0;
        fn_82CED5B8(&entries[i].name);
    }
}

static __forceinline void ConstructEntries_82E080B8(Entry_82E080B8 *entries, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        Entry_82E080B8 *entry = &entries[i];

        if (entry != 0) {
            fn_82E07630(entry);
        }
    }
}

static __forceinline void SetSize_82E080B8(EntryArray_82E080B8 *array, void *allocator, int size)
{
    int capacity = array->capacityAndFlags & 0x3fffffff;

    if (capacity < size) {
        int growth = capacity * 2;
        fn_82CE6310(allocator, array, size < growth ? growth : size, sizeof(Entry_82E080B8));
    }
    DestructEntries_82E080B8(array->data + size, array->size - size);
    ConstructEntries_82E080B8(array->data + array->size, size - array->size);
    array->size = size;
}

static __forceinline void InsertAt_82E080B8(EntryArray_82E080B8 *array, const Entry_82E080B8 *entries,
                                            int count)
{
    Router_82E080B8 *router = fn_82CE5410();

    fn_82E081D0(array, router->heap, 0, 0, entries, count);
}

Named_82E080B8 *fn_82E080B8(Named_82E080B8 *self, const Named_82E080B8 *other)
{
    EntryArray_82E080B8 *entries;

    fn_82CED6A8(&self->name, &other->name);
    entries = &self->entries;
    SetSize_82E080B8(entries, fn_82CE5410()->heap, 0);
    if (other->entries.size != 0) {
        InsertAt_82E080B8(entries, other->entries.data, other->entries.size);
    }
    return self;
}
