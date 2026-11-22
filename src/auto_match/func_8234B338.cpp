/* Counts a timer down and fires its callback (and restarts its animation) when it reaches zero. */
#include <string>

struct Timer_8234B338 {
    void *owner;      /* 0x00 */
    std::string name; /* 0x04 */
    char padding20[4];
    void *animation; /* 0x24 */
    char padding28[8];

    union {
        unsigned int bits;
        float seconds;
    } remaining; /* 0x30 */

    int enabled; /* 0x34 */
};

extern "C" void fn_8234B0C8(Timer_8234B338 *self, const char *name, float time);
extern "C" void fn_827F5708(void *animation, float time);

extern "C" void fn_8234B338(Timer_8234B338 *self, float elapsed)
{
    if (self->remaining.bits != 0) {
        float remaining = self->remaining.seconds - elapsed;

        self->remaining.seconds = -remaining >= 0.0f ? 0.0f : remaining;
        if (self->remaining.seconds == 0.0f) {
            fn_8234B0C8(self, self->name.c_str(), 0.0f);
            if (self->enabled != 0 && self->animation != 0) {
                fn_827F5708(self->animation, 0.0f);
            }
        }
    }
}
