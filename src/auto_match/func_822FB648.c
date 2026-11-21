typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_822FB648 {
    char *rotation; /* 0x00 */
    char *position; /* 0x04 */
    int pad08;      /* 0x08 */
    int state;      /* 0x0C */
} Transform_822FB648;

typedef struct Owner_822FB648 {
    char pad00[0x54];
    Transform_822FB648 transform; /* 0x54 */
} Owner_822FB648;

extern void fn_8250E790(int *state, __vector4 rotation, __vector4 position);

void fn_822FB648(Owner_822FB648 *self)
{
    Transform_822FB648 *t = &self->transform;
    fn_8250E790(&t->state, *(__vector4 *)(t->rotation + 0x10), *(__vector4 *)(t->position + 0x20));
}
