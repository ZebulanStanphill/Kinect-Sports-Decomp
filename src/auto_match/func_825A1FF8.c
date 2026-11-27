#include "xdk/vectorintrinsics.h"

typedef struct Transform_825A1FF8 {
    float m[16];
} Transform_825A1FF8;

typedef struct Body_825A1FF8 {
    char pad0[8];
    void *time; /* 0x008 */
    char padC[0xd4];
    char motion[0x40];  /* 0x0e0 */
    __vector4 position; /* 0x120 */
    char pad130[0x30];
    __vector4 direction; /* 0x160 */
} Body_825A1FF8;

typedef struct Entry_825A1FF8 {
    Body_825A1FF8 *body; /* 0x00 */
    char pad4[0x4c];
    Transform_825A1FF8 transform; /* 0x50 */
} Entry_825A1FF8;

typedef struct Selection_825A1FF8 {
    char pad0[0x100];
    int target; /* 0x100 */
    char pad104[0x14];
    int index; /* 0x118 */
} Selection_825A1FF8;

typedef struct World_825A1FF8 {
    int f0;
    int count;                     /* 0x04 */
    Selection_825A1FF8 *selection; /* 0x08 */
} World_825A1FF8;

typedef struct Physics_825A1FF8 {
    World_825A1FF8 *world;   /* 0x00 */
    Entry_825A1FF8 *entries; /* 0x04 */
} Physics_825A1FF8;

typedef struct Ragdoll_825A1FF8 {
    int f0;
    Physics_825A1FF8 *physics; /* 0x04 */
    int f8;
    void *object; /* 0x0c */
    int active;   /* 0x10 */
} Ragdoll_825A1FF8;

typedef struct Self_825A1FF8 {
    char pad0[0x7ac];
    Ragdoll_825A1FF8 ragdoll; /* 0x7ac */
} Self_825A1FF8;

float fn_82D80A40(void *time);
void fn_82D93168(void *motion, float time, Transform_825A1FF8 *out);
void fn_82CE6528(const Transform_825A1FF8 *src, Transform_825A1FF8 *dst);
void fn_826009D8(void *object);
__vector4 fn_8255E2B0(Self_825A1FF8 *self, int target);
void fn_8253C430(Self_825A1FF8 *self, __vector4 target, __vector4 direction);

static __forceinline void GetTransform(Transform_825A1FF8 *out, Body_825A1FF8 *body)
{
    Transform_825A1FF8 transform;

    fn_82D93168(body->motion, fn_82D80A40(body->time), &transform);
    fn_82CE6528(&transform, out);
}

static __forceinline Body_825A1FF8 *GetBody(Physics_825A1FF8 *physics)
{
    return physics->entries[physics->world->selection->index].body;
}

static __forceinline int GetSelectedTarget(Ragdoll_825A1FF8 *ragdoll)
{
    Physics_825A1FF8 *physics = ragdoll->physics;

    return physics->world->selection->target;
}

void fn_825A1FF8(Self_825A1FF8 *self)
{
    Ragdoll_825A1FF8 *ragdoll = &self->ragdoll;
    Physics_825A1FF8 *physics = ragdoll->physics;
    int i;
    Entry_825A1FF8 *entry;
    __vector4 direction;
    __vector4 offset;

    if (physics != 0 && ragdoll->object != 0) {
        for (i = physics->world->count - 1; i >= 0; i--) {
            entry = &physics->entries[i];
            GetTransform(&entry->transform, entry->body);
        }
        fn_826009D8(ragdoll->object);
        if (ragdoll->active != 0) {
            physics = ragdoll->physics;
            direction = GetBody(physics)->direction;
            offset = fn_8255E2B0(self, GetSelectedTarget(ragdoll));
            fn_8253C430(self, __vsubfp(GetBody(physics)->position, offset), direction);
        }
    }
}
