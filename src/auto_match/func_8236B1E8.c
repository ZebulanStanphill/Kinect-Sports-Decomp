#include "xdk/vectorintrinsics.h"

typedef struct List_8236B1E8 {
    void **begin;
    void **end;
} List_8236B1E8;

typedef struct Group_8236B1E8 {
    void **items; /* 0x00 */
    char pad4[0xc];
    int index; /* 0x10 */
} Group_8236B1E8;

typedef struct Body_8236B1E8 {
    char pad000[0x130];
    __vector4 position; /* 0x130 */
    char pad140[0x160 - 0x140];
    int active; /* 0x160 */
} Body_8236B1E8;

typedef struct Object_8236B1E8 {
    char pad00[0x24];
    Body_8236B1E8 *body; /* 0x24 */
    char pad28[0x80 - 0x28];
    __vector4 position; /* 0x80 */
} Object_8236B1E8;

typedef struct Target_8236B1E8 {
    char pad0[4];
    __vector4 *position; /* 0x4 */
} Target_8236B1E8;

typedef struct Record_8236B328 {
    char pad00[0x48];
    float chance; /* 0x48 */
    char pad4c[0x12c - 0x4c];
} Record_8236B328;

typedef struct Game_8236B1E8 {
    char pad00[0x8];
    Group_8236B1E8 ***groups; /* 0x08 */
    char pad0c[0x1c - 0x0c];
    Target_8236B1E8 *target; /* 0x1c */
    List_8236B1E8 **lists;   /* 0x20 */
    char pad24[0x550 - 0x24];
    Record_8236B328 records[8]; /* 0x550 */
} Game_8236B1E8;

typedef union RandomBits_8236B1E8 {
    unsigned int u;
    float f;
} RandomBits_8236B1E8;

extern unsigned int lbl_83265A28;
extern int fn_823CC7A0(void);
extern Object_8236B1E8 *fn_822ABA88(void *map, unsigned int key);
extern __vector4 *fn_822AA718(__vector4 *out, Group_8236B1E8 *group);

static __forceinline unsigned int Size(List_8236B1E8 *list)
{
    return list->end - list->begin;
}

int fn_8236B1E8(Game_8236B1E8 *self, int which, unsigned int key)
{
    List_8236B1E8 *list;
    Record_8236B328 *record;
    Group_8236B1E8 *group;
    Object_8236B1E8 *object;
    __vector4 position;
    __vector4 direction;
    RandomBits_8236B1E8 r;

    list = self->lists[which];
    if (Size(list) > 0) {
        record = &self->records[fn_823CC7A0()];
        group = (*self->groups)[which];
        object = fn_822ABA88(group->items[group->index], key);
        if (object->body != 0 && object->body->active != 0) {
            position = object->body->position;
        } else {
            position = object->position;
        }
        fn_822AA718(&direction, group);
        direction = __vmsum3fp(direction, __vsubfp(position, *self->target->position));
        if (direction.vector4_f32[0] >= 0.0f) {
            lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
            r.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
            if (r.f - 1.0f < record->chance) {
                return 1;
            }
        }
    }
    return 0;
}
