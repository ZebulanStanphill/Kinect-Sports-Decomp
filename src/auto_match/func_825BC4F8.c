// Fills the shared sound parameter block (lbl_832978C8, a function-local static with the guard
// bit lbl_83297A40) for an object: sound id, position, velocity (fn_82529D38) and volume, and
// returns the block.

#include "xdk/vectorintrinsics.h"

typedef struct SoundParams_825BC4F8 {
    unsigned int flags; // 0x00
    float position[3];  // 0x04
    float velocity[3];  // 0x10
    char pad1c[0x10];
    float volume; // 0x2c
    char pad30[4];
    int id; // 0x34
    char pad38[0x10];
} SoundParams_825BC4F8; // 0x48

typedef struct Float3_825BC4F8 {
    float x, y, z;
} Float3_825BC4F8;

typedef struct Object_825BC4F8 {
    char pad000[0x50];
    __vector4 position; // 0x50
    char pad060[0x40];
    char pad0a0[8];
    float volume; // 0xa8
} Object_825BC4F8;

extern unsigned int lbl_83297A40;
extern SoundParams_825BC4F8 lbl_832978C8;
extern void fn_82529D38(Object_825BC4F8 *self, Float3_825BC4F8 *velocity);

static __forceinline void StoreFloat3(float *p, __vector4 v)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);
    __stvewx(x, p, 0);
    __stvewx(y, p, 4);
    __stvewx(z, p, 8);
}

static __forceinline void SetVolume(SoundParams_825BC4F8 *params, float volume)
{
    params->volume = volume;
    params->flags |= 0x40;
}

SoundParams_825BC4F8 *fn_825BC4F8(Object_825BC4F8 *self, int id)
{
    __vector4 position;
    Float3_825BC4F8 velocity;

    if ((lbl_83297A40 & 1) == 0) {
        lbl_83297A40 |= 1;
    }
    lbl_832978C8.flags = 0;
    position = self->position;
    fn_82529D38(self, &velocity);
    lbl_832978C8.flags |= 8;
    lbl_832978C8.id = id;
    StoreFloat3(lbl_832978C8.position, position);
    lbl_832978C8.flags |= 1;
    lbl_832978C8.velocity[0] = velocity.x;
    lbl_832978C8.velocity[1] = velocity.y;
    lbl_832978C8.velocity[2] = velocity.z;
    lbl_832978C8.flags |= 4;
    SetVolume(&lbl_832978C8, self->volume);
    return &lbl_832978C8;
}
