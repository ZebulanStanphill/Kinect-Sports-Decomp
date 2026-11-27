namespace std
{
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
} // namespace std

#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <vector>
#undef _Xlength_error
#undef _Xout_of_range

struct Target_82507EA8;

struct Blocked_82507EA8 {
    Target_82507EA8 *target; /* 0x0 */
    float time;              /* 0x4 */
};

struct Queued_82507EA8 {
    Target_82507EA8 *target; /* 0x0 */
    float time;              /* 0x4 */
    int force;               /* 0x8 */
};

struct Picker_82507EA8 {
    char pad0[0x10];
    float cooldown; /* 0x10 */
    char pad14[0x4];
    Target_82507EA8 *pending; /* 0x18 */
    int pendingForce;         /* 0x1c */
    float pendingTime;        /* 0x20 */
    char pad24[0x8];
    std::vector<Queued_82507EA8> queued;   /* 0x2c */
    std::vector<Blocked_82507EA8> blocked; /* 0x3c */
};

extern "C" int fn_82508160(Picker_82507EA8 *self, Target_82507EA8 *target, int force, int allowQueue);

extern "C" void fn_82507EA8(Picker_82507EA8 *self, float elapsed)
{
    self->cooldown -= elapsed;
    if (self->cooldown < 0.0f) {
        self->cooldown = 0.0f;
    }
    if (self->pending != 0) {
        self->pendingTime -= elapsed;
        if (self->pendingTime <= 0.0f || fn_82508160(self, self->pending, 1, 0) != 0) {
            self->pendingForce = 0;
            self->pending = 0;
            {
                float *time = &self->pendingTime;

                *time = 0.0f;
            }
        }
    }
    for (std::vector<Blocked_82507EA8>::iterator it = self->blocked.begin(); it != self->blocked.end();) {
        it->time -= elapsed;
        if (it->time <= 0.0f) {
            it = self->blocked.erase(it);
        } else {
            ++it;
        }
    }
    for (std::vector<Queued_82507EA8>::iterator it = self->queued.begin(); it != self->queued.end();) {
        it->time -= elapsed;
        if (it->time <= 0.0f) {
            fn_82508160(self, it->target, it->force, 1);
            it = self->queued.erase(it);
        } else {
            ++it;
        }
    }
}
