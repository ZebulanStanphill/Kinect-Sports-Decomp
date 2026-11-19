void *memcpy(void *, const void *, unsigned int);

typedef struct Params_824E7360 {
    unsigned char data[0x68];
} Params_824E7360;

typedef struct Slot_824E7360 {
    char padding[0x10];
    Params_824E7360 current;  // 0x10
    Params_824E7360 target;   // 0x78
    Params_824E7360 previous; // 0xe0
    int active;               // 0x148
    float duration;           // 0x14c
    char padding150[0xc];
    float time;   // 0x15c
    int field160; // 0x160
    char padding164[0xc];
} Slot_824E7360;

typedef struct Object_824E7360 {
    Slot_824E7360 slots[2]; // 0x0
    char padding2e0[0x20];
    float time; // 0x300
} Object_824E7360;

extern Params_824E7360 lbl_832967B8[2];
extern const double lbl_821954B0[];
extern const float lbl_8218EC10;
extern double __fsel(double test, double positive, double negative);

void fn_824E7360(Object_824E7360 *self, float duration, int index)
{
    Slot_824E7360 *slot;
    Params_824E7360 *target;
    if (index >= 0 && index <= 1) {
        slot = &self->slots[index];
        slot->field160 = 0;
        target = &slot->target;
        if (index >= -1) {
            memcpy(target, index == -1 ? &lbl_832967B8[0] : &lbl_832967B8[index], 0x68);
        }
        slot->previous = slot->current;
        slot->duration = __fsel(duration - lbl_8218EC10, duration, lbl_821954B0[0x22]);
        slot->time = self->time;
        slot->active = 1;
    }
}
