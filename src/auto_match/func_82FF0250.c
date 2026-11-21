typedef struct Gain_82FF0250 {
    int id;       /* 0x00 */
    int kind;     /* 0x04 */
    float factor; /* 0x08 */
} Gain_82FF0250;

typedef struct Voice_82FF0250 {
    char pad0[0x1c];
    Gain_82FF0250 *gainsBegin; /* 0x1c */
    Gain_82FF0250 *gainsEnd;   /* 0x20 */
    char pad24[0x4];
    float baseLeft;  /* 0x28 */
    float baseRight; /* 0x2c */
    char pad30[0x44];
    float offsetLeft;  /* 0x74 */
    float levelLeft;   /* 0x78 */
    float offsetRight; /* 0x7c */
    float levelRight;  /* 0x80 */
    char pad84[0x52];
    unsigned char volume;      /* 0xd6 */
    unsigned char groupVolume; /* 0xd7 */
} Voice_82FF0250;

void fn_82FF0250(Voice_82FF0250 *self)
{
    float scale = 1.0f;
    Gain_82FF0250 *gain;
    float left;
    float right;

    for (gain = self->gainsBegin; gain != self->gainsEnd; gain++) {
        scale = gain->factor * scale * (1.0f / 255.0f);
    }
    if (self->volume != 0xff) {
        scale = (float)self->volume * scale * (1.0f / 255.0f);
    }
    if (self->groupVolume != 0xff) {
        scale = (float)self->groupVolume * scale * (1.0f / 255.0f);
    }
    left = self->offsetLeft + self->baseLeft;
    right = self->offsetRight + self->baseRight;
    left = left >= 0.0f ? 0.0f : left;
    right = right >= 0.0f ? 0.0f : right;
    self->levelLeft = (left - -96.3f) * scale - 96.3f;
    self->levelRight = (right - -96.3f) * scale - 96.3f;
}
