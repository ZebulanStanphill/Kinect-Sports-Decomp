#include "xdk/vectorintrinsics.h"

typedef union Vector_82401C30 {
    __vector4 v;
    float f[4];
} Vector_82401C30;

typedef struct Euler_82401C30 {
    float x;
    float y;
    float z;
} Euler_82401C30;

typedef struct Player_82401C30 {
    char pad0[0x90];
    __vector4 rotation; /* 0x90 */
} Player_82401C30;

typedef struct Settings_82401C30 {
    char pad0[0x64];
    float fieldOfView; /* 0x64 */
} Settings_82401C30;

typedef struct Camera_82401C30 {
    char pad0[0x10];
    int playerId; /* 0x10 */
    char pad14[0x1A0 - 0x14];
    __vector4 target; /* 0x1a0 */
    char pad1B0[0x214 - 0x1B0];
    Euler_82401C30 angles; /* 0x214 */
    char pad220[8];
    float fieldOfView; /* 0x228 */
    char pad22C[0x240 - 0x22C];
    void *players; /* 0x240 */
} Camera_82401C30;

extern float lbl_832976D4;
extern float lbl_831E4E38;
extern Settings_82401C30 lbl_831D31E8;

extern double sqrt(double value);
extern float fn_82809D40(float y, float x);
extern int fn_824CD030(int playerId);
extern Player_82401C30 *fn_82359558(void *players, int playerId);
extern void fn_822BE860(Player_82401C30 *player, int flag);
extern void fn_82402488(Vector_82401C30 *out, Player_82401C30 *player);

/* Converts a rotation quaternion to Euler angles. */
static __forceinline Euler_82401C30 QuaternionToEuler(__vector4 q)
{
    Euler_82401C30 angles;
    float x2 = q.vector4_f32[0] * 2.0f;
    float y2 = q.vector4_f32[1] * 2.0f;
    float z2 = q.vector4_f32[2] * 2.0f;
    float wz = q.vector4_f32[3] * z2;
    float xx = q.vector4_f32[0] * x2;
    float xy = q.vector4_f32[0] * y2;
    float xz = q.vector4_f32[0] * z2;
    float yy = q.vector4_f32[1] * y2;
    float yz = q.vector4_f32[1] * z2;
    float zz = q.vector4_f32[2] * z2;
    float wx = q.vector4_f32[3] * x2;
    float wy = q.vector4_f32[3] * y2;
    float m00 = 1.0f - (yy + zz);
    float m01 = xy + wz;
    float m10 = xy - wz;
    float m11 = 1.0f - (xx + zz);
    float m20 = xz + wy;
    float m21 = yz - wx;
    float m22 = 1.0f - (xx + yy);
    float cosY = (float)sqrt(m22 * m22 + m20 * m20);

    if (cosY > 1.0e-06f) {
        angles.z = fn_82809D40(m01, m11);
        angles.x = fn_82809D40(-m21, cosY);
        angles.y = fn_82809D40(m20, m22);
    } else {
        angles.z = fn_82809D40(-m10, m00);
        angles.x = fn_82809D40(-m21, cosY);
        angles.y = 0.0f;
    }
    return angles;
}

void fn_82401C30(Camera_82401C30 *self)
{
    Vector_82401C30 target;
    Euler_82401C30 player;
    Euler_82401C30 angles;

    if (fn_824CD030(self->playerId) != 0)
        fn_822BE860(fn_82359558(self->players, self->playerId), 1);
    fn_82402488(&target, fn_82359558(self->players, self->playerId));
    target.f[1] = target.f[1] - lbl_832976D4 >= 0.0f ? target.f[1] : lbl_832976D4;
    player = QuaternionToEuler(fn_82359558(self->players, self->playerId)->rotation);
    angles.z = 0.0f;
    angles.x = lbl_831E4E38;
    angles.y = player.y + 3.1415927f;
    self->fieldOfView = lbl_831D31E8.fieldOfView;
    self->angles = angles;
    self->target = target.v;
}
