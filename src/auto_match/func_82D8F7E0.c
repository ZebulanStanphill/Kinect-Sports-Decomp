typedef struct Stack_82D8F7E0 {
    char *top;
} Stack_82D8F7E0;

typedef struct IndexList_82D8F7E0 {
    int *data;
} IndexList_82D8F7E0;

typedef struct Indexed_82D8F7E0 {
    IndexList_82D8F7E0 *indices; /* 0x0 */
    int count;                   /* 0x4 */
} Indexed_82D8F7E0;

typedef struct Entry_82D8F7E0 {
    char pad0[0xea];
    unsigned short infoA; /* 0xea */
    unsigned short infoB; /* 0xec */
} Entry_82D8F7E0;

typedef struct EntryArray_82D8F7E0 {
    Entry_82D8F7E0 **data; /* 0x0 */
    int size;              /* 0x4 */
} EntryArray_82D8F7E0;

typedef struct Config_82D8F7E0 {
    char pad0[0x305];
    unsigned char systems[2]; /* 0x305 */
} Config_82D8F7E0;

typedef struct Array_82D8F7E0 {
    void *data; /* 0x0 */
    int size;   /* 0x4 */
} Array_82D8F7E0;

typedef struct ByteArray_82D8F7E0 {
    unsigned char *data; /* 0x0 */
} ByteArray_82D8F7E0;

typedef struct LocalBuffer_82D8F7E0 {
    int *data;
} LocalBuffer_82D8F7E0;

extern Stack_82D8F7E0 *fn_82CE5410(void);
extern void fn_83082030(Indexed_82D8F7E0 *indexed, LocalBuffer_82D8F7E0 *remap, int count,
                        Array_82D8F7E0 *array);

static __forceinline void *AllocateStack(int size)
{
    Stack_82D8F7E0 *stack = fn_82CE5410();
    char *p = stack->top;
    stack->top = p + ((size + 0x7f) & ~0x7f);
    return p;
}

static __forceinline void DeallocateStack(void *p)
{
    fn_82CE5410()->top = (char *)p;
}

static __forceinline int GetLevel(int info, unsigned char system)
{
    if (system != (info >> 14)) {
        return info & 0x7f;
    }
    return (info >> 7) & 0x7f;
}

void fn_82D8F7E0(Indexed_82D8F7E0 *indexed, EntryArray_82D8F7E0 *entries, Config_82D8F7E0 *config,
                 Array_82D8F7E0 *array, ByteArray_82D8F7E0 *used)
{
    int count = array->size;
    LocalBuffer_82D8F7E0 remap;
    int *slots;
    int next;
    int i;
    const unsigned char *systems;

    remap.data = (int *)AllocateStack(count * 4);
    for (i = 0; i < count; i++) {
        remap.data[i] = 0;
    }
    next = 1;
    systems = config->systems;
    for (i = 0; i < entries->size; i++) {
        Entry_82D8F7E0 *entry = entries->data[i];
        int levelB = GetLevel(entry->infoB, systems[1]);
        int levelA = GetLevel(entry->infoA, systems[0]);
        int level = levelB & 0x7f;
        if ((levelA & 0x7f) > level) {
            level = levelA & 0x7f;
        }
        if (level <= 5) {
            remap.data[indexed->indices->data[i]] = 1;
        }
    }
    slots = remap.data;
    used->data[0] = 1;
    for (i = 0; i < count; i++) {
        if (remap.data[i] != 0) {
            slots[i] = 0;
        } else {
            slots[i] = next;
            used->data[next] = 0;
            next++;
        }
    }
    if (next > count) {
        used->data[0] = 0;
        DeallocateStack(remap.data);
    } else {
        fn_83082030(indexed, &remap, next, array);
        DeallocateStack(remap.data);
    }
}
