#include "xdk/vectorintrinsics.h"

typedef union FloatBits_82612408 {
    unsigned int u;
    float f;
} FloatBits_82612408;

typedef struct Effect_82612408 {
    unsigned int type; /* 0x00 */
    char pad04[0x20];
    struct Effect_82612408 *next; /* 0x24 */
} Effect_82612408;

typedef struct System_82612408 {
    char pad000[0x828];
    float baseLife; /* 0x828 */
    char pad82C[0x420];
    Effect_82612408 *effects; /* 0xC4C */
} System_82612408;

typedef struct Emitter_82612408 {
    char pad00[0x10];
    Effect_82612408 *effect; /* 0x10 */
} Emitter_82612408;

typedef struct Particle_82612408 {
    __vector4 values[3]; /* 0x00 */
    __vector4 position;  /* 0x30 */
} Particle_82612408;

extern unsigned int lbl_83265A28;
extern const Particle_82612408 lbl_8329EAD0;
extern int lbl_83270124[5];

extern int fn_82520780(unsigned int *seed, float chance);
extern Effect_82612408 *fn_825F5B50(Effect_82612408 **list, void *name, void *group, int flags, int type);
extern void fn_825F5C70(Effect_82612408 *effect, Particle_82612408 *particle, float scaleX, float scaleY,
                        float life, float speed);

static __forceinline float Random01(void)
{
    FloatBits_82612408 bits;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    bits.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return bits.f - 1.0f;
}

static __forceinline float RandomRange(float low, float high)
{
    return Random01() * (high - low) + low;
}

static __forceinline Effect_82612408 *FindEffect(System_82612408 *system, unsigned int type)
{
    Effect_82612408 *effect;

    for (effect = system->effects; effect != 0; effect = effect->next) {
        if (effect->type == type) {
            return effect;
        }
    }
    return fn_825F5B50(&system->effects, &lbl_83270124[0], &lbl_83270124[1], 0, type);
}

void fn_82612408(Emitter_82612408 *self, __vector4 position, float spread, float size,
                 System_82612408 *system)
{
    float baseLife;
    Particle_82612408 particle;
    float scale;

    if (fn_82520780(&lbl_83265A28, size * size * 5.0f) == 0) {
        return;
    }
    baseLife = system->baseLife;
    if (self->effect == 0) {
        self->effect = FindEffect(system, 1);
    }
    if (self->effect == 0) {
        return;
    }
    scale = Random01() + 0.5f;
    particle = lbl_8329EAD0;
    particle.position.vector4_f32[0] = RandomRange(-spread, spread) + position.vector4_f32[0];
    particle.position.vector4_f32[1] = position.vector4_f32[1];
    particle.position.vector4_f32[2] = RandomRange(-spread, spread) + position.vector4_f32[2];
    fn_825F5C70(self->effect, &particle, scale, scale, Random01() * 0.2f + baseLife, Random01() + 1.5f);
}
