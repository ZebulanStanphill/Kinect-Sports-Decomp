typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Target_822F3EC0 {
    char pad0[0x38];
    int f38; /* 0x38 */
    char pad3C[0x8];
    int f44; /* 0x44 */
};

struct Pose_822F3EC0 {
    char pad0[0x10];
    __vector4 position; /* 0x10 */
    unsigned int frame; /* 0x20 */
    float values[6];    /* 0x24 */
    int f3c;            /* 0x3c */
    int f40;            /* 0x40 */
    char extra[4];      /* 0x44 */
};

struct Owner_822F3EC0 {
    char pad0[0x84];
    void *target; /* 0x084 */
    char pad88[0x15c];
    void *body; /* 0x1e4 */
};

struct Clip_822F3EC0 {
    char pad0[0x28];
    int start; /* 0x28 */
    int end;   /* 0x2c */
};

struct Self_822F3EC0 {
    char pad0[0xc];
    Clip_822F3EC0 *clip;   /* 0x0c */
    Owner_822F3EC0 *owner; /* 0x10 */
};

extern "C" void fn_822315A0(void *rep);

struct TargetRef_822F3EC0 {
    Target_822F3EC0 *px; /* 0x0 */
    void *rep;           /* 0x4 */

    __forceinline ~TargetRef_822F3EC0()
    {
        if (rep != 0) {
            fn_822315A0(rep);
        }
    }
};

struct PoseRef_822F3EC0 {
    Pose_822F3EC0 *px; /* 0x0 */
    void *rep;         /* 0x4 */

    __forceinline ~PoseRef_822F3EC0()
    {
        if (rep != 0) {
            fn_822315A0(rep);
        }
    }
};

extern "C" TargetRef_822F3EC0 fn_822EFBF0(void *target);
extern "C" void fn_823A74D8(PoseRef_822F3EC0 *out, Target_822F3EC0 *target, int start, int end);
extern "C" void fn_823AFE00(void *body, __vector4 position);
extern "C" void fn_822F4258(Self_822F3EC0 *self, void *body, float frame, float a, float b, float c, float d,
                            float e, float f, int f3c, int f40, int flag, void *extra);

extern "C" int fn_822F3EC0(Self_822F3EC0 *self)
{
    void *target = self->owner->target;
    void *body = self->owner->body;
    Target_822F3EC0 *state;

    if (target != 0 && body != 0 && (state = fn_822EFBF0(target).px, state->f38 == 0 || state->f44 != 0)) {
        int end = self->clip->end;
        int start = self->clip->start;
        PoseRef_822F3EC0 result;
        fn_823A74D8(&result, fn_822EFBF0(target).px, start, end);
        Pose_822F3EC0 *pose = result.px;
        if (pose != 0) {
            fn_823AFE00(body, pose->position);
            fn_822F4258(self, body, (float)pose->frame, pose->values[0], pose->values[1], pose->values[2],
                        pose->values[3], pose->values[4], pose->values[5], pose->f3c, pose->f40, 1,
                        pose->extra);
            return 1;
        }
    }
    return 0;
}
