void *memset(void *dst, int value, unsigned int size);

typedef struct Object_8284D490 {
    char reserved00[0x30];
    unsigned int handle; /* 0x30 */
} Object_8284D490;

typedef struct Entry_8284D490 {
    unsigned int reserved00;
    Object_8284D490 *object; /* 0x04 */
    unsigned int reserved08;
    unsigned int offset; /* 0x0c */
    char reserved10[0x10];
} Entry_8284D490;

typedef struct Slot_8284D490 {
    char reserved00[0x4c];
    unsigned char used; /* 0x4c */
    char reserved4d[3];
} Slot_8284D490;

typedef struct SlotList_8284D490 {
    unsigned int count;   /* 0x00 */
    Slot_8284D490 *items; /* 0x04 */
} SlotList_8284D490;

typedef struct Definition_8284D490 {
    char reserved00[0x1c];
    unsigned int valueCount; /* 0x1c */
    char reserved20[0xc];
    SlotList_8284D490 *slots; /* 0x2c */
    char reserved30[4];
    unsigned int maskSize; /* 0x34 */
    char reserved38[0x58];
    unsigned int hasData;   /* 0x90 */
    unsigned int stateSize; /* 0x94 */
    unsigned int *defaults; /* 0x98 */
    char reserved9c[0x88];
    void *sections;          /* 0x124 */
    Entry_8284D490 *entries; /* 0x128 */
    unsigned int entryCount; /* 0x12c */
    char reserved130[0x48];
    unsigned int listenerCount; /* 0x178 */
} Definition_8284D490;

typedef struct Binding_8284D490 {
    Object_8284D490 *object; /* 0x00 */
    unsigned int reserved04;
    unsigned int offset; /* 0x08 */
    unsigned int reserved0c;
} Binding_8284D490;

typedef struct Instance_8284D490 {
    unsigned int *values; /* 0x00 */
    char *data;           /* 0x04 */
    void *masks[2];       /* 0x08 */
    char reserved10[8];
    void *dirty; /* 0x18 */
    void *state; /* 0x1c */
    char reserved20[0x1c];
    unsigned int pending; /* 0x3c */
    char reserved40[0xc];
    Binding_8284D490 *bindings; /* 0x4c */
    unsigned int *handles;      /* 0x50 */
} Instance_8284D490;

extern unsigned int fn_828176F0(void *sections, const char *name, unsigned int *out);
extern unsigned int fn_82817868(unsigned int *section);
extern void fn_828505C0(Definition_8284D490 *definition, Instance_8284D490 *instance);
extern void fn_82850D08(Slot_8284D490 *slot, unsigned char set, void **masks, int index);
extern void fn_82850DC0(Definition_8284D490 *definition, void **instance, int index);

void fn_8284D490(Definition_8284D490 *definition, Instance_8284D490 *instance)
{
    unsigned int section;
    unsigned int dataSize;
    unsigned int i;
    int pass;

    fn_828176F0(definition->sections, ".data", &section);
    dataSize = fn_82817868((unsigned int *)section);
    for (i = 0; i < definition->valueCount; i++)
        instance->values[i] = definition->defaults[i];
    for (i = 0; i < definition->entryCount; i++) {
        Object_8284D490 *object = definition->entries[i].object;

        instance->bindings[i].object = object;
        instance->bindings[i].offset = definition->entries[i].offset;
        if (instance->bindings[i].object != 0)
            instance->handles[i] = definition->entries[i].object->handle;
    }
    if (definition->hasData != 0) {
        instance->data = (char *)instance + ((dataSize + 0xf) & ~0xf);
        fn_828505C0(definition, instance);
    } else {
        instance->data = 0;
    }
    if (definition->maskSize != 0) {
        for (pass = 0; pass < 2; pass++) {
            memset(instance->masks[pass], 0xff, definition->maskSize);
            for (i = 0; i < definition->slots->count; i++) {
                if (definition->slots->items[i].used != 0)
                    fn_82850D08(&definition->slots->items[i], 0, (void **)instance, pass);
            }
        }
        memset(instance->dirty, 0, definition->maskSize);
    } else {
        for (pass = 0; pass < 2; pass++)
            instance->masks[pass] = 0;
        instance->dirty = 0;
    }
    if (definition->listenerCount > 0) {
        for (pass = 0; pass < 2; pass++)
            fn_82850DC0(definition, (void **)instance, pass);
    }
    if (definition->stateSize != 0)
        memset(instance->state, 0xff, definition->stateSize);
    else
        instance->state = 0;
    instance->pending = 0;
}
