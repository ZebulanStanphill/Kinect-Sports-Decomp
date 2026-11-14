typedef struct Player_8235FBC8 Player_8235FBC8;
typedef struct PlayerVt_8235FBC8 {
    void *slots[0x12];
    void (*onTimeout)(Player_8235FBC8 *self);   /* 0x48 */
} PlayerVt_8235FBC8;
struct Player_8235FBC8 {
    PlayerVt_8235FBC8 *vt;
};

typedef struct Controller_8235FBC8 {
    char pad0[0x4];
    Player_8235FBC8 *player;    /* 0x04 */
} Controller_8235FBC8;

typedef struct State_8235FBC8 {
    char pad0[0x24];
    int busy;                   /* 0x024 */
    char pad28[0x1a0 - 0x28];
    int flag1a0;                /* 0x1a0 */
    char pad1a4[0x1e0 - 0x1a4];
    int flag1e0;                /* 0x1e0 */
    char pad1e4[0x29c - 0x1e4];
    int result;      /* 0x29c */
} State_8235FBC8;

typedef struct Obj_8235FBC8 {
    char pad0[0xa4];
    void *anim;                 /* 0x0a4 */
    char padA8[0x2b20 - 0xa8];
    Controller_8235FBC8 *controller;    /* 0x2b20 */
    char pad2b24[0x2c04 - 0x2b24];
    float timer;                /* 0x2c04 */
    int lastResult;    /* 0x2c08 */
} Obj_8235FBC8;

extern int lbl_83265A28;
extern State_8235FBC8 *fn_82417F58(Controller_8235FBC8 *controller);
extern int fn_82419C70(Controller_8235FBC8 *controller);
extern void fn_82508078(void *anim, const char *name, int flags);

void fn_8235FBC8(Obj_8235FBC8 *self, float dt)
{
    Controller_8235FBC8 *controller = self->controller;
    State_8235FBC8 *state = fn_82417F58(controller);

    if (self->timer > 0.0f && state->busy != 0) {
        if (fn_82419C70(controller) != 0 || state->flag1a0 != 0 || state->flag1e0 != 0) {
            self->timer -= dt;
            if (self->timer <= 0.0f) {
                self->controller->player->vt->onTimeout(self->controller->player);
            }
        }
    }
    if (state->busy == 0 && state->result != self->lastResult) {
        if ((unsigned int)state->result < 2) {
            lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
            fn_82508078(self->anim, lbl_83265A28 > 0 ? "bowlerunhappy" : "bowlercelebrateunhappy", 0);
        }
        self->lastResult = state->result;
    }
}
