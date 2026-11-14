typedef struct Slot_82814560 {
    int pad0;
    void *owner;            /* 0x4 */
    char pad8[0x14 - 0x8];
} Slot_82814560;

typedef struct Info_82814560 {
    char pad0[0x51];
    unsigned char count;    /* 0x51 */
    char pad52[0x58 - 0x52];
    Slot_82814560 slots[2]; /* 0x58 */
} Info_82814560;

typedef struct Object_82814560 {
    char pad0[0x1c];
    Info_82814560 *info;    /* 0x1c */
    char pad20[0x30 - 0x20];
    unsigned char (*entries)[0x21]; /* 0x30: packed records, owner at +0xd */
} Object_82814560;

int fn_82814560(Object_82814560 *self, void *owner)
{
    int found = 0;
    Info_82814560 *info;
    Slot_82814560 *slot;
    Slot_82814560 *end;
    unsigned char (*e)[0x21];

    if (owner == self)
        found = 1;
    info = self->info;
    slot = info->slots;
    end = slot + 2;
    for (; slot < end && !found; slot++) {
        if (owner == slot->owner)
            found = 1;
    }
    for (e = self->entries; e < self->entries + info->count && !found; e++) {
        if (owner == *(void **)(*e + 0xd))
            found = 1;
    }
    return found;
}
