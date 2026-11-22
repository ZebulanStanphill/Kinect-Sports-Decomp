// Advances the two players' camera blends: interpolates position, colours and angles from the
// blend's start camera to its target, and when the blend ends copies the target, stops the blend
// and calls its completion callback; the result goes to fn_8252DDF0.
namespace std
{
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);

namespace tr1
{
extern "C" __declspec(noreturn) void fn_82F63108(void);
}
} // namespace std

#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#define _Xfunc fn_82F63108
#include <functional>
#undef _Xlength_error
#undef _Xout_of_range
#undef _Xfunc

struct Camera_824E6D50 {
    int valid;           /* 0x00 */
    float position[3];   /* 0x04 */
    unsigned int colorA; /* 0x10 */
    unsigned int colorB; /* 0x14 */
    int unknown18;       /* 0x18 */
    unsigned int colorC; /* 0x1c */
    unsigned int colorD; /* 0x20 */
    unsigned int colorE; /* 0x24 */
    int unknown28;       /* 0x28 */
    float angle[2];      /* 0x2c */
    int unknown34;       /* 0x34 */
    float target[3];     /* 0x38 */
    int unknown44[9];    /* 0x44 */
};

struct Blend_824E6D50 {
    char pad[0x68];
    Camera_824E6D50 from; /* 0x068 */
    Camera_824E6D50 to;   /* 0x0d0 */
    int active;           /* 0x138 */
    float duration;       /* 0x13c */
    char pad140[0xc];
    float start; /* 0x14c */
    char pad150[8];
    std::tr1::function<void(int)> finished; /* 0x158 */
};

struct Cameras_824E6D50 {
    char pad[0x10];
    Blend_824E6D50 blends[2]; /* 0x010 */
    char pad2f0[0x10];
    float now; /* 0x300 */
};

extern "C" Camera_824E6D50 lbl_832967B8[];
extern "C" unsigned int fn_824E6C20(unsigned int from, unsigned int to, float t);
extern "C" void fn_8252DDF0(Camera_824E6D50 *camera, int player);

static __forceinline void GetPlayerCamera(Camera_824E6D50 *out, int player)
{
    if (player >= -1 && player <= 1) {
        if (player == -1) {
            *out = lbl_832967B8[0];
        } else {
            *out = lbl_832967B8[player];
        }
    }
}

static __forceinline float Lerp(float from, float to, float t)
{
    return (to - from) * t + from;
}

extern "C" void fn_824E6D50(Cameras_824E6D50 *self, float now)
{
    int player;

    self->now = now;
    for (player = 0; player != 2; player++) {
        if (self->blends[player].active != 0) {
            float elapsed = now - self->blends[player].start;
            Camera_824E6D50 camera;
            float t;

            GetPlayerCamera(&camera, player);
            camera.valid = 1;
            t = elapsed / self->blends[player].duration;
            t = t >= 0.0f ? t : 0.0f;
            t = t - 1.0f >= 0.0f ? 1.0f : t;
            if (t < 1.0f) {
                camera.position[0] =
                    Lerp(self->blends[player].from.position[0], self->blends[player].to.position[0], t);
                camera.position[1] =
                    Lerp(self->blends[player].from.position[1], self->blends[player].to.position[1], t);
                camera.position[2] =
                    Lerp(self->blends[player].from.position[2], self->blends[player].to.position[2], t);
                camera.angle[0] =
                    Lerp(self->blends[player].from.angle[0], self->blends[player].to.angle[0], t);
                camera.angle[1] =
                    Lerp(self->blends[player].from.angle[1], self->blends[player].to.angle[1], t);
                camera.target[0] =
                    Lerp(self->blends[player].from.target[0], self->blends[player].to.target[0], t);
                camera.target[1] =
                    Lerp(self->blends[player].from.target[1], self->blends[player].to.target[1], t);
                camera.target[2] =
                    Lerp(self->blends[player].from.target[2], self->blends[player].to.target[2], t);
                camera.colorA =
                    fn_824E6C20(self->blends[player].from.colorA, self->blends[player].to.colorA, t);
                camera.colorB =
                    fn_824E6C20(self->blends[player].from.colorB, self->blends[player].to.colorB, t);
                camera.colorC =
                    fn_824E6C20(self->blends[player].from.colorC, self->blends[player].to.colorC, t);
                camera.colorD =
                    fn_824E6C20(self->blends[player].from.colorD, self->blends[player].to.colorD, t);
                camera.colorE =
                    fn_824E6C20(self->blends[player].from.colorE, self->blends[player].to.colorE, t);
            } else {
                camera = self->blends[player].to;
                self->blends[player].active = 0;
                if (self->blends[player].finished) {
                    self->blends[player].finished(player);
                }
            }
            fn_8252DDF0(&camera, player);
        }
    }
}
