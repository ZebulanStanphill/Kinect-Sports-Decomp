extern unsigned __int64 __mftb();

typedef struct {
    const char *name;
    unsigned time, pad;
} TimerEntry_82DA3FB0;

typedef struct {
    void *pad;
    char *current;
    void *pad2;
    char *end;
} TimerStream_82DA3FB0;

extern TimerStream_82DA3FB0 *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

typedef struct StepInfo_82DA3FB0 {
    __declspec(align(16)) float startTime; /* 0x00 */
    float endTime;                         /* 0x04 */
    float deltaTime;                       /* 0x08 */
    float invDeltaTime;                    /* 0x0c */
} StepInfo_82DA3FB0;

typedef struct CollisionInput_82DA3FB0 {
    char pad0[0x50];
    StepInfo_82DA3FB0 stepInfo; /* 0x50 */
} CollisionInput_82DA3FB0;

struct Listener_82DA3FB0;

typedef struct {
    void *slots[4];
    void (*onStep)(struct Listener_82DA3FB0 *, void *world, StepInfo_82DA3FB0 *info); /* 0x10 */
} ListenerVt_82DA3FB0;

typedef struct Listener_82DA3FB0 {
    ListenerVt_82DA3FB0 *vt;
} Listener_82DA3FB0;

typedef struct World_82DA3FB0 {
    char pad0[0x4c];
    Listener_82DA3FB0 *listener; /* 0x4c */
    char pad50[0x28];
    CollisionInput_82DA3FB0 *collisionInput; /* 0x78 */
    char pad7c[0x154];
    StepInfo_82DA3FB0 stepInfo; /* 0x1d0 */
} World_82DA3FB0;

typedef struct Stepper_82DA3FB0 {
    char pad0[0xc];
    World_82DA3FB0 *world; /* 0x0c */
    unsigned char active;  /* 0x10 */
    char pad11[0x7];
    float currentTime; /* 0x18 */
    float lastDelta;   /* 0x1c */
    char pad20[0x8];
    unsigned int result; /* 0x28 */
} Stepper_82DA3FB0;

extern unsigned int fn_82DA3900(Stepper_82DA3FB0 *self, StepInfo_82DA3FB0 *info);

static __forceinline void InitStepInfo(StepInfo_82DA3FB0 *info, float startTime, float endTime)
{
    float delta = endTime - startTime;
    float inverse = 0.0f;

    info->startTime = startTime;
    info->endTime = endTime;
    info->deltaTime = delta;
    if (delta != 0.0f) {
        inverse = 1.0f / delta;
    }
    info->invDeltaTime = inverse;
}

unsigned int fn_82DA3FB0(Stepper_82DA3FB0 *self, float delta)
{
    TimerStream_82DA3FB0 *stream;
    TimerEntry_82DA3FB0 *entry;
    StepInfo_82DA3FB0 info;
    unsigned int result;

    stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        entry = (TimerEntry_82DA3FB0 *)stream->current;
        entry->name = "TtPhysics";
        entry->time = (unsigned)__mftb();
        stream->current = (char *)(entry + 1);
    }
    self->lastDelta = delta;
    InitStepInfo(&info, self->currentTime, self->currentTime + delta);
    self->world->stepInfo = info;
    self->world->collisionInput->stepInfo = info;
    self->world->listener->vt->onStep(self->world->listener, self->world, &info);
    result = fn_82DA3900(self, &info);
    self->result = result;
    if (result == 0) {
        self->active = 0;
    }
    stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        entry = (TimerEntry_82DA3FB0 *)stream->current;
        entry->name = "Et";
        entry->time = (unsigned)__mftb();
        stream->current = (char *)(entry + 1);
    }
    return result;
}
