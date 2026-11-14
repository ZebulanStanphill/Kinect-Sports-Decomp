typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Motion_82334340 {
    __vector4 velocity;     /* 0x00 */
    __vector4 spin;         /* 0x10 */
    char pad20[0xc];
    int bounces;            /* 0x2c */
} Motion_82334340;

typedef struct Body_82334340 {
    char pad0[0x50];
    Motion_82334340 motion; /* 0x50 */
} Body_82334340;

typedef struct Tuning_82334340 {
    char pad0[0x928];
    float holdTime;         /* 0x928 */
} Tuning_82334340;

typedef struct Ball_82334340 {
    char pad0[0x24];
    int busy;               /* 0x024 */
    char pad28[0x114 - 0x28];
    Body_82334340 *body;    /* 0x114 */
    char pad118[0x238 - 0x118];
    void *player;           /* 0x238 */
    Tuning_82334340 *tuning;    /* 0x23c */
    char pad240[0x280 - 0x240];
    int ready;              /* 0x280 */
} Ball_82334340;

typedef struct Scene_82334340 {
    char pad0[0x20];
    void *animator;         /* 0x20 */
} Scene_82334340;

typedef struct Self_82334340 {
    char pad0[0x8];
    Scene_82334340 *scene;  /* 0x008 */
    char padC[0x14 - 0xc];
    int active;             /* 0x014 */
    char pad18[0x184 - 0x18];
    int leftHanded;         /* 0x184 */
    char pad188[0x190 - 0x188];
    int countThrows;        /* 0x190 */
    char pad194[0x198 - 0x194];
    char anim198[0x1e0 - 0x198];    /* 0x198 */
    __vector4 target1e0;    /* 0x1e0 */
    __vector4 target1f0;    /* 0x1f0 */
    char pad200[0x210 - 0x200];
    int launched;           /* 0x210 */
    char pad214[0x21c - 0x214];
    int throws;             /* 0x21c */
    char pad220[0x224 - 0x220];
    unsigned int state;     /* 0x224 */
    float time;             /* 0x228 */
    float prevTime;         /* 0x22c */
    Ball_82334340 *ball;    /* 0x230 */
    char pad234[0x238 - 0x234];
    float holdTime;         /* 0x238 */
} Self_82334340;

extern Ball_82334340 *fn_82417F58(void *player);
extern void fn_823345C0(Self_82334340 *self);
extern void fn_82334668(Self_82334340 *self);
extern void fn_82334868(Self_82334340 *self);
extern void fn_823349C0(Self_82334340 *self);
extern void fn_82334A70(Self_82334340 *self);
extern void fn_82334E28(Self_82334340 *self);
extern void fn_82334FD0(Self_82334340 *self);
extern void fn_82335158(Self_82334340 *self);
extern void fn_82335838(Self_82334340 *self, void *player);
extern int fn_823364B8(Self_82334340 *self, __vector4 *target, int left);
extern int fn_82336398(Self_82334340 *self, __vector4 *target);
extern void fn_822C72E0(void *animator, const char *name);

static __forceinline void SetState(Self_82334340 *self, unsigned int state)
{
    self->time = 0.0f;
    self->state = state;
    self->prevTime = 0.0f;
}

void fn_82334340(Self_82334340 *self, float dt)
{
    Ball_82334340 *ball = self->ball;
    void *player;

    self->prevTime = self->time;
    self->time = self->time + dt;
    player = ball->player;
    if (player == 0)
        return;
    if (ball->busy == 0 && ball->ready != 0 && fn_82417F58(player) == ball) {
        if (self->active == 0)
            SetState(self, 1);
        self->active = 1;
        switch (self->state) {
        case 0:
            fn_823345C0(self);
            break;
        case 1:
            fn_82334668(self);
            break;
        case 2:
            if (fn_823364B8(self, &self->target1f0, 0) != 0) {
                fn_822C72E0(self->scene->animator, (const char *)self->anim198);
                SetState(self, 3);
            }
            break;
        case 8:
            if (self->launched == 0)
                fn_82335838(self, ball->player);
            if (fn_82336398(self, &self->target1e0) != 0) {
                Motion_82334340 *m = &self->ball->body->motion;
                m->velocity = __VMXGetReg(77);
                m->bounces = 0;
                m->spin = __VMXGetReg(77);
                SetState(self, 3);
            }
            break;
        case 3:
            fn_82334868(self);
            break;
        case 4:
            if (fn_823364B8(self, &self->target1e0, 1) != 0) {
                fn_822C72E0(self->scene->animator, self->leftHanded ? "lefthand_idlewithball" : "righthand_idlewithball");
                SetState(self, 5);
            }
            break;
        case 5:
            if (fn_82336398(self, &self->target1e0) != 0) {
                if (self->countThrows != 0)
                    self->throws++;
                self->holdTime = self->ball->tuning->holdTime;
                SetState(self, 6);
            }
            break;
        case 6:
            fn_823349C0(self);
            break;
        case 7:
            fn_82334A70(self);
            break;
        case 9:
            fn_82334E28(self);
            break;
        case 10:
            fn_82334FD0(self);
            break;
        case 11:
            fn_82335158(self);
            break;
        }
    } else if (fn_82417F58(player) != ball) {
        self->active = 0;
    }
}
