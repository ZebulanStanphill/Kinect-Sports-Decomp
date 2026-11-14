#define __lwsync() __emit(0x7C2004AC)

typedef struct Sink_826F8C18 Sink_826F8C18;
typedef struct SinkVtbl_826F8C18 {
    void *pad0[2];
    void (*put)(Sink_826F8C18 *self, int value, int mapped);
} SinkVtbl_826F8C18;
struct Sink_826F8C18 {
    SinkVtbl_826F8C18 *vt;
};

typedef struct Source_826F8C18 Source_826F8C18;
typedef struct SourceVtbl_826F8C18 {
    void *pad0[0x17];
    int (*get)(Source_826F8C18 *self);
} SourceVtbl_826F8C18;
struct Source_826F8C18 {
    SourceVtbl_826F8C18 *vt;
};

typedef struct Owner_826F8C18 {
    char pad0[0x68];
    Source_826F8C18 *source;
} Owner_826F8C18;

typedef struct Target_826F8C18 {
    char pad0[0x48];
    char map[0x10];
    Sink_826F8C18 *sink;
    char pad5C[0x1c];
    unsigned char skip;
} Target_826F8C18;

typedef struct Task_826F8C18 {
    char pad0[0x20];
    int state;
} Task_826F8C18;

typedef struct Self_826F8C18 {
    char pad0[0xc];
    Owner_826F8C18 *owner;
    Target_826F8C18 *target;
    Task_826F8C18 *task;
} Self_826F8C18;

extern int fn_82696958(void *map, int value);

int fn_826F8C18(Self_826F8C18 *self)
{
    int state;
    unsigned char ready;
    int value;
    Sink_826F8C18 *sink;

    state = self->task->state;
    __lwsync();
    ready = state == 1;
    if (self->target->skip && ready) {
        return 1;
    }
    if (!ready) {
        return 0;
    }
    value = self->owner->source->vt->get(self->owner->source);
    sink = self->target->sink;
    sink->vt->put(sink, value, fn_82696958(self->target->map, value));
    return 1;
}
