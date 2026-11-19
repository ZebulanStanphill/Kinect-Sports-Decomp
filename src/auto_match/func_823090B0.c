typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Func_823090B0 {
    union {
        double align;
        char space[16];
    } u;
    void *impl;
} Func_823090B0;

typedef struct Manager_823090B0 {
    char pad0[0x578];
    int mode; /* 0x578 */
} Manager_823090B0;

typedef struct Owner_823090B0 {
    char pad0[0x1e8];
    Manager_823090B0 *manager; /* 0x1e8 */
    char pad1ec[0x34];
    int active; /* 0x220 */
    char pad224[0x10];
    int state; /* 0x234 */
} Owner_823090B0;

typedef __declspec(align(16)) struct Self_823090B0 {
    char pad0[0xc];
    Owner_823090B0 *owner; /* 0x0c */
    char pad10[0x10];
    __vector4 position; /* 0x20 */
    int count;          /* 0x30 */
    float time;         /* 0x34 */
    int pad38;
    float speed;        /* 0x3c */
    __vector4 velocity; /* 0x40 */
    int target;         /* 0x50 */
    char pad54[0x1c];
    int ready; /* 0x70 */
    char pad74[0x5c];
    int result; /* 0xd0 */
    int padd4;
    Func_823090B0 callback; /* 0xd8 */
    char padf0[0x30];
    int pending; /* 0x120 */
} Self_823090B0;

extern void fn_8230BBC0(Self_823090B0 *self);
extern Func_823090B0 *fn_822C5B18(Func_823090B0 *dst, const Func_823090B0 *src);
extern void fn_823000E0(Manager_823090B0 *manager, Func_823090B0 *callback);

static __forceinline void Store(__vector4 *d, __vector4 v)
{
    *d = v;
}

void fn_823090B0(Self_823090B0 *self)
{
    Manager_823090B0 *manager;
    Func_823090B0 copy;

    self->count = 0;
    self->time = 0.0f;
    self->target = 0;
    self->speed = 0.0f;
    Store(&self->position, __VMXGetReg(77));
    Store(&self->velocity, __VMXGetReg(77));
    fn_8230BBC0(self);
    self->result = 0;
    self->pending = 0;
    self->ready = 1;
    manager = self->owner->manager;
    manager->mode = 0x7fe;
    fn_823000E0(manager, fn_822C5B18(&copy, &self->callback));
    self->owner->state = 0;
    self->owner->active = 1;
}
