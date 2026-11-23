typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Ball_82317948 {
    char pad0[0x28];
    int side; /* 0x28 */
    int zone; /* 0x2c */
} Ball_82317948;

typedef struct Event_82317948 {
    __vector4 position; /* 0x00 */
    char pad10[0x10];
    Ball_82317948 *ball; /* 0x20 */
    char pad24[4];
    int bounced; /* 0x28 */
    int out;     /* 0x2c */
} Event_82317948;

typedef struct Call_82317948 {
    __vector4 position; /* 0x00 */
    int bounced;        /* 0x10 */
    int side;           /* 0x14 */
    int zone;           /* 0x18 */
    int kind;           /* 0x1c */
} Call_82317948;

typedef struct Court_82317948 {
    char pad0[0x80];
    __vector4 center; /* 0x80 */
    char pad90[0x15c];
    int doubles; /* 0x1ec */
} Court_82317948;

typedef struct Rules_82317948 {
    char pad0[0x42c];
    int mode; /* 0x42c */
} Rules_82317948;

typedef struct Self_82317948 {
    char pad0[0xc];
    Court_82317948 *court; /* 0x0c */
    Rules_82317948 *rules; /* 0x10 */
    char pad14[0x64c];
    int replay; /* 0x660 */
} Self_82317948;

int fn_82317948(Self_82317948 *self, Event_82317948 *event, int serve, Call_82317948 *call)
{
    __vector4 offset;
    __vector4 dot;
    float distance;
    int out;
    int kind;

    offset = __vsubfp(self->court->center, event->position);
    dot = __vmsum3fp(offset, offset);
    distance = dot.vector4_f32[0];
    out = event->out;
    if (event->bounced == 0 && out == 0 && distance > 100.0f) {
        out = 1;
    }
    if (out != 0) {
        call->position = event->position;
        call->side = event->ball->side;
        call->zone = event->ball->zone;
        call->bounced = event->bounced;
        if (self->court->doubles != 0) {
            call->kind = 5;
            if (distance > 225.0f) {
                call->kind = 7;
            }
            if (self->rules->mode == 1 || self->rules->mode == 3) {
                call->kind = 7;
            }
        } else if (event->bounced == 1) {
            call->kind = 3;
        } else {
            kind = 3;
            if (distance > 100.0f) {
                kind = 5;
                if (distance > 400.0f) {
                    kind = 7;
                }
            }
            call->kind = kind;
            if (kind == 3 && serve == 0) {
                call->kind = 5;
            }
        }
        if (self->replay == 1) {
            kind = call->kind;
            switch (kind) {
            case 5:
                kind = 6;
                break;
            case 7:
                kind = 8;
                break;
            }
            call->kind = kind;
        }
        return 1;
    }
    return 0;
}
