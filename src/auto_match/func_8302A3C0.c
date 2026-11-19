typedef struct Vec3_8302A3C0 {
    float x;
    float y;
    float z;
} Vec3_8302A3C0;

typedef struct Target_8302A3C0 {
    char pad0[0x38];
    void *node; /* 0x38 */
} Target_8302A3C0;

typedef struct Anim_8302A3C0 {
    char pad0[0x24];
    Target_8302A3C0 **begin; /* 0x24 */
    Target_8302A3C0 **end;   /* 0x28 */
    char pad2c[0xc];
    unsigned int duration; /* 0x38 */
    char pad3c[0x4];
    float rate;   /* 0x40 */
    float offset; /* 0x44 */
    char pad48[0x4];
    Vec3_8302A3C0 start; /* 0x4c */
    Vec3_8302A3C0 delta; /* 0x58 */
} Anim_8302A3C0;

extern int fn_83027270(void *node, Vec3_8302A3C0 *position);
extern void fn_8302A230(Anim_8302A3C0 *anim);

void fn_8302A3C0(Anim_8302A3C0 *anim, unsigned int time)
{
    Target_8302A3C0 **it;
    Vec3_8302A3C0 position;
    float t;

    t = anim->rate * (float)time + anim->offset;
    t = t - 1.0f >= 0.0f ? 1.0f : t;
    t = t >= 0.0f ? t : 0.0f;
    position.x = anim->delta.x * t + anim->start.x;
    position.y = anim->delta.y * t + anim->start.y;
    position.z = anim->delta.z * t + anim->start.z;
    for (it = anim->begin; it != anim->end; it++) {
        fn_83027270((*it)->node, &position);
    }
    if (time >= anim->duration) {
        fn_8302A230(anim);
    }
}
