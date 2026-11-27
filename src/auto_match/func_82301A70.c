#include "xdk/vectorintrinsics.h"

typedef struct Clip_82301A70 {
    union {
        char *ptr;
        char buf[16];
    } name; /* 0x0 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
    int pad18;
    unsigned int id; /* 0x1c */
} Clip_82301A70;

typedef struct Target_82301A70 {
    char pad0[0x110];
    void *partner; /* 0x110 */
} Target_82301A70;

typedef struct Animator_82301A70 {
    char pad0[0xc];
    Target_82301A70 *target; /* 0xc */
    char pad10[0x24 - 0x10];
    void *library; /* 0x24 */
} Animator_82301A70;

typedef struct Actor_82301A70 {
    char pad0[0x118];
    Animator_82301A70 *animator; /* 0x118 */
    char pad11C[0x210 - 0x11c];
    __vector4 position; /* 0x210 */
} Actor_82301A70;

typedef struct Self_82301A70 Self_82301A70;

typedef struct SelfVt_82301A70 {
    char pad0[0x14];
    unsigned int (*ChooseState)(Self_82301A70 *self, int force); /* 0x14 */
} SelfVt_82301A70;

struct Self_82301A70 {
    SelfVt_82301A70 *vt; /* 0x0 */
    char pad4[0x54 - 0x4];
    Actor_82301A70 *actor; /* 0x54 */
    char pad58[0x5c - 0x58];
    unsigned int clip; /* 0x5c */
    int state;         /* 0x60 */
    char pad64[0x1c0 - 0x64];
    __vector4 anchor; /* 0x1c0 */
};

extern int fn_8255FA88(void *partner);
extern Clip_82301A70 *fn_823021D0(Self_82301A70 *self, unsigned int state);
extern Clip_82301A70 *fn_82302328(Self_82301A70 *self, int force, __vector4 position);
extern void *fn_82560010(void *library, const char *name);
extern void fn_822B83D0(Animator_82301A70 *animator, void *animation);

static __forceinline const char *CStr(Clip_82301A70 *clip)
{
    if (clip->capacity >= 0x10) {
        return clip->name.ptr;
    }
    return clip->name.buf;
}

void fn_82301A70(Self_82301A70 *self)
{
    __vector4 position = self->actor->position;
    void *partner = self->actor->animator->target->partner;
    int force;
    int ready;
    unsigned int state;
    unsigned int id;
    Clip_82301A70 *clip;
    Animator_82301A70 *animator;

    if (partner == 0 || self->clip == 0 || fn_8255FA88(partner) != 0) {
        force = 1;
    } else {
        force = 0;
    }
    if (self->clip != 0 && self->state == 0) {
        ready = 1;
    } else {
        ready = 0;
        if (force == 0) {
            return;
        }
    }
    clip = 0;
    state = self->vt->ChooseState(self, force);
    switch (state) {
    case 0:
        if (force == 0) {
            return;
        }
        clip = fn_823021D0(self, 0);
        break;
    case 1:
    case 2:
        clip = fn_823021D0(self, state);
        break;
    case 3:
        if ((partner == 0 || ready) && (clip = fn_82302328(self, force, position)) != 0) {
            self->anchor = position;
            goto play;
        }
        if (force != 0) {
            state = 0;
            clip = fn_823021D0(self, 0);
        }
        break;
    default:
        return;
    }
    if (clip == 0) {
        return;
    }
play:
    animator = self->actor->animator;
    fn_822B83D0(animator, fn_82560010(animator->library, CStr(clip)));
    id = clip->id;
    self->state = state;
    self->clip = id;
}
