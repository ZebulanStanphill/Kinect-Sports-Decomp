typedef struct Target_8234EDA8 Target_8234EDA8;

typedef struct TargetVtbl_8234EDA8 {
    void *slot0;
    int (*isValid)(Target_8234EDA8 *self); /* 0x04 */
} TargetVtbl_8234EDA8;

struct Target_8234EDA8 {
    TargetVtbl_8234EDA8 *vt; /* 0x00 */
};

typedef struct Source_8234EDA8 Source_8234EDA8;

typedef struct SourceVtbl_8234EDA8 {
    void *slots[27];
    int (*getLink)(Source_8234EDA8 *self, int *link, unsigned char *flags); /* 0x6c */
} SourceVtbl_8234EDA8;

struct Source_8234EDA8 {
    SourceVtbl_8234EDA8 *vt; /* 0x00 */
};

typedef struct Tracker_8234EDA8 {
    char pad0[0xd4];
    int x; /* 0xd4 */
    int y; /* 0xd8 */
} Tracker_8234EDA8;

typedef struct Self_8234EDA8 {
    void *owner; /* 0x00 */
    void *scene; /* 0x04 */
    char pad8[0x20];
    Source_8234EDA8 *source;   /* 0x28 */
    Target_8234EDA8 *target;   /* 0x2c */
    Tracker_8234EDA8 *tracker; /* 0x30 */
    int x;                     /* 0x34 */
    int y;                     /* 0x38 */
} Self_8234EDA8;

extern float lbl_8218E8E8;

extern void fn_8234EED8(Self_8234EDA8 *self);
extern unsigned char fn_82F51E28(Target_8234EDA8 *target);
extern void fn_82F520B0(Target_8234EDA8 *target, int link, unsigned char flags);
extern void *fn_8265C9E0(unsigned int size);
extern Tracker_8234EDA8 *fn_824A1C90(void *memory, Source_8234EDA8 *source, Target_8234EDA8 *target);
extern unsigned char fn_827F22D0(void *scene);
extern void fn_827F2D60(void *scene, Tracker_8234EDA8 *tracker, float time, int mode, int flags);

void fn_8234EDA8(Self_8234EDA8 *self, Target_8234EDA8 *target)
{
    int link;
    unsigned char flags;
    void *memory;
    Tracker_8234EDA8 *tracker;

    if (target != 0)
        target = target->vt->isValid(target) ? target : 0;
    if (target != self->target) {
        if (target != 0) {
            if (!fn_82F51E28(target) && self->source->vt->getLink(self->source, &link, &flags) != 0)
                fn_82F520B0(target, link, flags);
            memory = fn_8265C9E0(0xe0);
            tracker = memory ? fn_824A1C90(memory, self->source, target) : 0;
            fn_827F2D60(self->scene, tracker, fn_827F22D0(self->scene) ? 0.0f : lbl_8218E8E8, 0x12, 0);
            self->tracker = tracker;
        } else {
            fn_8234EED8(self);
        }
        self->target = target;
    }
    if (self->tracker != 0) {
        self->tracker->x = self->x;
        self->tracker->y = self->y;
    }
}
