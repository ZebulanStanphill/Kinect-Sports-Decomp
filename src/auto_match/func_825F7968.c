// Fills the shared sound parameter block (lbl_832978C8, a function-local static with the guard
// bit lbl_83297A40, as in func_826243F0) for an object: sound id, position, optionally the
// velocity (fn_82529D38) and the volume, optionally scaled, and returns the block.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct SoundParams_825F7968 {
    unsigned int flags;             // 0x00
    float position[3];              // 0x04
    float velocity[3];              // 0x10
    char pad1c[0x10];
    float volume;                   // 0x2c
    char pad30[4];
    int id;                         // 0x34
    char pad38[0x10];
} SoundParams_825F7968;             // 0x48

typedef struct Float3_825F7968 {
    float x, y, z;
} Float3_825F7968;

typedef struct Object_825F7968 {
    char pad000[0x50];
    __vector4 position;             // 0x50
    char pad060[0x40];
    float volume;                   // 0xa0
    char pad0a4[0x818];
    float volumeScale;              // 0x8bc
} Object_825F7968;

extern unsigned int lbl_83297A40;
extern SoundParams_825F7968 lbl_832978C8;
extern void fn_82529D38(Object_825F7968 *self, Float3_825F7968 *velocity);

static __forceinline void StoreFloat3(float *p, __vector4 v)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);
    __stvewx(x, p, 0);
    __stvewx(y, p, 4);
    __stvewx(z, p, 8);
}

static __forceinline void SetVolume(SoundParams_825F7968 *params, float volume)
{
    params->volume = volume;
    params->flags |= 0x40;
}

SoundParams_825F7968 *fn_825F7968(Object_825F7968 *self, int id, int scaleVolume, int withVelocity)
{
    __vector4 position;

    if ((lbl_83297A40 & 1) == 0) {
        lbl_83297A40 |= 1;
    }
    lbl_832978C8.flags = 0;
    position = self->position;
    lbl_832978C8.flags |= 8;
    lbl_832978C8.id = id;
    StoreFloat3(lbl_832978C8.position, position);
    lbl_832978C8.flags |= 1;
    if (withVelocity != 0) {
        Float3_825F7968 velocity;

        fn_82529D38(self, &velocity);
        lbl_832978C8.velocity[0] = velocity.x;
        lbl_832978C8.velocity[1] = velocity.y;
        lbl_832978C8.velocity[2] = velocity.z;
        lbl_832978C8.flags |= 4;
    }
    if (scaleVolume != 0) {
        SetVolume(&lbl_832978C8, self->volumeScale * self->volume);
    } else {
        SetVolume(&lbl_832978C8, self->volume);
    }
    return &lbl_832978C8;
}
