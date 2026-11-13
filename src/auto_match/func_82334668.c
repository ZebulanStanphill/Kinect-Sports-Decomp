typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rot);
__vector4 __VMXGetReg(int n);

typedef struct Name_82334668 {
    int pad0;
    char text[1];
} Name_82334668;

typedef struct Motion_82334668 {
    __vector4 velocity;         /* 0x00 */
    __vector4 spin;             /* 0x10 */
    char pad20[0xc];
    int moving;                 /* 0x2c */
} Motion_82334668;

typedef struct Body_82334668 {
    char pad0[0x20];
    Name_82334668 *animation;   /* 0x20 */
    char pad24[0x2c];
    Motion_82334668 motion;     /* 0x50 */
} Body_82334668;

typedef struct Config_82334668 {
    char pad0[0x92c];
    int holdsBall;              /* 0x92c */
} Config_82334668;

typedef struct Player_82334668 {
    char pad0[0x80];
    __vector4 position;         /* 0x80 */
    char pad90[0x84];
    Body_82334668 *body;        /* 0x114 */
    char pad118[0x120];
    void *target;               /* 0x238 */
    Config_82334668 *config;    /* 0x23c */
    char pad240[0x44];
    int busy;                   /* 0x284 */
    int idleWithBall;           /* 0x288 */
    int rightHand;              /* 0x28c */
    char pad290[0xc];
    int phase;                  /* 0x29c */
} Player_82334668;

typedef struct Model_82334668 {
    char pad0[0x20];
    void *skeleton;             /* 0x20 */
} Model_82334668;

typedef struct Self_82334668 {
    char pad0[0x8];
    Model_82334668 *model;      /* 0x08 */
    unsigned int state;         /* 0x0c */
    char pad10[0x174];
    int leftHand;               /* 0x184 */
    char pad188[0x58];
    __vector4 restPosition;     /* 0x1e0 */
    float pad1f0;
    float targetY;              /* 0x1f4 */
    float targetZ;              /* 0x1f8 */
    float pad1fc;
    __vector4 restDirection;    /* 0x200 */
    int started;                /* 0x210 */
    char pad214[0x10];
    int mode;                   /* 0x224 */
    float timer;                /* 0x228 */
    float blend;                /* 0x22c */
    Player_82334668 *player;    /* 0x230 */
} Self_82334668;

unsigned char fn_822BD338(const char *name, const char *test);
int fn_82419C70(void *target);
void fn_82335838(Self_82334668 *self, void *target);
int fn_82336398(Self_82334668 *self, __vector4 *point);
void fn_822C8C60(Body_82334668 *body, int a, int b, __vector4 position, __vector4 direction);
void fn_822C72E0(void *skeleton, const char *name);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline float GetX(__vector4 v)
{
    return v.vector4_f32[0];
}

void fn_82334668(Self_82334668 *self)
{
    void *target = self->player->target;

    if (fn_822BD338(self->player->body->animation->text, "idle") == 0
        && fn_822BD338(self->player->body->animation->text, "run") == 0)
        return;
    self->player->phase = 8;
    if (fn_82419C70(target) == 0)
        return;
    if (self->player->busy != 0)
        return;
    if (self->started == 0)
        fn_82335838(self, target);
    switch (self->state) {
    case 1:
        {
            __vector4 point = VectorSet(GetX(self->player->position), self->targetY, self->targetZ, 0.0f);
            if (fn_82336398(self, &point) == 0)
                return;
        }
        {
            Motion_82334668 *m = &self->player->body->motion;
            m->velocity = __VMXGetReg(77);
            m->moving = 0;
            m->spin = __VMXGetReg(77);
        }
        self->mode = 2;
        self->timer = 0.0f;
        self->blend = 0.0f;
        break;
    case 0:
        fn_822C8C60(self->player->body, 1, 0, self->restPosition, self->restDirection);
        {
            Player_82334668 *p = self->player;
            if (p->config->holdsBall != 0) {
                int left = self->leftHand;
                p->idleWithBall = 1;
                p->rightHand = left == 0;
                fn_822C72E0(self->model->skeleton, self->leftHand != 0 ? "lefthand_idlewithball" : "righthand_idlewithball");
            }
        }
        self->mode = 3;
        self->timer = 0.0f;
        self->blend = 0.0f;
        break;
    }
}
