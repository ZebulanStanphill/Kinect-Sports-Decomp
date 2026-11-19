typedef struct Owner_822467D8 Owner_822467D8;

typedef struct Target_822467D8 Target_822467D8;

typedef struct TargetVtbl_822467D8 {
    void *slots[15];
    unsigned char (*IsActive)(Target_822467D8 *self); /* 0x3c */
} TargetVtbl_822467D8;

struct Target_822467D8 {
    TargetVtbl_822467D8 *vt;
};

typedef struct Context_822467D8 {
    char pad0[0x144];
    Target_822467D8 target; /* 0x144 */
} Context_822467D8;

typedef struct Flow_822467D8 Flow_822467D8;

typedef struct FlowVtbl_822467D8 {
    void *slots[2];
    Context_822467D8 *(*GetContext)(Flow_822467D8 *self); /* 0x8 */
} FlowVtbl_822467D8;

struct Flow_822467D8 {
    FlowVtbl_822467D8 *vt; /* 0x0 */
    char pad4[0x80];
    int lastState; /* 0x84 */
};

typedef struct Self_822467D8 {
    char pad0[8];
    void *session; /* 0x08 */
    char pad0c[0x38 - 0x0c];
    Flow_822467D8 *flow; /* 0x38 */
} Self_822467D8;

typedef struct Player_822467D8 {
    char pad0[0x2c];
    void *active; /* 0x2c */
} Player_822467D8;

typedef struct Players_822467D8 {
    Player_822467D8 players[4]; /* 0x0 */
} Players_822467D8;

extern Players_822467D8 lbl_832960A0;

extern unsigned char fn_828ACCE8(void *session);
extern unsigned char fn_828AD740(void *session);
extern unsigned char fn_828B0360(void *session);
extern unsigned char fn_828B0378(void *session);
extern unsigned char fn_82247068(Flow_822467D8 *flow, int value);
extern void fn_828AAF70(Target_822467D8 *target, int value);
extern unsigned int fn_82247000(Flow_822467D8 *flow);
extern void fn_822471C8(Flow_822467D8 *flow, int advance);
extern unsigned char fn_822473D0(Flow_822467D8 *flow);
extern unsigned char fn_82246A40(Self_822467D8 *self);

void fn_822467D8(Self_822467D8 *self)
{
    unsigned char ready;
    Flow_822467D8 *flow;
    ready = fn_828ACCE8(self->session) && fn_828AD740(self->session);
    if (ready) {
        Target_822467D8 *target = &self->flow->vt->GetContext(self->flow)->target;
        if (target->vt->IsActive(target) && !fn_82247068(self->flow, 1)) {
            fn_828AAF70(&self->flow->vt->GetContext(self->flow)->target, 0);
        }
    }
    switch (fn_82247000(self->flow)) {
    case 0:
        if (!ready) {
            unsigned int count = 0;
            int i;
            for (i = 3; i >= 0; i--) {
                if (lbl_832960A0.players[i].active != 0) {
                    count++;
                }
            }
            if (count == 1 && fn_82246A40(self)) {
                fn_822471C8(self->flow, 1);
            }
        }
        break;
    case 1:
        fn_822471C8(self->flow, 0);
        break;
    case 2:
        if (!ready || !fn_828B0360(self->session) || fn_828B0378(self->session)) {
            fn_822471C8(self->flow, 1);
        }
        break;
    case 3:
        if (!ready) {
            fn_822471C8(self->flow, 1);
        } else if (fn_822473D0(self->flow)) {
            fn_822471C8(self->flow, 1);
        }
        break;
    }
    flow = self->flow;
    flow->lastState = fn_82247000(flow);
}
