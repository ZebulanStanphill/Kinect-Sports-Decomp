typedef struct Str_822CF300 {
    union {
        char buf[16];
        char *ptr;
    } u;

    unsigned int size; /* 0x10 */
    unsigned int res;  /* 0x14 */
    int alloc;         /* 0x18 */
} Str_822CF300;

typedef struct Anim_822CF300 {
    char pad0[0x78];
    Str_822CF300 transition; /* 0x78 */
} Anim_822CF300;

typedef struct Model_822CF300 {
    char pad0[0x20];
    char *state; /* 0x20 */
    char pad24[0x28 - 0x24];
    int busy; /* 0x28 */
    char pad2C[0xC0 - 0x2C];
    Anim_822CF300 *anim; /* 0xC0 */
} Model_822CF300;

typedef struct Self_822CF300 {
    char pad0[0x114];
    Model_822CF300 *model; /* 0x114 */
    char pad118[0x1C8 - 0x118];
    int idleSet;       /* 0x1C8 */
    unsigned int pose; /* 0x1CC */
    float poseTime;    /* 0x1D0 */
    float poseDelay;   /* 0x1D4 */
    float fatigue;     /* 0x1D8 */
    char pad1DC[0x27C - 0x1DC];
    float idleRate; /* 0x27C */
} Self_822CF300;

extern unsigned int lbl_83265A28;
extern char lbl_82196582[];
extern void fn_82230110(Str_822CF300 *s, const char *text);
extern void fn_82230218(Str_822CF300 *dst, Str_822CF300 *src, unsigned int pos, unsigned int count);
extern void fn_82230300(Str_822CF300 *s, int built, unsigned int newSize);
extern unsigned int fn_822CF640(Self_822CF300 *self, int idleSet);
extern void fn_822FB198(Anim_822CF300 *anim, Str_822CF300 *name);
extern unsigned char fn_822BD338(char *state, const char *name);
extern void fn_822C8C08(Model_822CF300 *model, const char *name);

static __forceinline int Random(void)
{
    lbl_83265A28 = lbl_83265A28 * 0x19660D + 0x3C6EF35F;
    return lbl_83265A28;
}

void fn_822CF300(Self_822CF300 *self, int idleSet)
{
    Model_822CF300 *model;
    unsigned int pose;
    int newSet;
    const char *idle;
    Str_822CF300 crouchToUpright;
    Str_822CF300 uprightToCrouch;
    Str_822CF300 prejumpNetInto;
    Str_822CF300 emptyName;
    Str_822CF300 idleDefault;
    Str_822CF300 idleFatigued;
    Str_822CF300 idlePreblock;
    Str_822CF300 idleWaitingForServe;
    Str_822CF300 idlePreshot;
    Str_822CF300 idleServe;
    Str_822CF300 prejumpInto;
    Str_822CF300 prejumpNetPause;

    if (idleSet == self->idleSet) {
        return;
    }
    model = self->model;
    if (self->fatigue < 0.5f && Random() > 0 && idleSet == 0) {
        newSet = 1;
    } else {
        newSet = idleSet;
    }
    pose = fn_822CF640(self, newSet);
    if (self->poseTime > self->poseDelay) {
        switch (pose) {
        case 0:
            fn_82230110(&crouchToUpright, "into_idleset_crouchtoupright");
            fn_82230218(&model->anim->transition, &crouchToUpright, 0, 0xFFFFFFFF);
            fn_82230300(&crouchToUpright, 1, 0);
            break;
        case 1:
            fn_82230110(&uprightToCrouch, "into_idleset_uprighttocrouch");
            fn_82230218(&model->anim->transition, &uprightToCrouch, 0, 0xFFFFFFFF);
            fn_82230300(&uprightToCrouch, 1, 0);
            break;
        case 3:
            fn_82230110(&prejumpNetInto, "prejumpnet_into");
            fn_82230218(&model->anim->transition, &prejumpNetInto, 0, 0xFFFFFFFF);
            fn_82230300(&prejumpNetInto, 1, 0);
            break;
        case 4:
            fn_82230110(&emptyName, lbl_82196582);
            fn_82230218(&model->anim->transition, &emptyName, 0, 0xFFFFFFFF);
            fn_82230300(&emptyName, 1, 0);
            break;
        }
        self->poseTime = 0.0f;
        self->pose = pose;
    }
    self->idleRate = 0.0f;
    switch (newSet) {
    case 6:
        fn_82230110(&prejumpInto, "prejump_into");
        fn_822FB198(model->anim, &prejumpInto);
        fn_82230300(&prejumpInto, 1, 0);
        break;
    case 7:
        fn_82230110(&prejumpNetPause, "prejumpnet_pause");
        fn_822FB198(model->anim, &prejumpNetPause);
        fn_82230300(&prejumpNetPause, 1, 0);
        self->idleRate = -1.0f;
        break;
    case 0:
        fn_82230110(&idleDefault, "idleset_default");
        fn_822FB198(model->anim, &idleDefault);
        fn_82230300(&idleDefault, 1, 0);
        break;
    case 1:
        fn_82230110(&idleFatigued, "idleset_fatigued");
        fn_822FB198(model->anim, &idleFatigued);
        fn_82230300(&idleFatigued, 1, 0);
        break;
    case 2:
        fn_82230110(&idlePreblock, "idleset_preblock");
        fn_822FB198(model->anim, &idlePreblock);
        fn_82230300(&idlePreblock, 1, 0);
        break;
    case 3:
        fn_82230110(&idleWaitingForServe, "idleset_waitingforserve");
        fn_822FB198(model->anim, &idleWaitingForServe);
        fn_82230300(&idleWaitingForServe, 1, 0);
        break;
    case 4:
        fn_82230110(&idlePreshot, "idleset_preshot");
        fn_822FB198(model->anim, &idlePreshot);
        fn_82230300(&idlePreshot, 1, 0);
        break;
    case 5:
        fn_82230110(&idleServe, "idleset_serve");
        fn_822FB198(model->anim, &idleServe);
        fn_82230300(&idleServe, 1, 0);
        break;
    }
    self->idleSet = newSet;
    idle = "idle";
    if (fn_822BD338(self->model->state + 4, idle) != 0 && self->model->busy == 0) {
        fn_822C8C08(self->model, idle);
    }
}
