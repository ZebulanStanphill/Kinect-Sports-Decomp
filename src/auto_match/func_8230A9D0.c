/* Ball caught: stops the current throw camera, resets its target and velocity, plays the
   "ballcatch" sound and moves the camera to the given position and target. */

#include "xdk/vectorintrinsics.h"

typedef struct Camera_8230A9D0 {
    char pad0[0xbd0];
    __vector4 target; /* 0xbd0 */
    char padbe0[0x50];
    __vector4 velocity; /* 0xc30 */
} Camera_8230A9D0;

typedef struct Tracker_8230A9D0 {
    char pad0[0x11c];
    void *owner; /* 0x11c */
} Tracker_8230A9D0;

typedef struct Game_8230A9D0 {
    char pad0[0x42c];
    int state; /* 0x42c */
    char pad430[0x570];
    Tracker_8230A9D0 *tracker; /* 0x9a0 */
    char pad9a4[0x46c];
    Camera_8230A9D0 *camera; /* 0xe10 */
} Game_8230A9D0;

typedef struct Round_8230A9D0 {
    char pad0[0x18];
    void *sound; /* 0x18 */
    char pad1c[0xc];
    int team;   /* 0x28 */
    int player; /* 0x2c */
    char pad30[0x204];
    int caught; /* 0x234 */
} Round_8230A9D0;

typedef struct Catch_8230A9D0 {
    char pad0[0xc];
    Round_8230A9D0 *round; /* 0xc */
    Game_8230A9D0 *game;   /* 0x10 */
} Catch_8230A9D0;

extern int fn_822B6FF0(Tracker_8230A9D0 *tracker, Camera_8230A9D0 *camera);
extern void fn_822B9390(void *owner, Camera_8230A9D0 *camera, int event);
extern void fn_823CD840(Game_8230A9D0 *game, int team, int player);
extern void fn_822CCC78(void *sound, const char *name);
extern void fn_8236A360(Game_8230A9D0 *game, int mode, __vector4 position, __vector4 target);

static __forceinline void Reset_8230A9D0(Camera_8230A9D0 *camera)
{
    __vector4 zero;

    zero = __VMXGetReg(77);
    camera->target = zero;
    camera->velocity = __VMXGetReg(77);
}

void fn_8230A9D0(Catch_8230A9D0 *self, __vector4 position, __vector4 target)
{
    Game_8230A9D0 *game;
    Tracker_8230A9D0 *tracker;
    Camera_8230A9D0 *camera;

    game = self->game;
    if (game->state != 3) {
        tracker = game->tracker;
        camera = game->camera;
        if (tracker != 0 && fn_822B6FF0(tracker, camera) == 0) {
            fn_822B9390(tracker->owner, camera, 0x21);
            Reset_8230A9D0(game->camera);
        }
    }
    game->state = 3;
    self->round->caught = 1;
    fn_823CD840(self->game, self->round->team, self->round->player);
    Reset_8230A9D0(self->game->camera);
    fn_822CCC78(self->round->sound, "ballcatch");
    fn_8236A360(self->game, 1, position, target);
}
