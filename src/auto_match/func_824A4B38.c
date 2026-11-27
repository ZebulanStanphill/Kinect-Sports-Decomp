#include "xdk/vectorintrinsics.h"

extern const float lbl_821CA45C[2];

typedef struct Body_824A4B38 {
    __vector4 vectors[64];
} Body_824A4B38;

typedef struct Node_824A4B38 {
    char pad[0x40];
    Body_824A4B38 *body; /* 0x40 in Node */
} Node_824A4B38;
typedef struct Source_824A4B38 Source_824A4B38;

typedef struct Vtable_824A4B38 {
    void (*get)(Source_824A4B38 *, void *, int *);
    void (*read)(Source_824A4B38 *, int, Node_824A4B38 **);
} Vtable_824A4B38;

struct Source_824A4B38 {
    Vtable_824A4B38 *vt;
};

typedef struct State_824A4B38 {
    char pad[0x30];
    float result; /* 0x30 */
    char pad34[4];
    unsigned char side; /* 0x38 */
    char gap[3];
    float threshold; /* 0x3c */
    float limit;     /* 0x40 */
    int active;      /* 0x44 */
    char gap2[8];
    __vector4 value; /* 0x50 */
} State_824A4B38;

void fn_824A4B38(State_824A4B38 *self, Source_824A4B38 *src)
{
    int index;
    Node_824A4B38 *node;
    char key[4];
    __vector4 value;
    float height;
    float delta;
    Body_824A4B38 *body;
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
    self->result = 0.0f;
    self->value = __VMXGetReg(77);
    if (self->active && value.v[1] < -self->limit) {
        self->value = value;
        self->result = lbl_821CA45C[1];
    }
}
