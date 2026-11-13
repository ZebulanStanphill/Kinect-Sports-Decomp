typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);
double sqrt(double);

typedef struct Model_82444F08 {
    char pad0[0x50];
    __vector4 position;
} Model_82444F08;

typedef struct Holder_82444F08 {
    Model_82444F08 *model;
} Holder_82444F08;

typedef struct Target_82444F08 {
    int a;
    int b;
    int c;
} Target_82444F08;

typedef struct Projectile_82444F08 {
    __vector4 velocity;         /* 0x00 */
    __vector4 launchVelocity;   /* 0x10 */
    Target_82444F08 target;     /* 0x20 */
    unsigned char active;       /* 0x2c */
    float gravity;              /* 0x30 */
    char pad34[0x8];
    float elapsed;              /* 0x3c */
    float duration;             /* 0x40 */
    char pad44[0xc];
    __vector4 position;         /* 0x50 */
    __vector4 landing;          /* 0x60 */
    __vector4 start;            /* 0x70 */
    char pad80[0x10];
    int hasLanding;             /* 0x90 */
    char pad94[0x38];
    int cc;                     /* 0xcc */
    char padd0[0x4];
    int mode;                   /* 0xd4 */
    int d8;                     /* 0xd8 */
} Projectile_82444F08;

typedef struct Self_82444F08 {
    int pad0;
    Holder_82444F08 *holder;    /* 0x04 */
    char pad8[0xc];
    Projectile_82444F08 *projectile; /* 0x14 */
} Self_82444F08;

extern const __vector4 lbl_8329EA20;
void fn_82441F88(Self_82444F08 *self, __vector4 position);
void fn_8255DAB8(Model_82444F08 *model, float *a, float *b, float *c);
void fn_825327A8(Model_82444F08 *model, const char *name);
void fn_8252A1B0(Model_82444F08 *model, __vector4 *target, int flag);

static __forceinline __vector4 GetPosition(Self_82444F08 *self)
{
    Model_82444F08 *model = self->holder->model;
    if (model != 0)
        return model->position;
    return __VMXGetReg(77);
}

static __forceinline void GetPositionTo(Self_82444F08 *self, __vector4 *out)
{
    Model_82444F08 *model = self->holder->model;
    if (model != 0)
        *out = model->position;
    else
        *out = __VMXGetReg(77);
}

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 ClearY(__vector4 v)
{
    __vector4 zero = __VMXGetReg(77);
    __vector4 mask = lbl_8329EA20;
    return __vsel(v, zero, mask);
}

void fn_82444F08(Self_82444F08 *self, __vector4 velocity, Target_82444F08 target, int mode)
{
    __vector4 start;
    __vector4 pos;
    __vector4 cur;
    Projectile_82444F08 *p;
    float a, b, c;
    float h;

    self->projectile->velocity = velocity;
    self->projectile->launchVelocity = velocity;
    self->projectile->active = 1;
    self->projectile->elapsed = 0.0f;
    start = GetPosition(self);
    self->projectile->start = start;
    {
        Target_82444F08 *t = &self->projectile->target;
        t->a = target.a;
        t->b = target.b;
        t->c = target.c;
    }
    self->projectile->mode = mode;
    self->projectile->d8 = 1;
    self->projectile->cc = 0;
    fn_82441F88(self, self->projectile->start);

    GetPositionTo(self, &pos);
    h = -pos.vector4_f32[1];
    self->projectile->duration = ((float)sqrt(self->projectile->velocity.vector4_f32[1] * self->projectile->velocity.vector4_f32[1] - self->projectile->gravity * h * 2.0f) + self->projectile->velocity.vector4_f32[1]) / self->projectile->gravity;

    p = self->projectile;
    cur = GetPosition(self);
    self->projectile->position = __vmaddfp(p->velocity, Replicate(p->duration), cur);
    self->projectile->position = ClearY(self->projectile->position);

    fn_8255DAB8(self->holder->model, &a, &b, &c);
    fn_825327A8(self->holder->model, "projectile_inair");
    if (self->projectile->hasLanding != 0)
        fn_8252A1B0(self->holder->model, &self->projectile->landing, 0);
}
