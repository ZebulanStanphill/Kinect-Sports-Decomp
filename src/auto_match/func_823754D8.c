// On first activation: optionally replaces the dominant horizontal component (x or z) of the
// direction with its negation and reports the state to fn_82377EF8, then marks the object active
// and runs fn_82379498; finally notifies the attached part.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
double fabs(double);

typedef struct Object_823754D8 {
    char pad0[0x20];
    __vector4 position;      /* 0x20 */
    __vector4 direction;     /* 0x30 */
    char pad40[0x64];
    int active;              /* 0xa4 */
    char pada8[0x18];
    int mode;                /* 0xc0 */
    char padc4[0x28];
    char state[0x2c];        /* 0xec */
    float speed;             /* 0x118 */
    char pad11c[0x74];
    __vector4 target;        /* 0x190 */
    char pad1a0[0x1fdc];
    int id;                  /* 0x217c */
} Object_823754D8;

typedef struct Holder_823754D8 {
    Object_823754D8 *object;   /* 0x00 */
    void *part;                /* 0x04 */
} Holder_823754D8;

extern __vector4 lbl_8329EA10;   /* select mask: z */
extern __vector4 lbl_8329EA30;   /* select mask: x */

void fn_82377EF8(void *owner, __vector4 position, __vector4 direction, __vector4 target, float speed, int id, int moving);
void fn_82379498(Object_823754D8 *object, void *state);
void fn_822315A0(void *part);

static __forceinline __vector4 ReplicateP(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

void fn_823754D8(void *owner, Holder_823754D8 *holder, int flip)
{
    if (holder->object->active == 0) {
        if (flip != 0) {
            Object_823754D8 *o = holder->object;
            __vector4 d = o->direction;
            float x = d.vector4_f32[0];
            float z = d.vector4_f32[2];
            float nx = -x;
            float nz = -z;

            if (fabs(x) > fabs(z))
                o->direction = __vsel(d, ReplicateP(&nx), lbl_8329EA30);
            else
                o->direction = __vsel(d, ReplicateP(&nz), lbl_8329EA10);
            o = holder->object;
            fn_82377EF8(owner, o->position, o->direction, o->target, o->speed, o->id, o->mode != 0);
        }
        holder->object->active = 1;
        fn_82379498(holder->object, holder->object->state);
    }
    if (holder->part != 0)
        fn_822315A0(holder->part);
}
