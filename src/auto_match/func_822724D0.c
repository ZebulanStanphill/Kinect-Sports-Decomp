#include "xdk/vectorintrinsics.h"

typedef struct Actor_822724D0 {
    char pad0[0x510];
    __vector4 position; /* 0x510 */
    float speed;        /* 0x520 */
    char pad524[0x10];
    int moving; /* 0x534 */
    char pad538[0xc];
    int visible; /* 0x544 */
    int hidden;  /* 0x548 */
} Actor_822724D0;

typedef struct Spawn_822724D0 {
    __vector4 position; /* 0x00 */
    char pad10[0x14];
    Actor_822724D0 *actor; /* 0x24 */
    char pad28[0x8];
} Spawn_822724D0;

typedef struct SpawnList_822724D0 {
    Spawn_822724D0 *begin; /* 0x00 */
    Spawn_822724D0 *end;   /* 0x04 */
} SpawnList_822724D0;

typedef struct Registry_822724D0 {
    char pad0[0xc];
    void **begin; /* 0x0c */
    void **end;   /* 0x10 */
} Registry_822724D0;

typedef struct Stage_822724D0 {
    char pad0[0x2c];
    int startId; /* 0x2c */
} Stage_822724D0;

typedef struct Level_822724D0 {
    char pad0[0x4];
    Stage_822724D0 *stage; /* 0x04 */
} Level_822724D0;

typedef struct Self_822724D0 {
    char pad0[0x4c];
    Registry_822724D0 *registry; /* 0x4c */
    void *selected;              /* 0x50 */
    char pad54[0x8];
    SpawnList_822724D0 *spawns; /* 0x5c */
    char pad60[0x38];
    int resetPending; /* 0x98 */
    char pad9C[0x4];
    int result; /* 0xa0 */
    char padA4[0x4];
    Level_822724D0 *level; /* 0xa8 */
    char padAC[0x10];
    int defaultValue; /* 0xbc */
    int value;        /* 0xc0 */
    int valueUnset;   /* 0xc4 */
    char padC8[0x8];
    int counter; /* 0xd0 */
    char padD4[0x3c];
    int leftLabel; /* 0x110 */
    char pad114[0x4];
    int rightLabel; /* 0x118 */
} Self_822724D0;

extern char lbl_820E975C[];

extern void fn_8228C2C8(void *label, const char *text);
extern void fn_82271C18(Self_822724D0 *self, int id, unsigned int a, int b);

static __forceinline unsigned char Contains(Registry_822724D0 *registry, void *value)
{
    void **p = registry->begin;
    void **end = registry->end;

    while (p != end) {
        if (*p == value) {
            return 1;
        }
        p++;
    }
    return 0;
}

int fn_822724D0(Self_822724D0 *self)
{
    int result = self->result;
    void *selected;

    if (self->resetPending != 0) {
        SpawnList_822724D0 *spawns = self->spawns;
        Spawn_822724D0 *spawn;
        Stage_822724D0 *stage;

        self->counter = 0;
        self->value = self->defaultValue;
        self->valueUnset = self->defaultValue == 0;
        for (spawn = spawns->begin; spawn != spawns->end; spawn++) {
            Actor_822724D0 *actor = spawn->actor;

            if (actor != 0) {
                actor->position = spawn->position;
                actor->speed = 0.0f;
                actor->hidden = 0;
                actor->visible = 1;
                actor->moving = 0;
            }
        }
        stage = self->level->stage;
        if (self->leftLabel != 0) {
            fn_8228C2C8((void *)self->leftLabel, lbl_820E975C);
        }
        if (self->rightLabel != 0) {
            fn_8228C2C8((void *)self->rightLabel, lbl_820E975C);
        }
        fn_82271C18(self, stage->startId, 0, 0);
    }
    selected = self->selected;
    if (!Contains(self->registry, selected)) {
        result = 0;
        self->selected = 0;
    }
    return result;
}
