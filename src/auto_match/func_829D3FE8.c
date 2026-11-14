typedef struct Slot_829D3FE8 {
    char pad0[0x144];
    unsigned int id;
    int state;
    int pad14c;
} Slot_829D3FE8;

typedef struct Owner_829D3FE8 {
    char pad0[0xc0];
    Slot_829D3FE8 slots[6];
} Owner_829D3FE8;

int fn_829D3FE8(unsigned int id, Owner_829D3FE8 *owner, unsigned int *index)
{
    Slot_829D3FE8 *slots = owner->slots;
    int found = 0;
    unsigned int i;

    for (i = 0; i < 6; i++) {
        if (slots[i].id == id && slots[i].state == 2) {
            *index = i;
            found = 1;
            break;
        }
    }
    return found;
}
