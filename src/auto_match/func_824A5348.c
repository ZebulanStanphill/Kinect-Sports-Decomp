typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Body_824A5348 {
    __vector4 vectors[64];
} Body_824A5348;

typedef struct Node_824A5348 {
    char pad[0x40];
    Body_824A5348 *body; /* 0x40 */
} Node_824A5348;
typedef struct Source_824A5348 Source_824A5348;

typedef struct Vtable_824A5348 {
    void (*get)(Source_824A5348 *, int *, int *);
    void (*read)(Source_824A5348 *, int, Node_824A5348 **);
} Vtable_824A5348;

struct Source_824A5348 {
    Vtable_824A5348 *vt;
};

typedef struct State_824A5348 {
    char pad[0x38];
    unsigned char side; /* 0x38 */
    char gap[3];
    float stillRadius;  /* 0x3c */
    float minReach;     /* 0x40 */
    float activeDecay;  /* 0x44 */
    float idleDecay;    /* 0x48 */
    int maxStillFrames; /* 0x4c */
    char gap2[0x18];
    int stillFrames; /* 0x68 */
    float reach;     /* 0x6c */
    char gap3[4];
    unsigned char active; /* 0x74 */
} State_824A5348;

void fn_824A5348(State_824A5348 *self, Source_824A5348 *src)
{
    int index;
    Node_824A5348 *node;
    int first;
    Node_824A5348 *prevNode;
    __vector4 value;
    __vector4 hand;
    float headY;
    float decay;
    float reach;
    Body_824A5348 *body;
    int joint;
    int prev;
    __vector4 *joints;
    __vector4 delta;

    src->vt->get(src, &first, &index);
    src->vt->read(src, index, &node);
    joint = self->side ? 15 : 10;
    body = node->body;
    value = body->vectors[20];
    headY = value.v[1];
    joints = &body->vectors[joint * 4];
    hand = joints[0];
    value = hand;
    self->active = value.v[1] > headY;
    if (self->active) {
        prev = index - 1;
        src->vt->read(src, prev < first ? first : prev, &prevNode);
        joint = self->side ? 15 : 10;
        delta = __vsubfp(prevNode->body->vectors[joint * 4], hand);
        value = __vmsum3fp(delta, delta);
        if (value.v[0] < self->stillRadius * self->stillRadius) {
            self->stillFrames++;
        }
        if (self->stillFrames > self->maxStillFrames) {
            self->stillFrames = 0;
            self->active = 0;
        }
    }
    if (self->active) {
        value = joints[1];
        value.v[2] = value.v[2] * 2.0f;
        value = __vmsum3fp(value, value);
        if (value.v[0] > self->reach) {
            self->reach = value.v[0];
        }
        if (self->reach < self->minReach) {
            self->active = 0;
        }
    }
    if (self->active) {
        decay = self->activeDecay;
    } else {
        decay = self->idleDecay;
    }
    reach = self->reach - decay;
    reach = reach >= 0.0f ? reach : 0.0f;
    self->reach = reach - 100.0f >= 0.0f ? 100.0f : reach;
    if (!self->active) {
        self->stillFrames = 0;
        self->active = 0;
    }
}
