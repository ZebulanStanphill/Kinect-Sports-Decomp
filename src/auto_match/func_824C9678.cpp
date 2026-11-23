#include <string>
#include <functional>

struct Effect_824C9678;

struct Clip_824C9678 {
    char pad0[0x48];
    Effect_824C9678 *first; /* 0x48 */
    Effect_824C9678 *last;  /* 0x4c */
    char pad50[0x70 - 0x50];
    std::tr1::function<void(float)> onUpdate; /* 0x70 */
};

struct Player_824C9678 {
    char pad0[0x8];
    std::string current; /* 0x08 */
    std::string pending; /* 0x24 */

    union {
        float value;
        unsigned int bits;
    } delay; /* 0x40 */

    char pad44[0x64 - 0x44];
    Effect_824C9678 *first; /* 0x64 */
    Effect_824C9678 *last;  /* 0x68 */
};

struct Updater_824C9678 {
    Updater_824C9678(const float &dt, Player_824C9678 *player) : dt(&dt), player(player)
    {
    }

    const float *dt;
    Player_824C9678 *player;
};

extern "C" {
Clip_824C9678 *fn_824C9FB8(Player_824C9678 *self, const char *name);
void fn_824C9D48(Player_824C9678 *self, const char *name);
/* std::for_each over the effects with the updater (an out-of-line instantiation; the updater's
   dt pointer points at the copy of dt that each inlined UpdateEffects call owns) */
Updater_824C9678 fn_824CC5A0(Effect_824C9678 *first, Effect_824C9678 *last, Updater_824C9678 updater);
}

static __forceinline void UpdateEffects(Player_824C9678 *self, Effect_824C9678 *first, Effect_824C9678 *last,
                                        float dt)
{
    fn_824CC5A0(first, last, Updater_824C9678(dt, self));
}

extern "C" void fn_824C9678(Player_824C9678 *self, float dt)
{
    Clip_824C9678 *clip;
    float delay;

    clip = fn_824C9FB8(self, self->current.c_str());
    if (clip != 0) {
        if (clip->onUpdate) {
            clip->onUpdate(dt);
        }
        UpdateEffects(self, clip->first, clip->last, dt);
    }
    UpdateEffects(self, self->first, self->last, dt);
    if (self->delay.bits != 0) {
        delay = self->delay.value - dt;
        delay = -delay >= 0.0f ? 0.0f : delay;
        self->delay.value = delay;
        if (delay == 0.0f) {
            fn_824C9D48(self, self->pending.c_str());
            self->delay.value = 0.0f;
            self->pending = "";
        }
    }
}
