typedef struct Audio_822B7178 Audio_822B7178;

typedef struct AudioVtable_822B7178 {
    void *pad0[30];
    void (*fade)(Audio_822B7178 *, int, float, int);
    void (*reset)(Audio_822B7178 *, float, int);
} AudioVtable_822B7178;

struct Audio_822B7178 {
    AudioVtable_822B7178 *vtable;
};

typedef struct Channel_822B7178 {
    char pad0[0x1d0];

    struct {
        char pad0[0x10];
        unsigned int flags;
    } playback;

    char pad1e4[0x8c0 - 0x1e4];
    Audio_822B7178 *audio;
} Channel_822B7178;

typedef struct Player_822B7178 {
    char pad0[0x14];
    Channel_822B7178 *channel;
    char pad18[0x124 - 0x18];
    int muted;
    char pad128[4];
    int overrideVolume;
    char pad130[8];
    int fading;
} Player_822B7178;

extern void fn_822B70F0(Player_822B7178 *, float, int);
extern const float lbl_821CA45C[2];
extern const float ltcg_pool_0_0f;

void fn_822B7178(Player_822B7178 *self, float volume)
{
    if (self->overrideVolume != 0) {
        Audio_822B7178 *audio = self->channel->audio;
        if (audio != 0)
            audio->vtable->reset(audio, volume, 0);
        if (volume < lbl_821CA45C[1]) {
            float zero = 0.0f;
            self->channel->playback.flags |= 0x20;
            self->channel->playback.flags |= 8;
            self->fading = 1;
            self->muted = 0;
            audio->vtable->fade(audio, 0, zero, 0);
        } else {
            void *playback = &self->channel->playback;
            ((unsigned int *)playback)[4] &= ~0x20u;
            self->channel->playback.flags &= ~8u;
            self->fading = 0;
        }
    } else {
        fn_822B70F0(self, volume, 0);
    }
}
