#include "xdk/vectorintrinsics.h"

typedef struct Float3_825A2EE0 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Float3_825A2EE0;

typedef struct Skeleton_825A2EE0 {
    char pad0[0x44];
    int rootBone; /* 0x44 */
} Skeleton_825A2EE0;

typedef struct Object_825A2EE0 {
    char pad0[0x4c];
    Skeleton_825A2EE0 *skeleton; /* 0x4c */
    __vector4 position;          /* 0x50 */
    char pad60[0xf0 - 0x60];
    char boneData[0x8c0 - 0xf0]; /* 0xf0 */
    int *boneMap;                /* 0x8c0 */
} Object_825A2EE0;

typedef struct Attachment_825A2EE0 {
    char pad0[0x38];
    unsigned int type; /* 0x38 */
    char pad3c[0x4];
    unsigned int flags; /* 0x40 */
    char pad44[0x4];
    unsigned short bone; /* 0x48 */
    char pad4a[0x2];
    void *node; /* 0x4c */
} Attachment_825A2EE0;

extern void fn_8255E0B0(Object_825A2EE0 *self, int bone, __vector4 *out);
extern void fn_8255E3A0(Object_825A2EE0 *self, int bone, Float3_825A2EE0 *velocity);
extern void fn_82574340(void *node, char *boneData, int bone, __vector4 *out);
extern void fn_82593438(Object_825A2EE0 *self, void *node, Float3_825A2EE0 *velocity);
extern void fn_82529D38(Object_825A2EE0 *self, Float3_825A2EE0 *velocity);

static __forceinline int GetRootBone(Object_825A2EE0 *self)
{
    if (self->skeleton == 0) {
        return 0;
    }
    if (self->boneMap == 0) {
        return 0;
    }
    return self->boneMap[self->skeleton->rootBone + 0x20];
}

void fn_825A2EE0(Object_825A2EE0 *self, Attachment_825A2EE0 *attachment, __vector4 *position,
                 Float3_825A2EE0 *velocity)
{
    switch (attachment->type) {
    case 0:
        if (attachment->bone != 0xffff) {
            fn_8255E0B0(self, attachment->bone, position);
            if (attachment->flags & 4) {
                fn_8255E3A0(self, attachment->bone, velocity);
                return;
            }
            break;
        }
    default: {
        unsigned int flags = attachment->flags;
        *position = self->position;
        if (flags & 4) {
            fn_82529D38(self, velocity);
            return;
        }
        break;
    }
    case 1: {
        void *node = attachment->node;
        int bone = GetRootBone(self);
        fn_82574340(node, self->boneData, bone, position);
        if (attachment->flags & 4) {
            fn_82593438(self, attachment->node, velocity);
            return;
        }
        break;
    }
    }
    velocity->z = 0.0f;
    velocity->y = 0.0f;
    velocity->x = 0.0f;
}
