typedef struct Slot_83034920 {
    int count;
    float value;
} Slot_83034920;

typedef struct Obj_83034920 {
    char pad0[0x14];
    Slot_83034920 slots[4];
    char pad34[0xc];
    int f40;
    int f44;
    int f48;
    int f4c;
} Obj_83034920;

int fn_83034920(Obj_83034920 *o)
{
    o->slots[0].value = 0.0f;
    o->slots[0].count = 0;
    o->slots[1].value = 0.0f;
    o->slots[1].count = 0;
    o->slots[2].value = 0.0f;
    o->slots[2].count = 0;
    o->slots[3].value = 0.0f;
    o->slots[3].count = 0;
    o->f40 = 0;
    o->f44 = 0;
    o->f48 = 0;
    o->f4c = 0;
    return 1;
}
