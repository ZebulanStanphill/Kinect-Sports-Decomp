typedef struct Obj_827842B8 {
    char pad0[0x8];
    int count0;
    char padC[0xc];
    int count1;
    char pad1C[0xc];
    int count2;
    int max;
    int min;
    float scaleX;
    float scaleY;
    float offsetX;
    float offsetY;
} Obj_827842B8;

void fn_827842B8(Obj_827842B8 *self)
{
    self->scaleX = 1.0f;
    self->count0 = 0;
    self->scaleY = 1.0f;
    self->count1 = 0;
    self->offsetX = 0.0f;
    self->count2 = 0;
    self->offsetY = 0.0f;
    self->max = 0x7fffffff;
    self->min = -0x7fffffff;
}
