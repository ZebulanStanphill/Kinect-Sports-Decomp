typedef struct Blend_8227EE60 {
    char pad0[0x3c];
    float weights[1]; /* 0x3c */
} Blend_8227EE60;

typedef struct Target_8227EE60 {
    int slot; /* 0x0 */
    char pad4[0x38];
    unsigned int percent; /* 0x3c */
    char pad40[0xc];
    Blend_8227EE60 **blendsBegin; /* 0x4c */
    Blend_8227EE60 **blendsEnd;   /* 0x50 */
} Target_8227EE60;

typedef struct Fader_8227EE60 {
    char pad0[0x2c];
    int current; /* 0x2c */
    char pad30[0x4];
    int busy; /* 0x34 */
    char pad38[0x18];
    float time;     /* 0x50 */
    float duration; /* 0x54 */
} Fader_8227EE60;

extern int fn_8227F020(Fader_8227EE60 *self, Target_8227EE60 *target, int *index);
extern void fn_8227E950(Fader_8227EE60 *self, Target_8227EE60 *target, int index);
extern void fn_8227EB10(Fader_8227EE60 *self, unsigned int flag);
extern void fn_8227EA48(Fader_8227EE60 *self);

void fn_8227EE60(Fader_8227EE60 *self, Target_8227EE60 *target, float delta)
{
    int found;
    float duration;
    unsigned int percent;
    float time;
    Blend_8227EE60 **blend;

    {
        int index;

        index = -1;
        if (self->busy != 0) {
            return;
        }
        found = fn_8227F020(self, target, &index);
        if (found != 0 && index != self->current) {
            fn_8227E950(self, target, index);
        }
    }
    if (found != 0) {
        self->time += delta;
        duration = self->duration;
        time = self->time >= 0.0f ? self->time : 0.0f;
        time = time - duration >= 0.0f ? duration : time;
        self->time = time;
        time = time * 100.0f;
        percent = (unsigned int)(time / duration);
        fn_8227EB10(self, percent);
        target->percent = percent;
        if (percent >= 100) {
            for (blend = target->blendsBegin; blend != target->blendsEnd; blend++) {
                (*blend)->weights[target->slot] = 0.0f;
            }
            fn_8227EA48(self);
        }
    } else if (target != 0) {
        fn_8227E950(self, target, -1);
    }
}
