typedef struct Player_82405500 {
    unsigned char pad0[0x3e8];
    int locked; /* 0x3e8 */
} Player_82405500;

typedef struct Status_82405500 {
    unsigned char pad0[0xc];
    int busy; /* 0xc */
} Status_82405500;

typedef struct Scene_82405500 {
    unsigned char pad0[0x78];
    Status_82405500 *status; /* 0x78 */
} Scene_82405500;

typedef struct Sequence_82405500 {
    unsigned char pad0[0x8];
    Player_82405500 *player; /* 0x08 */
    unsigned char padC[0x4];
    Scene_82405500 *scene; /* 0x10 */
    unsigned char pad14[0x4];
    unsigned int state; /* 0x18 */
    unsigned char pad1C[0x18];
    float timer; /* 0x34 */
} Sequence_82405500;

extern void fn_82405638(Sequence_82405500 *self, int state);
extern void fn_82405898(Sequence_82405500 *self);
extern void fn_82405A10(Sequence_82405500 *self);
extern void fn_82359698(Player_82405500 *player, int locked);

void fn_82405500(Sequence_82405500 *self, float elapsed)
{
    switch (self->state) {
    case 2:
        fn_82405898(self);
        break;
    case 4:
        fn_82405A10(self);
        break;
    case 0:
        if (self->scene->status->busy == 0) {
            fn_82405638(self, 1);
        }
        break;
    case 1:
        self->timer -= elapsed;
        if (self->timer <= 0.0f) {
            fn_82405638(self, 2);
        }
        break;
    case 3:
        self->timer -= elapsed;
        if (self->timer <= 0.0f) {
            fn_82405638(self, 4);
        }
        break;
    case 5:
    case 6:
        self->timer -= elapsed;
        if (self->timer <= 0.0f) {
            fn_82405638(self, 1);
        }
        break;
    case 7:
        self->timer -= elapsed;
        if (self->timer <= 0.0f) {
            Player_82405500 *player = self->player;
            player->locked = 1;
            fn_82359698(player, 1);
            fn_82405638(self, 8);
        }
        break;
    }
}
