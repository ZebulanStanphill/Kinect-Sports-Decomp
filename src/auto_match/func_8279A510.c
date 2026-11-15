typedef struct Base_8279A510 {
    char pad[0x13a];
    unsigned short scale;
    char unknown[3];
    unsigned char flags;
} Base_8279A510;

typedef struct Setting_8279A510 {
    char pad[0x26];
    unsigned short value;
} Setting_8279A510;

typedef struct Factor_8279A510 {
    char pad[0x10];
    float value;
} Factor_8279A510;

typedef struct Self_8279A510 {
    Base_8279A510 *base;
    char pad[0xc8 - 4];
    Setting_8279A510 *setting;
    int unknown;
    Factor_8279A510 *factor;
} Self_8279A510;

float fn_8279A510(Self_8279A510 *self)
{
    float value = (float)self->setting->value * 0.05f;
    if (self->factor->value != 1.0f)
        value = self->factor->value * value;
    if ((self->base->flags & 4) != 0)
        value = ((float)self->base->scale * value) * 0.05f;
    return value;
}
