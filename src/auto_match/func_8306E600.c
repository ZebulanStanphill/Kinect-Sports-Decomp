typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);

typedef struct Pose_8306E600 {
    __vector4 position;     /* 0x00 */
    __vector4 rotation;     /* 0x10 */
    __vector4 scale;        /* 0x20 */
} Pose_8306E600;

typedef struct Body_8306E600 {
    __vector4 position;     /* 0x00 */
    __vector4 origin;       /* 0x10 */
    char pad20[0x10];
    float scale;            /* 0x30 */
    float size;             /* 0x34 */
    char pad38[0xe8];
    __vector4 rotation;     /* 0x120 */
    char pad130[0x38];
    unsigned char tracked;  /* 0x168 */
} Body_8306E600;

typedef struct Tracker_8306E600 {
    char pad0[0x10];
    char bodies[0x7100];    /* 0x10 */
    char poses[0xddc8];     /* 0x7110 */
    float blend;            /* 0x14ed8 */
} Tracker_8306E600;

extern int lbl_8315FA80;
extern const float lbl_82079F68;

Body_8306E600 *fn_83079018(void *bodies, int id);
int fn_8306D108(void *poses, int id, Pose_8306E600 *out);
__vector4 fn_8306EC90(float size);
__vector4 fn_8306EC70(__vector4 a, __vector4 b, float t);
__vector4 fn_83076570(__vector4 a, __vector4 b, float t);
__vector4 fn_83076180(__vector4 q);
unsigned char fn_83078558(Body_8306E600 *body);

static __forceinline __vector4 ReplicateC(float v)
{
    __vector4 r;
    r.vector4_f32[0] = r.vector4_f32[1] = r.vector4_f32[2] = r.vector4_f32[3] = v;
    return r;
}

int fn_8306E600(Tracker_8306E600 *self, int id, Pose_8306E600 *out, int *state)
{
    Body_8306E600 *body;
    Pose_8306E600 pose;
    float t;

    body = fn_83079018(self->bodies, id);
    if (body != 0) {
        if (body->tracked != 0) {
            out->position = __vsubfp(__vmulfp(body->position, ReplicateC(body->scale)), body->origin);
            out->position.vector4_f32[3] = 1.0f;
            out->rotation = body->rotation;
            if (lbl_8315FA80 == 0) {
                out->rotation.vector4_f32[0] = -out->rotation.vector4_f32[0];
                out->rotation.vector4_f32[1] = -out->rotation.vector4_f32[1];
                out->position.vector4_f32[2] = -out->position.vector4_f32[2];
            }
            out->scale = fn_8306EC90(body->size);
            if (self->blend > 0.0f) {
                t = self->blend * lbl_82079F68;
                fn_8306D108(self->poses, id, &pose);
                out->position = fn_8306EC70(out->position, pose.position, t);
                out->rotation = fn_83076570(out->rotation, pose.rotation, t);
                out->scale = fn_8306EC70(out->scale, pose.scale, t);
                out->rotation = fn_83076180(out->rotation);
                if (state != 0)
                    *state = 1;
            } else if (state != 0) {
                *state = fn_83078558(body) ? 2 : 0;
            }
            return 0;
        }
        if (state != 0)
            *state = 3;
        return fn_8306D108(self->poses, id, out);
    }
    return 0x80070057;
}
