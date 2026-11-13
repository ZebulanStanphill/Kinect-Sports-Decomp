typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Slot_822BC818 {
    char pad0[0x2d4];
    float scale;                /* 0x2d4 */
    char pad2d8[0x18];
    __vector4 pos;              /* 0x2f0 */
    float f[(0x1c10 - 0x300) / 4];  /* 0x300 */
} Slot_822BC818;

typedef struct Self_822BC818 {
    char pad0[0x24];
    Slot_822BC818 *slots;       /* 0x24 */
} Self_822BC818;

typedef struct Out_822BC818 {
    __vector4 pos;              /* 0x00 */
    char pad10[0x20];
    float f[24];                /* 0x30 */
} Out_822BC818;

void fn_822BC818(Self_822BC818 *self, Out_822BC818 *out, int index)
{
    Slot_822BC818 *slot;

    if (self->slots == 0)
        return;
    slot = &self->slots[index];
    out->pos = slot->pos;
    out->f[0] = slot->f[0x11];
    out->f[1] = slot->f[0x32];
    out->f[2] = slot->f[0x33];
    out->f[3] = slot->f[0x2f];
    out->f[4] = slot->f[0x30];
    out->f[5] = slot->f[0x36];
    out->f[6] = slot->f[0x12];
    out->f[7] = slot->scale;
    out->f[8] = slot->f[0x37];
    out->f[9] = slot->f[0x38];
    out->f[10] = slot->f[0x39];
    out->f[13] = slot->f[0x15];
    out->f[14] = slot->f[0x3b];
    out->f[15] = slot->f[0x3c];
    out->f[16] = slot->f[0x3d];
    out->f[11] = slot->f[0x3a];
    out->f[12] = slot->f[0x22];
    out->f[17] = slot->f[0x3e];
    out->f[18] = slot->f[0x3f];
    out->f[19] = slot->f[0x40];
    out->f[20] = slot->f[0x41];
    out->f[21] = slot->f[0x42];
    out->f[22] = slot->f[0x43];
    out->f[23] = slot->f[0x44];
}
