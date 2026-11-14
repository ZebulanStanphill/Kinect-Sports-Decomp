typedef struct Player_8235DA80 Player_8235DA80;

typedef struct PlayerVtbl_8235DA80 {
    void *f0;
    void (*Update)(Player_8235DA80 *self);
    void (*Start)(Player_8235DA80 *self, int arg);
} PlayerVtbl_8235DA80;

typedef struct PlayerData_8235DA80 {
    char pad0[0xd0];
    int queue;
} PlayerData_8235DA80;

struct Player_8235DA80 {
    PlayerVtbl_8235DA80 *vt;
    int x4;
    int x8;
    PlayerData_8235DA80 *data;
    int x10;
    int x14;
    int busy;
};

typedef struct Config_8235DA80 {
    char pad0[0x1fc];
    unsigned char enabled;
    char pad1fd[3];
    int mode;
} Config_8235DA80;

typedef struct Scene_8235DA80 {
    char pad0[0x194];
    Config_8235DA80 *config;
    char pad198[0xc14 - 0x198];
    int active;
    char padc18[0x2b40 - 0xc18];
    int blocked;
    char pad2b44[0x2ba8 - 0x2b44];
    Player_8235DA80 *player;
    int startArg;
    unsigned int state;
} Scene_8235DA80;

extern void fn_82547C80(int *queue, int a, int b);

void fn_8235DA80(Scene_8235DA80 *self)
{
    if (self->active == 0) {
        return;
    }
    if (self->player != 0) {
        self->player->vt->Update(self->player);
    }
    switch (self->state) {
    case 0: {
        Config_8235DA80 *config = self->config;
        int mode = config->mode;
        unsigned char enabled;
        if (mode == 5) {
            enabled = 0;
        } else if (mode == 2 || mode == 3 || mode == 1) {
            enabled = config->enabled;
        } else {
            enabled = 1;
        }
        if (!enabled) {
            return;
        }
        if (self->blocked != 0) {
            return;
        }
        if (self->player == 0) {
            return;
        }
        self->player->vt->Start(self->player, self->startArg);
        self->state = 1;
        break;
    }
    case 1:
        if (self->player != 0 && self->player->busy != 0) {
            return;
        }
        self->state = 2;
        break;
    case 2:
        if (self->player != 0) {
            fn_82547C80(&self->player->data->queue, 0, 0);
        }
        self->state = 3;
        break;
    }
}
