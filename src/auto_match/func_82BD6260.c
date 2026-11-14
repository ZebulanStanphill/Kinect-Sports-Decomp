typedef struct Slot_82BD6260 {
    int unk0;
    int active; /* 0x4 */
} Slot_82BD6260;

typedef struct Obj_82BD6260 {
    char pad0[0x50];
    Slot_82BD6260 *slots[4]; /* 0x50 */
} Obj_82BD6260;

int fn_82BD61F8(unsigned int mask, int flag);

int fn_82BD6260(Obj_82BD6260 *self)
{
    unsigned int mask = 0;
    int i;

    for (i = 0; i < 4; i++) {
        if (self->slots[i] != 0)
            mask |= (self->slots[i]->active != 0) << i;
    }
    return fn_82BD61F8(mask, 1);
}
