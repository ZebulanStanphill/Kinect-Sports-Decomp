long _InterlockedDecrement(long volatile *);
typedef struct Ref_824D2D78 Ref_824D2D78;

typedef struct Vtable_824D2D78 {
    void (*destroy)(Ref_824D2D78 *); /* 0x00 */
    void (*dispose)(Ref_824D2D78 *); /* 0x04 */
} Vtable_824D2D78;

struct Ref_824D2D78 {
    Vtable_824D2D78 *vtable; /* 0x00 */
    long strong;             /* 0x04 */
    long weak;               /* 0x08 */
};

typedef struct Pointer_824D2D78 {
    void *object;            /* 0x00 */
    Ref_824D2D78 *reference; /* 0x04 */
} Pointer_824D2D78;

typedef struct Node_824D2D78 {
    char pad00[0x10];
    float scale; /* 0x10 */
} Node_824D2D78;

typedef struct Desc_824D2D78 {
    char pad00[0x30];
    int world; /* 0x30 */
    int name;  /* 0x34 */
} Desc_824D2D78;

typedef struct Queue_824D2D78 {
    int first;  /* 0x00 */
    int last;   /* 0x04 */
    int end;    /* 0x08 */
    int count;  /* 0x0c */
    float time; /* 0x10 */
} Queue_824D2D78;

typedef struct Track_824D2D78 {
    int first;      /* 0x00 */
    int last;       /* 0x04 */
    int end;        /* 0x08 */
    int pad0c;      /* 0x0c */
    float time;     /* 0x10 */
    float blend;    /* 0x14 */
    float duration; /* 0x18 */
    float weight;   /* 0x1c */
} Track_824D2D78;

typedef struct Blend_824D2D78 {
    Queue_824D2D78 queue;  /* 0x00 */
    Track_824D2D78 trackA; /* 0x14 */
    Track_824D2D78 trackB; /* 0x34 */
    int state;             /* 0x54 */
} Blend_824D2D78;

typedef struct Actor_824D2D78 {
    void *vt; /* 0x000 */
    char pad004[0x1c];
    Node_824D2D78 *node; /* 0x020 */
    char pad024[0xbc];
    unsigned char visible; /* 0x0e0 */
    char pad0e1[0x0f];
    char partA[0x480];    /* 0x0f0 */
    char partB[0x480];    /* 0x570 */
    Blend_824D2D78 blend; /* 0x9f0 */
    int enabled;          /* 0xa48 */
    int pada4c;           /* 0xa4c */
    void *effect;         /* 0xa50 */
} Actor_824D2D78;

extern void fn_824CC840(Actor_824D2D78 *self, Desc_824D2D78 *desc);
extern void fn_824DB830(char *part, int primary, int world);
extern Pointer_824D2D78 *fn_82F514A0(Pointer_824D2D78 *, void *);
extern Pointer_824D2D78 *fn_82F514D8(Pointer_824D2D78 *, void *);
extern Pointer_824D2D78 *fn_82F51468(Pointer_824D2D78 *, void *);
extern Pointer_824D2D78 *fn_824D2AE8(Pointer_824D2D78 *, Pointer_824D2D78 *);
extern void fn_82517978(Pointer_824D2D78 *, void *, Ref_824D2D78 *, unsigned char);
extern Pointer_824D2D78 *fn_824D3760(Pointer_824D2D78 *, void *);
extern Pointer_824D2D78 *fn_824D3898(Pointer_824D2D78 *, void *);
extern int fn_824CD030(Actor_824D2D78 *self);
extern void *fn_82F53418(void *object, int *name, int flags);
extern void fn_822315A0(Ref_824D2D78 *);
extern char lbl_821C0D00[];
extern float lbl_831C3AF0[0x27];

static __forceinline void ReleaseWeak(Ref_824D2D78 **slot)
{
    if (*slot != 0) {
        Ref_824D2D78 *reference = *slot;
        if (_InterlockedDecrement(&reference->weak) == 0) {
            reference->vtable->dispose(reference);
        }
    }
}

static __forceinline void InitQueue(Queue_824D2D78 *queue)
{
    queue->first = 0;
    queue->last = 0;
    queue->end = 0;
    queue->count = 0;
    queue->time = 0.0f;
}

static __forceinline void InitTrack(Track_824D2D78 *track, float duration)
{
    track->first = 0;
    track->last = 0;
    track->end = 0;
    track->time = 0.0f;
    track->blend = 0.0f;
    track->duration = duration;
    track->weight = 0.0f;
}

static __forceinline void InitBlend(Blend_824D2D78 *blend)
{
    InitQueue(&blend->queue);
    InitTrack(&blend->trackA, lbl_831C3AF0[0x26]);
    InitTrack(&blend->trackB, lbl_831C3AF0[0x26]);
    blend->state = 0;
}

Actor_824D2D78 *fn_824D2D78(Actor_824D2D78 *self, Desc_824D2D78 *desc)
{
    Pointer_824D2D78 shared;
    Pointer_824D2D78 created;
    Pointer_824D2D78 sourceA;
    Pointer_824D2D78 sourceB;
    Pointer_824D2D78 effect;
    Pointer_824D2D78 root;
    Pointer_824D2D78 *source;
    void *found;
    void *result;

    fn_824CC840(self, desc);
    self->visible = 1;
    self->vt = lbl_821C0D00;
    fn_824DB830(self->partA, 1, desc->world);
    fn_824DB830(self->partB, 0, desc->world);
    InitBlend(&self->blend);
    self->enabled = 0;
    self->effect = 0;
    source = fn_82F514A0(&sourceA, self->node);
    shared.object = 0;
    shared.reference = 0;
    fn_82517978(&shared, source->object, source->reference, 0);
    fn_824D3760(&created, shared.object);
    ReleaseWeak(&created.reference);
    if (shared.reference != 0) {
        fn_822315A0(shared.reference);
    }
    ReleaseWeak(&sourceA.reference);
    source = fn_82F514D8(&sourceB, self->node);
    shared.object = 0;
    shared.reference = 0;
    fn_82517978(&shared, source->object, source->reference, 0);
    fn_824D3898(&created, shared.object);
    ReleaseWeak(&created.reference);
    if (shared.reference != 0) {
        fn_822315A0(shared.reference);
    }
    ReleaseWeak(&sourceB.reference);
    self->node->scale = 1.3089969f;
    if (fn_824CD030(self) != 0) {
        found = fn_82F53418(fn_824D2AE8(&effect, fn_82F51468(&root, self->node))->object, &desc->name, 1);
        result = 0;
        if (found != 0) {
            result = found;
        }
        self->effect = result;
        if (effect.reference != 0) {
            fn_822315A0(effect.reference);
        }
        ReleaseWeak(&root.reference);
    }
    return self;
}
