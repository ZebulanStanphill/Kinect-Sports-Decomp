typedef struct Owned_822A96A8 Owned_822A96A8;

typedef struct OwnedVtbl_822A96A8 {
    void (*Destroy)(Owned_822A96A8 *self, int flags); /* 0x0 */
} OwnedVtbl_822A96A8;

struct Owned_822A96A8 {
    OwnedVtbl_822A96A8 *vt; /* 0x0 */
};

typedef struct Entry_822A96A8 {
    char pad0[0x40];
    float scale;        /* 0x40 */
    int handle44;       /* 0x44 */
    int handle48;       /* 0x48 */
    int value4C;        /* 0x4c */
    int value50;        /* 0x50 */
    int block54[8];     /* 0x54 */
    char block74[0x24]; /* 0x74 */
    int value98;        /* 0x98 */
    int value9C;        /* 0x9c */
} Entry_822A96A8;

typedef struct Slot_822A96A8 {
    Entry_822A96A8 *entry; /* 0x0 */
    int pad[3];
} Slot_822A96A8;

typedef struct Self_822A96A8 {
    int pad0;
    int value4; /* 0x4 */
    char pad8[0x1c];
    char block24[8];         /* 0x24 */
    Owned_822A96A8 *current; /* 0x2c */
    int currentIndex;        /* 0x30 */
    char pad34[0x30];
    int value64; /* 0x64 */
    char pad68[0x24];
    Slot_822A96A8 *slots; /* 0x8c */
    char pad90[0x1c];
    int valueAC; /* 0xac */
} Self_822A96A8;

extern void *fn_8265C9E0(unsigned int size);
extern Owned_822A96A8 *fn_8228E7E8(void *memory, int value4, int *handle44, int *handle48, void *block24,
                                   int *value4C, int *value50, float scale, int *block54, void *block74,
                                   int valueAC, int arg, int value64, int value9C, int value98);

static __forceinline int IsSet(int *handle)
{
    if (handle == 0) {
        return 0;
    }
    return *handle != 0;
}

void fn_822A96A8(Self_822A96A8 *self, int index, int arg)
{
    Entry_822A96A8 *entry;
    void *memory;
    Owned_822A96A8 *created;
    Owned_822A96A8 *old;
    int *handle44;
    int *handle48;

    entry = self->slots[index].entry;
    handle44 = &entry->handle44;
    handle48 = &entry->handle48;
    if (IsSet(handle44) && IsSet(handle48)) {
        memory = fn_8265C9E0(0x98);
        if (memory != 0) {
            created = fn_8228E7E8(memory, self->value4, handle44, handle48, self->block24, &entry->value4C,
                                  &entry->value50, entry->scale, entry->block54, entry->block74,
                                  self->valueAC, arg, self->value64, entry->value9C, entry->value98);
        } else {
            created = 0;
        }
        old = self->current;
        self->current = created;
        if (old != 0) {
            old->vt->Destroy(old, 1);
        }
        self->currentIndex = index;
    }
}
