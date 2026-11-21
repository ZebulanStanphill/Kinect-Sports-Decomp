/* Per-frame update of a state machine: in state 2 a countdown runs down by
 * the frame time and switches to state 3 when it reaches zero; in state 4 the
 * owner is moved to state 3 once the linked session is idle. */
typedef struct Session_82409EF0 {
    char pad00[0xC];
    int busy; /* 0x0C */
} Session_82409EF0;

typedef struct Match_82409EF0 {
    char pad00[0x18];
    Session_82409EF0 *session; /* 0x18 */
} Match_82409EF0;

typedef struct Game_82409EF0 {
    char pad00[0xD4];
    Match_82409EF0 *match; /* 0xD4 */
} Game_82409EF0;

typedef struct World_82409EF0 {
    char pad00[0x4];
    Game_82409EF0 *game; /* 0x04 */
} World_82409EF0;

typedef struct State_82409EF0 {
    char pad00[0x8];
    void *owner; /* 0x08 */
    char pad0C[0x4];
    World_82409EF0 *world; /* 0x10 */
    char pad14[0x28];

    union {
        float seconds;
        unsigned int bits;
    } countdown; /* 0x3C */

    char pad40[0x18];
    int state; /* 0x58 */
} State_82409EF0;

extern void fn_82359698(void *owner, int state);
extern void fn_82409F90(State_82409EF0 *self, int state);

void fn_82409EF0(State_82409EF0 *self, float elapsed)
{
    float remaining;

    switch (self->state) {
    case 2:
        if (self->countdown.bits == 0) {
            return;
        }
        remaining = self->countdown.seconds - elapsed;
        self->countdown.seconds = -remaining >= 0.0f ? 0.0f : remaining;
        if (self->countdown.seconds == 0.0f) {
            fn_82409F90(self, 3);
        }
        break;
    case 4:
        if (self->world->game->match->session->busy == 0) {
            fn_82359698(self->owner, 3);
        }
        break;
    }
}
