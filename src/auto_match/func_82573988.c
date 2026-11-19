typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* Moves every attached object (and every listed sub-object) to the object's position. */
typedef struct Skeleton_82573988 {
    char pad0[0x44];
    int rootBone; /* 0x44 */
} Skeleton_82573988;

typedef struct Object_82573988 {
    char pad0[0x4c];
    Skeleton_82573988 *skeleton; /* 0x4c */
    __vector4 position;          /* 0x50 */
    char pad60[0xf0 - 0x60];
    char boneData[0x8c0 - 0xf0]; /* 0xf0 */
    int *boneMap;                /* 0x8c0 */
} Object_82573988;

typedef struct Listener_82573988 Listener_82573988;

typedef struct ListenerVtbl_82573988 {
    void *slot0;
    void *slot4;
    void (*notify)(Listener_82573988 *self, int event, int arg); /* 0x8 */
} ListenerVtbl_82573988;

struct Listener_82573988 {
    ListenerVtbl_82573988 *vt;
};

typedef struct Target_82573988 {
    char pad0[0x10];
    __vector4 position; /* 0x10 */
    char pad20[0xa0 - 0x20];
    __vector4 previousPosition; /* 0xa0 */
    char padb0[0x1b0 - 0xb0];
    Listener_82573988 *listener; /* 0x1b0 */
} Target_82573988;

typedef struct Attached_82573988 {
    Target_82573988 *target; /* 0x0 */
    void *node;              /* 0x4 */
} Attached_82573988;

typedef struct Child_82573988 {
    char pad0[0x30];
    __vector4 position; /* 0x30 */
} Child_82573988;

typedef struct Links_82573988 {
    int childCount;                /* 0x0 */
    unsigned int childIds[8];      /* 0x4 */
    int attachedCount;             /* 0x24 */
    Attached_82573988 attached[1]; /* 0x28 */
} Links_82573988;

extern void fn_82574340(void *node, char *boneData, int bone, __vector4 *out);
extern Child_82573988 *fn_825A2A88(Object_82573988 *self, unsigned int id);

static __forceinline int GetRootBone(Object_82573988 *self)
{
    if (self->skeleton == 0) {
        return 0;
    }
    if (self->boneMap == 0) {
        return 0;
    }
    return self->boneMap[self->skeleton->rootBone + 0x20];
}

void fn_82573988(Object_82573988 *self, Links_82573988 *links)
{
    __vector4 position = self->position;
    int i;

    for (i = 0; i < links->attachedCount; i++) {
        Attached_82573988 *attached = &links->attached[i];

        if (attached->target != 0) {
            __vector4 where;

            if (attached->node == 0) {
                where = position;
            } else {
                fn_82574340(attached->node, self->boneData, GetRootBone(self), &where);
            }
            {
                __vector4 value = where;

                attached->target->previousPosition = value;
                attached->target->position = value;
            }
            if (attached->target->listener != 0) {
                attached->target->listener->vt->notify(attached->target->listener, 0x18, 0);
            }
        }
    }
    for (i = 0; i < links->childCount; i++) {
        Child_82573988 *child = fn_825A2A88(self, links->childIds[i]);

        if (child != 0) {
            child->position = position;
        }
    }
}
