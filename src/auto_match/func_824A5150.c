typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

__vector4 __VMXGetReg(int);

typedef struct Body_824A5150 {
    __vector4 vectors[64];
} Body_824A5150;

typedef struct Node_824A5150 {
    char pad[0x40];
    Body_824A5150 *body;
} Node_824A5150;
typedef struct Source_824A5150 Source_824A5150;

typedef struct Vtable_824A5150 {
    void (*get)(Source_824A5150 *, void *, int *);
    void (*read)(Source_824A5150 *, int, Node_824A5150 **);
} Vtable_824A5150;

struct Source_824A5150 {
    Vtable_824A5150 *vt;
};

typedef struct State_824A5150 {
    char pad[0x38];
    unsigned char side;
    char gap[3];
    float threshold, limit;
    int active;
    char gap2[8];
    __vector4 value;
} State_824A5150;

void fn_824A5150(State_824A5150 *self, Source_824A5150 *src)
{
    int index;
    Node_824A5150 *node;
    char key[4];
    __vector4 value;
    float height, delta;
    Body_824A5150 *body;
    int joint;
    src->vt->get(src, key, &index);
    src->vt->read(src, index, &node);
    joint = self->side ? 15 : 10;
    body = node->body;
    value = body->vectors[12];
    height = value.v[2];
    value = body->vectors[joint * 4];
    delta = value.v[2] - height;
    value = body->vectors[joint * 4 + 1];
    self->active = delta > self->threshold;
    if (self->active && value.v[0] >= -self->limit && value.v[0] < self->limit)
        self->value = value;
    else
        self->value = __VMXGetReg(77);
}
