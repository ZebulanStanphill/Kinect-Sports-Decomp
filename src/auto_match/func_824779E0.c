/* Plays one of four random sounds at a random screen position: near the current player's screen
   position (within 40 units) when asked to and there is one, otherwise anywhere in the
   configured area; then restarts the sound handle and picks the next random delay. */

#include "xdk/vectorintrinsics.h"

typedef struct Vec2_824779E0 {
    float x;
    float y;
} Vec2_824779E0;

typedef struct Settings_824779E0 {
    unsigned char pad000[0xfc];
    float areaMinX; /* 0xfc */
    float areaMaxX; /* 0x100 */
    float areaMinY; /* 0x104 */
    float areaMaxY; /* 0x108 */
    unsigned char pad10C[4];
    float delayMin; /* 0x110 */
    float delayMax; /* 0x114 */
    float volume;   /* 0x118 */
    float depthMin; /* 0x11c */
    float depthMax; /* 0x120 */
} Settings_824779E0;

typedef struct Player_824779E0 {
    unsigned char pad00[0x24];
    Vec2_824779E0 screen; /* 0x24 */
} Player_824779E0;

typedef struct Players_824779E0 {
    Player_824779E0 *players[2]; /* 0x00 */
    int current;                 /* 0x08 */
} Players_824779E0;

typedef struct Context_824779E0 {
    unsigned char pad000[0x84c];
    int bank; /* 0x84c */
} Context_824779E0;

typedef struct Self_824779E0 {
    unsigned char pad000[0xa8];
    int sounds[4]; /* 0xa8 */
    unsigned char padB8[0xc8 - 0xb8];
    int handle; /* 0xc8 */
    unsigned char padCC[0x140 - 0xcc];
    float delay; /* 0x140 */
    unsigned char pad144[0x15c - 0x144];
    Context_824779E0 *context; /* 0x15c */
} Self_824779E0;

extern Settings_824779E0 lbl_831D3AB0;
extern unsigned int lbl_83265A28;
/* 4.0f, the number of sounds; read as a variable (a literal shares the base register of 80.0f/40.0f). */
extern const float lbl_8218E8FC;
extern const float lbl_821CA45C[2];
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

extern Players_824779E0 *fn_82275128(void);
extern void fn_82531898(Vec2_824779E0 *screen, float depth, __vector4 *position);
extern int fn_82560100(Context_824779E0 *context, int *sound, __vector4 *position, float volume,
                       __vector4 *offset, int c, int d, int e);
extern int fn_82535298(int *h, int id, void *a, void *b);
extern void fn_82536288(int *h);

static __forceinline float Random(unsigned int *seed)
{
    float one = lbl_821CA45C[1];

    union {
        unsigned int i;
        float f;
    } value;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    value.i = *seed & 0x7fffff | 0x3f800000;
    return value.f - one;
}

static __forceinline float RandomRange(unsigned int *seed, float lo, float hi)
{
    return lo + (hi - lo) * Random(seed);
}

void fn_824779E0(Self_824779E0 *self, unsigned char nearPlayer)
{
    Players_824779E0 *players;
    Player_824779E0 *player;
    __vector4 position;
    int *sound;

    players = fn_82275128();
    player = players->players[players->current];
    {
        Vec2_824779E0 screen;

        if (player != 0 && nearPlayer != 0) {
            screen = player->screen;
            screen.x = screen.x + Random(&lbl_83265A28) * 80.0f - 40.0f;
            screen.y = screen.y + Random(&lbl_83265A28) * 80.0f - 40.0f;
        } else {
            screen.x = RandomRange(&lbl_83265A28, lbl_831D3AB0.areaMinX, lbl_831D3AB0.areaMaxX);
            screen.y = RandomRange(&lbl_83265A28, lbl_831D3AB0.areaMinY, lbl_831D3AB0.areaMaxY);
        }
        fn_82531898(&screen, RandomRange(&lbl_83265A28, lbl_831D3AB0.depthMin, lbl_831D3AB0.depthMax),
                    &position);
    }
    sound = &self->sounds[0];
    switch ((int)(Random(&lbl_83265A28) * lbl_8218E8FC)) {
    case 1:
        sound = &self->sounds[1];
        break;
    case 2:
        sound = &self->sounds[2];
        break;
    case 3:
        sound = &self->sounds[3];
        break;
    }
    fn_82560100(self->context, sound, &position, lbl_831D3AB0.volume, 0, 0, 0, 0);
    {
        int h = self->handle;

        h = fn_82535298(&h, self->context->bank, lbl_83296BC0, lbl_83296BD0);
        fn_82536288(&h);
    }
    self->delay = RandomRange(&lbl_83265A28, lbl_831D3AB0.delayMin, lbl_831D3AB0.delayMax);
}
