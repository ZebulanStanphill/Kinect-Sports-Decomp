typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 value, int component);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vcmpbfpR(__vector4 a, __vector4 b, unsigned int *condition);

typedef struct Name_822EF930 {
    char buffer[32];
} Name_822EF930;

typedef struct Target_822EF930 {
    char padding[0x24];
    int active; /* 0x24 */
    char padding28[0xe0];
    float speed; /* 0x108 */
    char padding10c[0x184];
    __vector4 position; /* 0x290 */
    int unused;
    int state; /* 0x2a4 */
    int timer; /* 0x2a8 */
} Target_822EF930;

typedef struct Object_822EF930 {
    char padding[0xc];
    Target_822EF930 *target; /* 0xc */
    void *owner;             /* 0x10 */
} Object_822EF930;

extern const float lbl_82192950[38];
extern float lbl_831CD0D8[24];
extern void fn_82230110(Name_822EF930 *name, const char *text);
extern void fn_82230300(Name_822EF930 *name, int a, int b);
extern void fn_822E5340(Target_822EF930 *target, Name_822EF930 *name);
extern void fn_822E53F8(Target_822EF930 *target, Name_822EF930 *name);
extern int fn_82397F88(void *owner);
extern __vector4 *fn_822EFAF8(__vector4 *out, Object_822EF930 *self);

/* Splats one float: the load reads the constant where it lies in the float pool. */
static __forceinline __vector4 Replicate_822EF930(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

void fn_822EF930(Object_822EF930 *self)
{
    Name_822EF930 idle;
    Name_822EF930 locomotion;

    if (self->target->active == 0) {
        self->target->speed = lbl_831CD0D8[1];
        fn_82230110(&idle, "idle_standing");
        fn_822E5340(self->target, &idle);
        fn_82230300(&idle, 1, 0);
        fn_82230110(&locomotion, "locomotion_standing");
        fn_822E53F8(self->target, &locomotion);
        fn_82230300(&locomotion, 1, 0);
    }
    if (self->target->active == 0 || fn_82397F88(self->owner) != 0) {
        __vector4 temporary;
        __vector4 position = *fn_822EFAF8(&temporary, self);
        Target_822EF930 *target = self->target;
        __vector4 *destination = &target->position;
        __vector4 delta = __vsubfp(*destination, position);
        __vector4 tolerance = Replicate_822EF930(lbl_82192950[24]);
        unsigned int condition = 0;
        delta = __vrlimi(delta, tolerance, 1, 0);
        __vcmpbfpR(delta, tolerance, &condition);
        if ((condition & 0x20) != 0x20) {
            *destination = position;
            target->state = 0;
            target->timer = 0;
        }
    }
}
