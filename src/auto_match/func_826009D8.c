#include "xdk/vectorintrinsics.h"

typedef struct Body_826009D8 Body_826009D8;

typedef struct Entry_826009D8 {
    Body_826009D8 *body; /* 0x00 */
    char pad4[0x8c];
} Entry_826009D8;

typedef struct Selection_826009D8 {
    char pad0[0x118];
    int index; /* 0x118 */
} Selection_826009D8;

typedef struct World_826009D8 {
    char pad0[0x8];
    Selection_826009D8 *selection; /* 0x08 */
} World_826009D8;

typedef struct Physics_826009D8 {
    World_826009D8 *world;   /* 0x00 */
    Entry_826009D8 *entries; /* 0x04 */
    char pad8[0xa8];
    unsigned char keyframed; /* 0xb0 */
} Physics_826009D8;

typedef struct Settings_826009D8 {
    char pad0[0xb3c];
    float rate; /* 0xb3c */
} Settings_826009D8;

typedef struct Object_826009D8 {
    char pad0[0xb4];
    Settings_826009D8 *settings; /* 0x0b4 */
    char padb8[0x4];
    Physics_826009D8 *physics; /* 0x0bc */
    char padc0[0x20];
    __vector4 target; /* 0x0e0 */
    char padf0[0x10];
    char transform[0x10]; /* 0x100 */
} Object_826009D8;

extern const float lbl_821CA45C[2];
extern void fn_82D8B6C8(Body_826009D8 *body, int motionType, int activation, int updateFilter);
extern void fn_82DECAF0(__vector4 *position, void *transform, float time, Body_826009D8 *body);

static __forceinline Body_826009D8 *GetBody_826009D8(Physics_826009D8 *physics)
{
    return physics->entries[physics->world->selection->index].body;
}

void fn_826009D8(Object_826009D8 *self)
{
    __vector4 target;

    if (self->physics->keyframed != 0) {
        fn_82D8B6C8(GetBody_826009D8(self->physics), 4, 1, 0);
        target = self->target;
        fn_82DECAF0(&target, self->transform, lbl_821CA45C[1] / self->settings->rate,
                    GetBody_826009D8(self->physics));
    } else {
        fn_82D8B6C8(GetBody_826009D8(self->physics), 1, 1, 0);
    }
}
