typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 value, int component);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vcmpbfpR(__vector4 a, __vector4 b, unsigned int *condition);

typedef struct Target_822F2F20 {
    char padding[0x24];
    int active;
    char padding2[0x268];
    __vector4 position; /* 0x290 */
    int unused;
    int state; /* 0x2a4 */
    int timer;
} Target_822F2F20;

typedef struct Object_822F2F20 {
    char padding[0xc];
    Target_822F2F20 *target;
    void *owner;
} Object_822F2F20;

extern const float lbl_82192950[38];
extern void fn_822F25B0(void);
extern int fn_82397F30(void *owner);
extern int fn_82397F88(void *owner);
extern __vector4 *fn_822F3018(__vector4 *out, Object_822F2F20 *self);
extern void fn_822E5640(Target_822F2F20 *target);
extern void fn_822E57D8(Target_822F2F20 *target);
extern void fn_822E5710(Target_822F2F20 *target);

/* Splats one float: the load reads the constant where it lies in the float pool. */
static __forceinline __vector4 Replicate_822F2F20(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

void fn_822F2F20(Object_822F2F20 *self)
{
    fn_822F25B0();
    if (self->target->active == 0 && fn_82397F30(self->owner) != 0) {
        __vector4 temporary;
        __vector4 position = *fn_822F3018(&temporary, self);
        Target_822F2F20 *target = self->target;
        __vector4 *destination = &target->position;
        __vector4 delta = __vsubfp(*destination, position);
        __vector4 tolerance = Replicate_822F2F20(lbl_82192950[24]);
        unsigned int condition = 0;
        delta = __vrlimi(delta, tolerance, 1, 0);
        __vcmpbfpR(delta, tolerance, &condition);
        if ((condition & 0x20) != 0x20) {
            *destination = position;
            target->state = 0;
            target->timer = 0;
        }
    }
    if (self->target->active == 0 || fn_82397F88(self->owner) != 0) {
        fn_822E5640(self->target);
    }
    if (self->target->active == 0) {
        fn_822E57D8(self->target);
    } else if (fn_82397F88(self->owner) != 0) {
        fn_822E5710(self->target);
    }
}
