typedef struct Slot_82369160 {
    char pad0[0xc];
    unsigned int score;
    char pad10[0x84 - 0x10];
} Slot_82369160;

typedef struct Obj_82369160 {
    char pad0[0x4bc];
    Slot_82369160 *slots;
} Obj_82369160;

int fn_82369160(Obj_82369160 *self, int player)
{
    unsigned int mine = self->slots[player].score;
    unsigned int other = self->slots[player == 0].score;
    int result = 1;

    if (mine > other) {
        return 2;
    }
    if (mine < other) {
        result = 0;
    }
    return result;
}
