typedef struct AssertHooks_823520F0 {
    void *unk0;
    void *unk4;
    void (*report)(const char *func, const char *file, int line);
} AssertHooks_823520F0;

typedef struct Handle_823520F0 {
    void *p;
} Handle_823520F0;

typedef struct Owner_823520F0 {
    char pad[0x84C];
    void *ctx;
} Owner_823520F0;

typedef struct Sport_823520F0 {
    char pad00[8];
    int state;
    int prevState;
    char pad10[4];
    Owner_823520F0 *owner;
    char pad18[0x320];
    void *pending;
    float pendingTime;
    char pad340[0x20];
    Handle_823520F0 session;
    char pad364[4];
    float time;
    char pad36C[0x78];
    int needsInit;
} Sport_823520F0;

extern AssertHooks_823520F0 lbl_83276774;
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern void fn_8229E260(void *p);
extern void *fn_82535298(Handle_823520F0 *h, void *ctx, void *a, void *b);
extern void fn_82536288(Handle_823520F0 *h);

static int IsValid_823520F0(Handle_823520F0 *h)
{
    return h != 0 ? h->p != 0 : 0;
}

void fn_823520F0(Sport_823520F0 *self, float dt)
{
    Handle_823520F0 tmp;

    self->time += dt;
    if (self->needsInit != 0) {
        if (lbl_83276774.report != 0) {
            lbl_83276774.report("olympus::sport::Sport::TickActiveSessionBegin",
                                "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\sport\\sport.cpp", 0x8FD);
        }
        self->needsInit = 0;
    }
    if (self->pending != 0) {
        if (self->time < self->pendingTime) {
            return;
        }
        fn_8229E260(self->pending);
        self->pending = 0;
    }
    if (IsValid_823520F0(&self->session)) {
        tmp = self->session;
        tmp.p = fn_82535298(&tmp, self->owner->ctx, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&tmp);
    }
    if (self->state != 9) {
        self->prevState = self->state;
        self->state = 9;
    }
}
