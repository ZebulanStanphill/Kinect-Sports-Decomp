typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Triple_823C8770 {
    float x;
    float y;
    float z;
} Triple_823C8770;

typedef struct Camera_823C8770 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
} Camera_823C8770;

typedef struct Field_823C8770 {
    int pad0;
    void *bounds; /* 0x04 */
} Field_823C8770;

typedef struct World_823C8770 {
    char pad0[0x1c];
    Field_823C8770 *field; /* 0x1c */
    char pad20[0xe10 - 0x20];
    Camera_823C8770 *camera; /* 0xe10 */
} World_823C8770;

typedef struct Self_823C8770 {
    char pad0[0x1a0];
    __vector4 target; /* 0x1a0 */
    char pad1b0[0x214 - 0x1b0];
    Triple_823C8770 angles; /* 0x214 */
    char pad220[0x228 - 0x220];
    float distance; /* 0x228 */
    char pad22c[0x240 - 0x22c];
    World_823C8770 *world; /* 0x240 */
} Self_823C8770;

extern void fn_823CAF28(Self_823C8770 *self, __vector4 *position, __vector4 *offset, Triple_823C8770 *scale,
                        float *distance);
extern void fn_823C9098(__vector4 position, float x, __vector4 offset, float y, float z, __vector4 *target,
                        Triple_823C8770 *angles);
extern unsigned char fn_822B33B0(void *bounds, __vector4 point, float margin);

void fn_823C8770(Self_823C8770 *self)
{
    float distance;
    Triple_823C8770 scale;
    Triple_823C8770 angles;
    __vector4 offset;
    __vector4 position;
    __vector4 target;

    fn_823CAF28(self, &position, &offset, &scale, &distance);
    fn_823C9098(position, scale.x, offset, scale.y, scale.z, &target, &angles);
    if (fn_822B33B0(self->world->field->bounds, self->world->camera->position, 0.0f)) {
        self->target = target;
    }
    self->distance = distance;
    self->angles = angles;
}
