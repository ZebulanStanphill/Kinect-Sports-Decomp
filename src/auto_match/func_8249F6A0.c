typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Sound_8249F6A0 {
    char pad0[0x50];
    float length;
    char pad54[4];
    float position;
    int finished;
} Sound_8249F6A0;

typedef struct Slot_8249F6A0 {
    Sound_8249F6A0 *sound;
    float progress;
} Slot_8249F6A0;

typedef struct Player_8249F6A0 {
    int unused;
    char name[4];
    Slot_8249F6A0 slots[2];
    int reserved;
    int started;
} Player_8249F6A0;

extern unsigned int fn_82F4EC30(int);
extern Sound_8249F6A0 *fn_82F53380(unsigned int, void *, unsigned char, int);
extern unsigned int fn_82F4EBE8(int);
extern __vector4 *fn_82F52188(__vector4 *, unsigned int, int);
extern void *fn_8249ABC0(void);
extern void fn_8249B5F0(void *, int, int, int, __vector4);
extern const float lbl_821CA45C[2];

void fn_8249F6A0(Player_8249F6A0 *self)
{
    int selected = -1;
    unsigned int i = 0;
    Slot_8249F6A0 *slot = self->slots;
    float one = lbl_821CA45C[1];

    do {
        Sound_8249F6A0 *sound;
        unsigned int bank;

        if (selected >= 0)
            goto found;
        if (slot->sound == 0) {
            bank = fn_82F4EC30(i);
            if (bank != 0) {
                Sound_8249F6A0 *created = fn_82F53380(bank, self->name, 0, 1);
                Sound_8249F6A0 *value = 0;
                if (created != 0)
                    value = created;
                slot->sound = value;
            }
        }
        sound = slot->sound;
        slot->progress = one - sound->position / sound->length;
        if (sound->finished != 0)
            slot->progress = one;
        if (sound->finished != 0)
            selected = i;
        i++;
        slot++;
    } while (i < 2);

    if (selected >= 0) {
    found:
        if (self->started == 0) {
            __vector4 output;
            __vector4 value;
            unsigned int controller;

            self->started = 1;
            controller = fn_82F4EBE8(selected);
            fn_82F52188(&output, controller, 1);
            value = output;
            fn_8249B5F0(fn_8249ABC0(), 1, 1, 0, value);
        }
    }
}
