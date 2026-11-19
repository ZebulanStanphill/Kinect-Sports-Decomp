extern const float lbl_821954B0[0xa28 / 4];

typedef struct Owner_82577EE0 {
    char pad0[0x278];
    int id; /* 0x278 */
} Owner_82577EE0;

typedef struct Target_82577EE0 {
    char pad0[0x54];
    Owner_82577EE0 *owner; /* 0x54 */
} Target_82577EE0;

typedef struct List_82577EE0 {
    int disabled; /* 0x0 */
    int pad4;
    int count;                 /* 0x8 */
    Target_82577EE0 *items[1]; /* 0xc */
} List_82577EE0;

typedef struct Hit_82577EE0 {
    Target_82577EE0 *target; /* 0x0 */
    int ownerId;             /* 0x4 */
} Hit_82577EE0;

extern float fn_825C86C0(Target_82577EE0 *target, float x, float y, float z);

int fn_82577EE0(List_82577EE0 *list, float *position, float *best, Hit_82577EE0 *hit)
{
    int i;
    int found = 0;
    Target_82577EE0 *target;
    float score;

    if (hit != 0) {
        hit->ownerId = 0;
        hit->target = 0;
    }
    *best = lbl_821954B0[0x1e0 / 4];
    if (list->disabled == 0 && list->count > 0) {
        for (i = 0; i < list->count; i++) {
            target = list->items[i];
            if (target != 0) {
                score = fn_825C86C0(target, position[0], position[1], position[2]);
                if (score > *best) {
                    *best = score;
                    found = 1;
                    if (hit != 0) {
                        int ownerId = target->owner->id;

                        hit->target = target;
                        hit->ownerId = ownerId;
                    }
                }
            }
        }
    }
    return found;
}
