typedef struct TimerEntry_82DA3488 {
    const char *name;
    unsigned int time;
    unsigned int unused;
} TimerEntry_82DA3488;

typedef struct TimerStream_82DA3488 {
    void *pad;
    TimerEntry_82DA3488 *current; /* 0x4 */
    void *pad2;
    TimerEntry_82DA3488 *end; /* 0xc */
} TimerStream_82DA3488;

typedef struct World_82DA3488 {
    char pad0[0x16c];
    int f16c; /* 0x16c */
} World_82DA3488;

typedef struct Action_82DA3488 {
    void *vt;
    int f04;
    int f08;
    World_82DA3488 *world; /* 0x0c */
    int f10;
    float time;   /* 0x14 */
    float target; /* 0x18 */
    int f1c;
    float limit;        /* 0x20 */
    float snapDistance; /* 0x24 */
    int f28;            /* 0x28 */
} Action_82DA3488;

extern unsigned __int64 __mftb();
extern TimerStream_82DA3488 *KeTlsGetValue(unsigned int);
extern double fabs(double);
extern unsigned int lbl_8323B4A0;
extern void fn_82DAE9A0(World_82DA3488 *world);

static __forceinline void timer(const char *name)
{
    TimerStream_82DA3488 *stream = KeTlsGetValue(lbl_8323B4A0);
    if (stream->current < stream->end) {
        TimerEntry_82DA3488 *entry = stream->current;
        entry->name = name;
        entry->time = (unsigned)__mftb();
        stream->current = entry + 1;
    }
}

int fn_82DA3488(Action_82DA3488 *self)
{
    float time;

    if (self->limit != -1.0f && fabs(self->limit - self->target) < self->snapDistance) {
        self->limit = self->target;
    }
    time = self->target;
    if (self->limit != -1.0f) {
        time = (self->target - self->limit >= 0.0f) ? self->limit : self->target;
    }
    self->time = time;
    if (self->time >= self->limit) {
        if (self->world->f16c != 0) {
            timer("TtPostSimCb");
            fn_82DAE9A0(self->world);
            timer("Et");
        }
    }
    self->f28 = 0;
    return 0;
}
