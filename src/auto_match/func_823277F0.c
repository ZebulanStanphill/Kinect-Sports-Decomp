typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entity_823277F0 {
    char pad[0xbc];
    struct Entity_823277F0 *target;
} Entity_823277F0;

typedef struct Owner_823277F0 {
    char pad0[0x10];
    void *handle;
    char pad1[0xbc - 0x14];
    Entity_823277F0 *entity;
} Owner_823277F0;

extern void *fn_828A12E8(void *handle);
extern Entity_823277F0 *fn_8288DCC0(void *map, void *key);
extern void fn_822BF1C0(Entity_823277F0 *entity, __vector4 v, float x, int a, int b, int c, Entity_823277F0 *target, int zero, int d);
extern void fn_828B55B0(void *lock);

void fn_823277F0(Owner_823277F0 *self, __vector4 v, float x, int a, int b, void *lock, int c, int d)
{
    Entity_823277F0 *entity = self->entity;
    Entity_823277F0 *other = fn_8288DCC0(fn_828A12E8(self->handle), lock);

    if (entity != 0 && other != 0 && other->target != 0) {
        fn_822BF1C0(entity, v, x, a, b, c, other->target, 0, d);
    }
    fn_828B55B0(lock);
}
