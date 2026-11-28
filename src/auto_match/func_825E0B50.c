typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
double sqrt(double);

typedef struct Smoother_825E0B50 {
    float values[9]; /* 0x00 */
    int isAngle;     /* 0x24 */
} Smoother_825E0B50;

typedef struct Sample_825E0B50 {
    int hit;      /* 0x00 */
    float height; /* 0x04 */
    float slope;  /* 0x08 */
    int padc;
    __vector4 position; /* 0x10 */
    float lift;         /* 0x20 */
    char pad24[0x30 - 0x24];
} Sample_825E0B50;

typedef struct Float4_825E0B50 {
    float x;
    float y;
    float z;
    float w;
} Float4_825E0B50;

typedef struct Track_825E0B50 {
    char pad000[0x80];
    Sample_825E0B50 samples[12]; /* 0x080 */
    unsigned int index;          /* 0x2c0 */
    Smoother_825E0B50 pitch;     /* 0x2c4 */
    int full;                    /* 0x2ec */
    float lastHeight;            /* 0x2f0 */
    float baseHeight;            /* 0x2f4 */
    float heightRange;           /* 0x2f8 */
    int pad2fc;
    Float4_825E0B50 average; /* 0x300 */
} Track_825E0B50;

typedef struct TargetList_825E0B50 TargetList_825E0B50;

typedef struct Game_825E0B50 {
    char pad000[0x8c4];
    TargetList_825E0B50 *targets; /* 0x8c4 */
} Game_825E0B50;

typedef struct Scene_825E0B50 {
    char pad00[0x4c];
    Game_825E0B50 *game; /* 0x4c */
} Scene_825E0B50;

typedef struct Owner_825E0B50 {
    char pad000[0x8c];
    float height; /* 0x08c */
    char pad090[4];
    float pitch; /* 0x094 */
    char pad098[0xa4 - 0x98];
    float speed; /* 0x0a4 */
    char pad0a8[0x118 - 0xa8];
    Scene_825E0B50 *scene; /* 0x118 */
} Owner_825E0B50;

typedef struct Body_825E0B50 {
    char pad00[0x20];
    __vector4 position; /* 0x20 */
} Body_825E0B50;

typedef struct Limits_825E0B50 {
    char pad0[8];
    float maxPitch; /* 0x08 */
} Limits_825E0B50;

typedef struct Motion_825E0B50 {
    char pad00[0xd0];
    float speed; /* 0xd0 */
} Motion_825E0B50;

typedef struct Self_825E0B50 {
    Owner_825E0B50 *owner; /* 0x00 */
    Body_825E0B50 *body;   /* 0x04 */
    int unk08;
    Limits_825E0B50 *limits; /* 0x0c */
    char pad10[0x20 - 0x10];
    Motion_825E0B50 *motion; /* 0x20 */
    char pad24[0x34 - 0x24];
    Track_825E0B50 *track; /* 0x34 */
} Self_825E0B50;

extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern int fn_8261F100(void *probe, const __vector4 *position, float lift, float *height);
extern int fn_82577EE0(TargetList_825E0B50 *list, float *position, float *best, void *hit);
extern float fn_82809400(float x);
extern int fn_8255A0D0(__vector4 v, float *out);
extern Smoother_825E0B50 *fn_82621500(Smoother_825E0B50 *self, float value);
extern void fn_82621548(Smoother_825E0B50 *self, float dt);

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_825E0B50(Self_825E0B50 *self, void *probe, float dt)
{
    unsigned int index;
    float found;
    __vector4 position;
    __vector4 delta;
    float bodyHeight;
    float blend;
    float height;
    float distance;
    float last;
    float sum;
    float pitch;
    float speed;
    float excess;
    float shift;
    float *samplePosition;
    Scene_825E0B50 *scene;
    TargetList_825E0B50 *targets;
    int i;

    if (self->motion->speed == 0.0f) {
        self->track->full = 0;
        self->track->index = 0;
    } else {
        position = self->body->position;
        speed = self->owner->speed;
        index = self->track->index;
        bodyHeight = position.vector4_f32[1];
        found = bodyHeight;
        blend = fn_82539560(speed, 20.0f, 50.0f, 0.0f, 1.0f);
        self->track->samples[index].hit = fn_8261F100(probe, &self->track->samples[index].position,
                                                      self->track->samples[index].lift, &found);
        if (index < 3) {
            height = Max(found, self->body->position.vector4_f32[1] - self->owner->height);
        } else {
            height = found;
        }
        if ((height - self->track->baseHeight) / self->track->heightRange > 1.3f) {
            height = bodyHeight;
        }
        found = 0.0f;
        scene = self->owner->scene;
        if (scene != 0 && (int)scene->game != 0) {
            samplePosition = self->track->samples[index].position.vector4_f32;
            targets = scene->game->targets;
            if (targets != 0 && fn_82577EE0(targets, samplePosition, &found, 0) != 0 && found > height &&
                found < bodyHeight + 2.0f) {
                height = found;
            }
        }
        self->track->samples[index].height = height;
        delta = __vsubfp(position, self->track->samples[index].position);
        distance = (float)sqrt(delta.vector4_f32[0] * delta.vector4_f32[0] +
                               delta.vector4_f32[2] * delta.vector4_f32[2]);
        if (distance > 0.1f) {
            self->track->samples[index].slope = fn_82809400((height - bodyHeight) / distance);
        } else {
            self->track->samples[index].slope = 0.0f;
        }
        if (self->track->index == 11) {
            self->track->full = 1;
        }
        self->track->index++;
        self->track->index %= 12;
        last = self->track->lastHeight;
        self->track->lastHeight = bodyHeight;
        shift = bodyHeight - last;
        if (self->track->full != 0) {
            sum = 0.0f;
            for (i = 0; i < 12; i++) {
                self->track->samples[i].height += shift;
                sum = self->track->samples[i].height + sum;
            }
            found = 0.0f;
            self->track->average.y = sum * 0.083333336f;
            position.vector4_f32[1] = self->track->samples[1].height;
            fn_8255A0D0(__vsubfp(position, *(const __vector4 *)&self->track->average), &found);
            pitch = found;
            excess = pitch - fn_82539560(pitch, 0.0f, -1.5707964f, 0.0f, self->limits->maxPitch);
            fn_82621548(
                fn_82621500(&self->track->pitch, (1.0f - blend) * excess + self->owner->pitch * blend), dt);
        }
    }
}
