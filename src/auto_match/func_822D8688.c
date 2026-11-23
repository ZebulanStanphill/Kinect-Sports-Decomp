typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Body_822D8688 {
    char pad00[0x10];
    __vector4 pos; /* 0x10 */
    char pad20[0x20];
    float limit; /* 0x40 */
    char pad44[4];
    float angularLimit; /* 0x48 */
} Body_822D8688;

typedef struct Channel_822D8688 {
    float start;   /* 0x00 */
    float end;     /* 0x04 */
    float current; /* 0x08 */
} Channel_822D8688;

typedef struct Anim_822D8688 {
    char pad00[0x18];
    Channel_822D8688 channels[6]; /* 0x18 */
} Anim_822D8688;

typedef struct Light_822D8688 {
    char pad00[0x118];
    int on; /* 0x118 */
} Light_822D8688;

typedef struct Lights_822D8688 {
    char pad00[0xc];
    Light_822D8688 *light; /* 0xc */
} Lights_822D8688;

typedef struct Settings_822D8688 {
    char pad00[0x24];
    int animate; /* 0x24 */
    char pad28[0xf0];
    Lights_822D8688 *lights; /* 0x118 */
    char pad11C[0x15c];
    float level; /* 0x278 */
} Settings_822D8688;

typedef struct Self_822D8688 {
    char pad00[0x24];
    Body_822D8688 *body; /* 0x24 */
    char pad28[0x2c];
    Settings_822D8688 *settings; /* 0x54 */
    char pad58[0x20];
    int moving;          /* 0x78 */
    int watching;        /* 0x7c */
    int done;            /* 0x80 */
    int open;            /* 0x84 */
    Anim_822D8688 *anim; /* 0x88 */
    char pad8C[0x4c];
    float delay; /* 0xd8 */
    int padDC;
    int strict; /* 0xe0 */
} Self_822D8688;

extern float lbl_831CD820[];
extern __vector4 fn_825613E0(__vector4 v, float lo, float hi);
extern void fn_822C6938(Body_822D8688 *body, __vector4 v);
extern void fn_8234E808(Anim_822D8688 *anim);

static __forceinline __vector4 Replicate(float s)
{
    return __vspltw(__lvlx(&s, 0), 0);
}

static __forceinline void Blend(Anim_822D8688 *anim, float weight)
{
    Channel_822D8688 *channel;

    for (channel = anim->channels; channel != anim->channels + 6; channel++) {
        channel->current = (channel->end - channel->start) * weight + channel->start;
    }
    fn_8234E808(anim);
}

void fn_822D8688(Self_822D8688 *self, __vector4 *in, float elapsed)
{
    Body_822D8688 *body;
    float limit;
    float threshold;

    if (self->moving != 0 && self->done == 0) {
        body = self->body;
        limit = body->limit;
        body->pos = fn_825613E0(__vmulfp(in[0], Replicate(body->limit)), -limit, limit);
        fn_822C6938(body, __vmulfp(in[1], Replicate(body->angularLimit)));
    }
    if (self->settings->animate != 0) {
        if (self->open != 0) {
            Blend(self->anim, 1.0f);
        } else {
            Blend(self->anim, 0.0f);
        }
    }
    if (self->watching != 0) {
        if (self->strict != 0) {
            threshold = lbl_831CD820[2];
        } else {
            threshold = lbl_831CD820[0];
        }
        if (self->delay > 0.0f) {
            if (self->settings->lights->light != 0) {
                self->settings->lights->light->on = 1;
            }
            self->delay -= elapsed;
        } else if (self->settings->level < threshold) {
            if (self->settings->lights->light != 0) {
                self->settings->lights->light->on = 1;
            }
        } else {
            if (self->settings->lights->light != 0) {
                self->settings->lights->light->on = 0;
            }
        }
        if (self->settings->level < threshold) {
            self->done = 1;
        }
    }
}
