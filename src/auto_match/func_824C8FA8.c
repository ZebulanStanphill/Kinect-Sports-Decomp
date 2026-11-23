#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Angles_824C8FA8 {
    float pitch;
    float yaw;
    float roll;
} Angles_824C8FA8;

typedef struct Vector_824C8FA8 {
    __vector4 v;
} Vector_824C8FA8;

typedef struct Actor_824C8FA8 {
    char pad00[0x50];
    __vector4 position; /* 0x50 */
} Actor_824C8FA8;

typedef struct Track_824C8FA8 {
    Actor_824C8FA8 *actor; /* 0x00 */
} Track_824C8FA8;

extern void fn_82529D38(Actor_824C8FA8 *actor, Angles_824C8FA8 *angles);
extern __vector4 fn_8255A160(__vector4 position, float angle, float distance);
extern float fn_824C9298(Track_824C8FA8 *track, __vector4 point);
extern float fn_8253FD80(float value);
extern __vector4 fn_8255ACE0(const Angles_824C8FA8 *angles, __vector4 vector);

static __forceinline Angles_824C8FA8 MakeAngles(float pitch, float yaw, float roll)
{
    Angles_824C8FA8 angles;

    angles.pitch = pitch;
    angles.yaw = yaw;
    angles.roll = roll;
    return angles;
}

Vector_824C8FA8 fn_824C8FA8(Track_824C8FA8 *track, const __vector4 *direction)
{
    Vector_824C8FA8 result;
    __vector4 position = track->actor->position;
    Angles_824C8FA8 angles;
    float ahead;
    float slope;

    fn_82529D38(track->actor, &angles);
    ahead = fn_824C9298(track, fn_8255A160(position, angles.yaw, 0.2f));
    slope = ahead - fn_824C9298(track, position);
    angles = MakeAngles(-fn_8253FD80(slope / sqrtf(slope * slope + 0.2f * 0.2f)), 0.0f, 0.0f);
    result.v = fn_8255ACE0(&angles, *direction);
    return result;
}
