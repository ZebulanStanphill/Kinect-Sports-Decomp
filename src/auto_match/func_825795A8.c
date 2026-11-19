typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

extern const float lbl_821954B0[];

typedef struct PathPoint_825795A8 {
    unsigned int node; /* 0x0 */
    int pad4;          /* 0x4 */
    int pad8;          /* 0x8 */
} PathPoint_825795A8;

typedef struct Node_825795A8 {
    char pad0[0x74];
    unsigned int id; /* 0x74 */
} Node_825795A8;

typedef struct Path_825795A8 {
    void *graph; /* 0x0 */
    int count;   /* 0x4 */
    char pad8[0x18c - 0x8];
    char search[0x14];        /* 0x18c */
    unsigned int searchLimit; /* 0x1a0 */
} Path_825795A8;

extern int fn_825792D8(void *graph, __vector4 *from, __vector4 *to, float radius, int flags);
extern Node_825795A8 *fn_825797A0(Path_825795A8 *self);
extern int fn_825CD180(void *graph, __vector4 *from, __vector4 *to, int mode, Node_825795A8 *node,
                       void *search, unsigned int limit);

int fn_825795A8(Path_825795A8 *self, __vector4 *from, __vector4 *to, int mode)
{
    __vector4 target = *to;
    __vector4 delta;
    __vector4 lengthSquared;
    Node_825795A8 *node;
    int result;

    self->count = 0;
    delta = __vsubfp(*from, target);
    lengthSquared = __vmsum3fp(delta, delta);
    if (!(lengthSquared.vector4_f32[0] > lbl_821954B0[0x74])) {
        *to = *from;
        return 0;
    }
    if (fn_825792D8(self->graph, from, to, 0.0f, 1) == 0) {
        return 0;
    }
    node = fn_825797A0(self);
    result = fn_825CD180(self->graph, from, to, mode, node, self->search, self->searchLimit);
    if (result != 0) {
        ((PathPoint_825795A8 *)self)[self->count + 1].node = node->id;
        self->count++;
    }
    return result;
}
