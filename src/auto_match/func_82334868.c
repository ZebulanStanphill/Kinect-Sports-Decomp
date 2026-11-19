typedef struct Anim_82334868 {
    int pad0;     /* 0x0 */
    char name[4]; /* 0x4 */
} Anim_82334868;

typedef struct Model_82334868 {
    char pad0[0x20];
    Anim_82334868 *anim; /* 0x20 */
} Model_82334868;

typedef struct Tuning_82334868 {
    char pad0[0xa9c];
    float limit; /* 0xa9c */
} Tuning_82334868;

typedef struct Ball_82334868 {
    char pad0[0x924];
    float speed; /* 0x924 */
    int pad928;  /* 0x928 */
    int moving;  /* 0x92c */
} Ball_82334868;

typedef struct Owner_82334868 {
    char pad0[0x114];
    Model_82334868 *model; /* 0x114 */
    char pad118[0x1a0 - 0x118];
    int busyA; /* 0x1a0 */
    char pad1a4[0x1e0 - 0x1a4];
    int busyB; /* 0x1e0 */
    char pad1e4[0x238 - 0x1e4];
    Tuning_82334868 **tuning; /* 0x238 */
    Ball_82334868 *ball;      /* 0x23c */
    char pad240[0x288 - 0x240];
    int requested; /* 0x288 */
    int idle;      /* 0x28c */
    char pad290[0x2a0 - 0x290];
    unsigned int pending; /* 0x2a0 */
} Owner_82334868;

typedef struct Self_82334868 {
    char pad0[0x8];
    Model_82334868 *model; /* 0x8 */
    int state;             /* 0xc */
    char pad10[0x134 - 0x10];
    char pose[0x50]; /* 0x134 */
    int target;      /* 0x184 */
    char pad188[0x224 - 0x188];
    int nextState;         /* 0x224 */
    float timer;           /* 0x228 */
    float timer2;          /* 0x22c */
    Owner_82334868 *owner; /* 0x230 */
    int pad234;            /* 0x234 */
    float speed;           /* 0x238 */
} Self_82334868;

extern unsigned char fn_822BD338(char *name, const char *anim);
extern void fn_822C72E0(Anim_82334868 *anim, char *pose);

void fn_82334868(Self_82334868 *self)
{
    Owner_82334868 *owner;
    Ball_82334868 *ball;
    float speed;
    float zero;
    int next;
    int target;
    Tuning_82334868 **tuning;
    int notBusy;

    owner = self->owner;
    tuning = owner->tuning;
    notBusy = owner->busyA == 0 && owner->busyB == 0;
    if (notBusy) {
        if (self->state == 0 || self->timer > (*tuning)->limit) {
            target = self->target;
            owner->requested = 1;
            owner->idle = target == 0;
        }
        return;
    }
    switch (self->state) {
    case 0:
        ball = owner->ball;
        speed = ball->speed;
        zero = 0.0f;
        if ((owner->pending > 0 || ball->moving != 0) && speed > zero) {
            self->speed = speed;
            next = 6;
        } else {
            fn_822C72E0(self->model->anim, self->pose);
            next = 7;
        }
        self->timer2 = zero;
        self->nextState = next;
        self->timer = zero;
        break;
    case 1:
        if (fn_822BD338(owner->model->anim->name, "lefthand_idlewithball") ||
            fn_822BD338(self->owner->model->anim->name, "righthand_idlewithball")) {
            self->nextState = 4;
            self->timer = 0.0f;
            self->timer2 = 0.0f;
        }
        break;
    }
}
