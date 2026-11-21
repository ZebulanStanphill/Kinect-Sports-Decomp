typedef struct Object_82380CE0 {
    char pad0[0x7c];
    float speed0; // 0x7c
    float speed1; // 0x80
    float speed2; // 0x84
    char pad88[0x14];
    int stage1; // 0x9c
    int stage2; // 0xa0
    char padA4[0x164];
    float speed;  // 0x208
    int progress; // 0x20c
} Object_82380CE0;

float fn_82380CE0(Object_82380CE0 *self)
{
    float minimum;

    if (self->progress > self->stage2 + self->stage1) {
        minimum = self->speed2;
    } else if (self->progress > self->stage1) {
        minimum = self->speed1;
    } else {
        minimum = self->speed0;
    }
    return self->speed - minimum >= 0.0f ? self->speed : minimum;
}
