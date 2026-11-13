typedef struct Target_8238A488 {
    char pad0[0x20];
    void *node;
} Target_8238A488;

typedef struct Entry_8238A488 {
    char pad0[0x24];
    int target;
} Entry_8238A488;

typedef struct Slot_8238A488 {
    void **maps;
    int pad4[3];
    int current;
} Slot_8238A488;

typedef struct List_8238A488 {
    char pad0[0x8];
    Slot_8238A488 ***slots;
} List_8238A488;

typedef struct Self_8238A488 {
    char pad0[0x8];
    List_8238A488 *list;
} Self_8238A488;

extern Entry_8238A488 *fn_822ABA88(void *map, unsigned int key);
extern void fn_82F51EF0(void *node, unsigned char flag);

void fn_8238A488(Self_8238A488 *self, int enable, int index, unsigned int key)
{
    Slot_8238A488 *slot;
    Entry_8238A488 *entry;

    slot = (*self->list->slots)[index];
    entry = fn_822ABA88(slot->maps[slot->current], key);
    if (entry->target != 0) {
        fn_82F51EF0(((Target_8238A488 *)entry->target)->node, enable != 0);
    }
}
