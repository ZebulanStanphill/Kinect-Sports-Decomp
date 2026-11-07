typedef struct Slot_82287D08 {
    char pad0[0x400];
    int state;
    char pad1[0x420 - 0x404];
} Slot_82287D08;

typedef struct Table_82287D08 {
    char pad0[0x438];
    Slot_82287D08 slots[4];
} Table_82287D08;

typedef struct Obj_82287D08 {
    char pad0[0x11f0];
    Table_82287D08 *table;
} Obj_82287D08;

extern void fn_82287DA8(Obj_82287D08 *self, unsigned int id);
extern void fn_82288228(Obj_82287D08 *self, int slot, unsigned int id);

static __forceinline int findSlot(Obj_82287D08 *self, int start)
{
    int i;
    for (i = start; i < 4; i++) {
        int s = self->table->slots[i].state;
        if (s == 0 || s == 1)
            return i;
    }
    return -1;
}

void fn_82287D08(Obj_82287D08 *self, unsigned int count)
{
    int start = 1;
    unsigned int i;

    for (i = 0; i < count; i++) {
        int slot = findSlot(self, start);
        if (slot != -1) {
            fn_82288228(self, slot, i + 1);
            start = slot + 1;
        } else {
            fn_82287DA8(self, i + 1);
        }
    }
}
