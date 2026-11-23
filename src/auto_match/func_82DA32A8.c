typedef struct ProfEntry_82DA32A8 {
    const char *name;
    unsigned int time;
    unsigned int pad;
} ProfEntry_82DA32A8;

typedef struct ProfBuf_82DA32A8 {
    int unk0;
    ProfEntry_82DA32A8 *cur;
    int unk8;
    ProfEntry_82DA32A8 *end;
} ProfBuf_82DA32A8;

typedef struct StepInfo_82DA32A8 {
    float startTime;
    float endTime;
    float deltaTime;
    float invDeltaTime;
} StepInfo_82DA32A8;

typedef struct World_82DA32A8 {
    char pad0[0x184];
    int postCollideCallback; /* 0x184 */
} World_82DA32A8;

typedef struct Simulation_82DA32A8 Simulation_82DA32A8;

typedef struct SimulationVtbl_82DA32A8 {
    void *slots[13];
    void (*Collide)(Simulation_82DA32A8 *self, StepInfo_82DA32A8 *step); /* 0x34 */
} SimulationVtbl_82DA32A8;

struct Simulation_82DA32A8 {
    SimulationVtbl_82DA32A8 *vt; /* 0x00 */
    char pad4[0x8];
    World_82DA32A8 *world; /* 0x0c */
    unsigned char stepped; /* 0x10 */
    char pad11[0x3];
    float previousTime; /* 0x14 */
    float currentTime;  /* 0x18 */
    float stepSize;     /* 0x1c */
    char pad20[0x8];
    unsigned int status; /* 0x28 */
};

extern void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
extern void fn_82D88440(World_82DA32A8 *world, int a, int b);
extern void fn_82DAEB78(World_82DA32A8 *world, StepInfo_82DA32A8 *step);
extern unsigned int lbl_8323B4A0;
extern int lbl_8323B520;

static __forceinline void Prof_82DA32A8(const char *name)
{
    ProfBuf_82DA32A8 *b = (ProfBuf_82DA32A8 *)KeTlsGetValue(lbl_8323B4A0);
    ProfEntry_82DA32A8 *e = b->cur;
    if (e < b->end) {
        e->name = name;
        e->time = (unsigned int)__mftb();
        b->cur = e + 1;
    }
}

static __forceinline float SafeInverse(float value)
{
    if (value == 0.0f) {
        return 0.0f;
    }
    return 1.0f / value;
}

static __forceinline void InitStep(StepInfo_82DA32A8 *step, float start, float end)
{
    step->startTime = start;
    step->endTime = end;
    step->deltaTime = end - start;
    step->invDeltaTime = SafeInverse(step->deltaTime);
}

int fn_82DA32A8(Simulation_82DA32A8 *self)
{
    StepInfo_82DA32A8 step;

    fn_82D88440(self->world, 0, 1);
    if (self->status == 3) {
        InitStep(&step, self->previousTime, self->currentTime);
    } else {
        InitStep(&step, self->currentTime, self->currentTime + self->stepSize);
    }
    self->vt->Collide(self, &step);
    if (lbl_8323B520 == 1) {
        Prof_82DA32A8("Et");
        return self->status;
    }
    if (self->status == 2) {
        self->currentTime = self->currentTime + self->stepSize;
        if (self->world->postCollideCallback != 0) {
            Prof_82DA32A8("TtPostCollideCB");
            fn_82DAEB78(self->world, &step);
            Prof_82DA32A8("Et");
        }
        self->stepped = 1;
    }
    self->status = 0;
    return 0;
}
