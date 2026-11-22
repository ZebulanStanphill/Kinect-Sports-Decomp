typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

typedef struct Map_8231F730 {
    void *head_alloc;
    void *head;
    unsigned int size; /* 0x08 */
} Map_8231F730;

typedef struct Layer_8231F730 {
    Map_8231F730 **maps; /* 0x00 */
    int unk4[3];
    int current; /* 0x10 */
} Layer_8231F730;

typedef struct Info_8231F730 {
    char pad0[0x1c];
    unsigned int team; /* 0x1C */
} Info_8231F730;

typedef struct Actor_8231F730 {
    char pad0[0x1c];
    Layer_8231F730 *layer; /* 0x1C */
    char pad20[0x80 - 0x20];
    __vector4 position; /* 0x80 */
    char pad90[0x110 - 0x90];
    Info_8231F730 *info; /* 0x110 */
} Actor_8231F730;

typedef struct Owner_8231F730 {
    char pad0[0xc];
    Actor_8231F730 *actor; /* 0x0C */
} Owner_8231F730;

extern Actor_8231F730 *fn_822ABA88(Map_8231F730 *map, unsigned int key);

static __forceinline float DistanceSquared(__vector4 a, __vector4 b)
{
    __vector4 delta = __vsubfp(a, b);
    __vector4 dot = __vmsum3fp(delta, delta);

    return dot.vector4_f32[0];
}

Actor_8231F730 *fn_8231F730(Owner_8231F730 *self, Actor_8231F730 *excluded)
{
    Actor_8231F730 *actor = self->actor;
    Map_8231F730 *map = actor->layer->maps[actor->layer->current];
    Actor_8231F730 *nearest = 0;
    float nearestDistance = 3.402823466e+38f;
    unsigned int i;

    for (i = 0; i < map->size; i++) {
        Actor_8231F730 *other = fn_822ABA88(map, i);

        if (actor != other && excluded != other && other->info->team == 2) {
            float distance = DistanceSquared(other->position, actor->position);

            if (distance < nearestDistance) {
                nearestDistance = distance;
                nearest = other;
            }
        }
    }
    return nearest;
}
