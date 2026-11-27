typedef struct Instruction_82AC3FB0 {
    unsigned int word0; /* 0x0 */
    unsigned int word1; /* 0x4 */
    unsigned int word2; /* 0x8 */
} Instruction_82AC3FB0;

typedef struct Context_82AC3FB0 Context_82AC3FB0;

typedef struct Entry_82AC3FB0 {
    int index;          /* 0x0: used in entry 0 */
    int unknown4;       /* 0x4 */
    int unknown8;       /* 0x8 */
    unsigned int flags; /* 0xc */
} Entry_82AC3FB0;

typedef struct Slot_82AC3FB0 {
    unsigned int kind : 2;
    unsigned int value : 30;
} Slot_82AC3FB0;

typedef struct SlotTable_82AC3FB0 {
    unsigned int count;     /* 0x0 */
    Slot_82AC3FB0 slots[1]; /* 0x4 */
} SlotTable_82AC3FB0;

extern int fn_82AC3838(Instruction_82AC3FB0 *instructions, int index, Context_82AC3FB0 *context);
extern int fn_82AC3AA0(Instruction_82AC3FB0 *instructions, int index, int masked, Context_82AC3FB0 *context);
extern int fn_82AC3BA8(Instruction_82AC3FB0 *instructions, int index, unsigned char defaulted,
                       Context_82AC3FB0 *context);
extern int fn_82AC3CC8(Instruction_82AC3FB0 *instructions, int index, Context_82AC3FB0 *context,
                       Entry_82AC3FB0 *entries);
extern int fn_82AC3E38(Instruction_82AC3FB0 *instructions, int index, Context_82AC3FB0 *context,
                       Entry_82AC3FB0 *entries);

static __forceinline int CheckPlain_82AC3FB0(Instruction_82AC3FB0 *instructions, int index,
                                             unsigned char defaulted, Context_82AC3FB0 *context,
                                             Entry_82AC3FB0 *entries)
{
    int hr = fn_82AC3E38(instructions, index, context, entries);

    if (hr < 0) {
        return hr;
    }
    hr = fn_82AC3BA8(instructions, index, defaulted, context);
    if (hr < 0) {
        return hr;
    }
    hr = fn_82AC3CC8(instructions, index, context, entries);
    if (hr < 0) {
        return hr;
    }
    return 0;
}

int fn_82AC3FB0(Instruction_82AC3FB0 *instructions, unsigned int index, unsigned char masked,
                unsigned char second, unsigned char firstOfPair, unsigned char defaulted,
                SlotTable_82AC3FB0 *table, Context_82AC3FB0 *context, Entry_82AC3FB0 *entries)
{
    Entry_82AC3FB0 *entry;
    unsigned int kind;
    int i;
    int hr;

    if ((index << 1) >= table->count) {
        return 0x80004005;
    }
    entry = &entries[entries->index];
    if (second) {
        entry->flags &= ~0x1140;
    }
    if (firstOfPair) {
        kind = 3;
        entry->flags = entry->flags & ~0x1300;
    } else {
        if ((entry->flags & 0x200) == 0) {
            entry->flags &= ~0x1000;
        }
        kind = 2;
        entry->flags = ((defaulted << 8) & 0x100) | 0x200 | (entry->flags & ~0x100);
    }
    for (i = 0; i < 2; i++) {
        Slot_82AC3FB0 *slot = &table->slots[index * 2 + i];
        unsigned int current = slot->kind;

        if (current != 0 && current != kind) {
            return 0x80004005;
        }
        table->slots[index * 2 + i].kind = kind;
    }
    if (masked) {
        if (!firstOfPair) {
            return 0x80004005;
        }
    } else if (!firstOfPair) {
        goto plain;
    }
    if (masked && (instructions[index].word0 & 0x1f) != 0) {
        return 0x80004005;
    }
    if (firstOfPair && (instructions[index].word0 & 0x1f) != 0) {
        hr = fn_82AC3838(instructions, index, context);
        goto done;
    }
    if (firstOfPair) {
        hr = fn_82AC3AA0(instructions, index, masked, context);
        goto done;
    }
plain:
    hr = CheckPlain_82AC3FB0(instructions, index, defaulted, context, entries);
done:
    if (hr < 0) {
        return hr;
    }
    if (firstOfPair) {
        entry->flags |= 0x40;
    }
    return 0;
}
