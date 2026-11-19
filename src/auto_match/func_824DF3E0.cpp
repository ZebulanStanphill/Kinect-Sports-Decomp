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
#include <vector>
#include <functional>
#undef _Xlength_error
#undef _Xout_of_range
#undef _Xfunc

struct Sample_824DF3E0 {
    float time;
    float value;
};

typedef std::vector<Sample_824DF3E0> Samples_824DF3E0;

struct History_824DF3E0 {
    Samples_824DF3E0 samples;                                       /* 0x00 */
    float window;                                                   /* 0x10 */
    Sample_824DF3E0 best;                                           /* 0x14 */
    float now;                                                      /* 0x1c */
    std::tr1::function<int(const float &, const float &)> isBetter; /* 0x20 */
};

extern "C" void fn_824DF3E0(History_824DF3E0 *self)
{
    int expired = self->now - self->best.time >= self->window;
    Samples_824DF3E0::iterator it = self->samples.begin();

    while (it != self->samples.end() && self->now - it->time >= self->window) {
        it = self->samples.erase(it);
    }
    if (expired && it != self->samples.end()) {
        Sample_824DF3E0 best = *it;
        for (Samples_824DF3E0::iterator other = it + 1; other != self->samples.end(); ++other) {
            if (self->isBetter(best.value, other->value)) {
                best = *other;
            }
        }
        self->best = best;
    }
}
