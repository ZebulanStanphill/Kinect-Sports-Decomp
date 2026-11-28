typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Matrix_82331698 {
    __vector4 r[4];
} Matrix_82331698;

typedef struct Frame_82331698 {
    char pad0[0x50];
    Matrix_82331698 world; /* 0x50 */
} Frame_82331698;

typedef struct Mover_82331698 {
    char pad0[0x60];
    __vector4 previous; /* 0x60 */
    __vector4 target;   /* 0x70 */
    char pad80[0xf0];
    int moving; /* 0x170 */
    char pad174[0x44];
    Frame_82331698 *frame; /* 0x1b8 */
} Mover_82331698;

typedef struct Vec2_82331698 {
    float x; /* 0x00 */
    float y; /* 0x04 */
} Vec2_82331698;

typedef struct Area_82331698 {
    float minX; /* 0x00 */
    float maxX; /* 0x04 */
    float minY; /* 0x08 */
    float maxY; /* 0x0c */
} Area_82331698;

typedef struct Settings_82331698 {
    float width;        /* 0x00 */
    float height;       /* 0x04 */
    float turnRate;     /* 0x08 */
    float maxDelay;     /* 0x0c */
    float depth;        /* 0x10 */
    float minSpeed;     /* 0x14 */
    float maxSpeed;     /* 0x18 */
    float acceleration; /* 0x1c */
    float damping;      /* 0x20 */
} Settings_82331698;

typedef struct Wanderer_82331698 {
    void *vtable; /* 0x00 */
    char pad4[0xc];
    Mover_82331698 *mover; /* 0x10 */
    char pad14[0x60];
    int layer; /* 0x74 */
    char pad78[0x28];
    Vec2_82331698 position; /* 0xa0 */
    Vec2_82331698 velocity; /* 0xa8 */
    float width;            /* 0xb0 */
    float height;           /* 0xb4 */
    float depth;            /* 0xb8 */
    float currentHeight;    /* 0xbc */
    float turnRate;         /* 0xc0 */
    float maxDelay;         /* 0xc4 */
    float delay;            /* 0xc8 */
    float acceleration;     /* 0xcc */
    float damping;          /* 0xd0 */
    int state;              /* 0xd4 */
    Area_82331698 area;     /* 0xd8 */
} Wanderer_82331698;

extern char lbl_821B0988[];
extern unsigned int lbl_83265A28;

extern Wanderer_82331698 *fn_82330AD8(Wanderer_82331698 *self, int arg1, int arg3, int arg2, int layer,
                                      int arg7);
extern int fn_82520780(unsigned int *seed, float chance);
extern __vector4 fn_825319C0(Vec2_82331698 *position, float height, int layer);
extern int fn_825279F8(Mover_82331698 *self);
extern void fn_82528948(Mover_82331698 *self);

static __forceinline float NextRandom(unsigned int *seed)
{
    union {
        unsigned int i;
        float f;
    } value;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    value.i = *seed & 0x7fffff | 0x3f800000;
    return value.f - 1.0f;
}

static __forceinline float RandomBetween(unsigned int *seed, float minimum, float maximum)
{
    return minimum + (maximum - minimum) * NextRandom(seed);
}

static __forceinline Vec2_82331698 MakeVec2(float x, float y)
{
    Vec2_82331698 v;

    v.x = x;
    v.y = y;
    return v;
}

static __forceinline __vector4 Vector3Transform(__vector4 v, Matrix_82331698 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmaddfp(m.r[2], z, m.r[3]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}

static __forceinline void SetTarget(Mover_82331698 *mover, __vector4 target)
{
    int state;

    state = fn_825279F8(mover);
    if (state != 0 && state != 3) {
        __vector4 v, zero, mask;
        v = Vector3Transform(target, mover->frame->world);
        mask = __VMXGetReg(67);
        zero = __VMXGetReg(77);
        mover->target = __vsel(v, zero, mask);
    } else {
        mover->target = target;
    }
    mover->previous = mover->target;
    mover->moving = 0;
    fn_82528948(mover);
}

Wanderer_82331698 *fn_82331698(Wanderer_82331698 *self, int arg1, int arg2, int arg3,
                               const Settings_82331698 *settings, const Area_82331698 *area, int layer,
                               int arg7)
{
    float maxDelay;

    fn_82330AD8(self, arg1, arg3, arg2, layer, arg7);
    self->vtable = lbl_821B0988;
    self->position = MakeVec2(RandomBetween(&lbl_83265A28, area->minX, area->maxX),
                              RandomBetween(&lbl_83265A28, area->minY, area->maxY));
    self->velocity = MakeVec2(RandomBetween(&lbl_83265A28, settings->minSpeed, settings->maxSpeed),
                              RandomBetween(&lbl_83265A28, settings->minSpeed, settings->maxSpeed));
    self->width = settings->width;
    self->height = settings->height;
    self->depth = settings->depth;
    self->currentHeight = self->height;
    self->turnRate = settings->turnRate;
    maxDelay = settings->maxDelay;
    self->maxDelay = maxDelay;
    self->delay = NextRandom(&lbl_83265A28) * maxDelay;
    self->acceleration = settings->acceleration;
    self->damping = settings->damping;
    self->state = 3;
    self->area = *area;
    self->velocity.x = (fn_82520780(&lbl_83265A28, 0.5f) ? 1.0f : -1.0f) * self->velocity.x;
    self->velocity.y = self->velocity.y * (fn_82520780(&lbl_83265A28, 0.5f) ? 1.0f : -1.0f);
    SetTarget(self->mover, fn_825319C0(&self->position, self->currentHeight, self->layer));
    return self;
}
