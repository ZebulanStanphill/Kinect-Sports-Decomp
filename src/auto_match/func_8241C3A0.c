typedef struct Player_8241C3A0 {
    char pad0[0x30];
    int active; /* 0x30 */
    char pad34[0x38 - 0x34];
    int tracked; /* 0x38 */
    char pad3C[0x64 - 0x3c];
    float distance; /* 0x64 */
    char pad68[0x78 - 0x68];
    int engaged; /* 0x78 */
    char pad7C[0x1d0 - 0x7c];
    int state; /* 0x1d0 */
} Player_8241C3A0;

typedef struct Settings_8241C3A0 {
    char pad0[0x310];
    float range; /* 0x310 */
} Settings_8241C3A0;

typedef struct Game_8241C3A0 {
    Settings_8241C3A0 *settings; /* 0x000 */
    char pad4[0x30 - 0x4];
    Player_8241C3A0 *player; /* 0x030 */
    char pad34[0x88 - 0x34];
    Player_8241C3A0 **begin; /* 0x088 */
    Player_8241C3A0 **end;   /* 0x08c */
    char pad90[0x254 - 0x90];
    int c; /* 0x254 */
    int a; /* 0x258 */
    int b; /* 0x25c */
    char pad260[0x270 - 0x260];
    int g; /* 0x270 */
    int h; /* 0x274 */
    char pad278[0x28c - 0x278];
    int d; /* 0x28c */
} Game_8241C3A0;

typedef struct Status_8241C3A0 {
    int a;        /* 0x00 */
    int b;        /* 0x04 */
    int c;        /* 0x08 */
    int d;        /* 0x0c */
    int engaged;  /* 0x10 */
    int inRange;  /* 0x14 */
    int g;        /* 0x18 */
    int h;        /* 0x1c */
    int tracked;  /* 0x20 */
    int ready;    /* 0x24 */
    int idle[15]; /* 0x28 */
} Status_8241C3A0;

extern void XMemSet(void *dest, int value, unsigned int size);

void fn_8241C3A0(Game_8241C3A0 *self, Status_8241C3A0 *status)
{
    Player_8241C3A0 **it;
    int *idle;

    status->a = self->a;
    status->b = self->b;
    status->c = self->c;
    status->d = self->d;
    status->engaged = self->player != 0 && self->player->engaged != 0;
    status->inRange = self->player != 0 && self->player->distance < self->settings->range;
    status->h = self->h;
    status->tracked = self->player != 0 && self->player->tracked != 0;
    status->ready = self->player != 0 && self->player->state == 3;
    status->g = self->g;
    idle = status->idle;
    XMemSet(idle, 0, sizeof(status->idle));
    for (it = self->begin; it != self->end; it++, idle++) {
        if ((*it)->active == 0) {
            *idle = 1;
        }
    }
}
