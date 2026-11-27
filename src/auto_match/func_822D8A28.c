#include "xdk/vectorintrinsics.h"

typedef struct Body_822D8A28 {
    char pad00[0x10];
    __vector4 pos; /* 0x10 */
    char pad20[0x20];
    float limit; /* 0x40 */
    char pad44[4];
    float angularLimit; /* 0x48 */
} Body_822D8A28;

typedef struct Channel_822D8A28 {
    float start;   /* 0x00 */
    float end;     /* 0x04 */
    float current; /* 0x08 */
} Channel_822D8A28;

typedef struct Anim_822D8A28 {
    char pad00[0x18];
    Channel_822D8A28 channels[6]; /* 0x18 */
} Anim_822D8A28;

typedef struct Settings_822D8A28 {
    char pad00[0x24];
    int animate; /* 0x24 */
} Settings_822D8A28;

typedef struct Self_822D8A28 {
    char pad00[0x24];
    Body_822D8A28 *body; /* 0x24 */
    char pad28[0x2c];
    Settings_822D8A28 *settings; /* 0x54 */
    char pad58[0x24];
    int moving;          /* 0x7c */
    Anim_822D8A28 *anim; /* 0x80 */
} Self_822D8A28;

extern __vector4 fn_825613E0(__vector4 v, float lo, float hi);
extern void fn_822C6938(Body_822D8A28 *body, __vector4 v);
extern void fn_8234E808(Anim_822D8A28 *anim);

static __forceinline __vector4 Replicate(float s)
{
    return __vspltw(__lvlx(&s, 0), 0);
}

void fn_822D8A28(Self_822D8A28 *self, __vector4 *in)
{
    Body_822D8A28 *body;
    float limit;
    Anim_822D8A28 *anim;
    Channel_822D8A28 *channel;

    if (self->moving != 0) {
        body = self->body;
        limit = body->limit;
        body->pos = fn_825613E0(__vmulfp(in[0], Replicate(body->limit)), -limit, limit);
        fn_822C6938(body, __vmulfp(in[1], Replicate(body->angularLimit)));
    }
    if (self->settings->animate != 0) {
        anim = self->anim;
        for (channel = anim->channels; channel != anim->channels + 6; channel++)
            channel->current = (channel->end - channel->start) + channel->start;
        fn_8234E808(anim);
    }
}
