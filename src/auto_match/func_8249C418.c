typedef struct Listener_8249C418 Listener_8249C418;

typedef struct ListenerVtbl_8249C418 {
    void *slot0;
    unsigned int (*notify)(Listener_8249C418 *self, int id, int player, int exclusive, int idle); /* 0x4 */
    void *slot8;
    void (*reset)(Listener_8249C418 *self, int id); /* 0xc */
} ListenerVtbl_8249C418;

struct Listener_8249C418 {
    ListenerVtbl_8249C418 *vtbl;
};

typedef struct Tree_8249C418 {
    int pad;
    void *head;
} Tree_8249C418;

typedef struct Screen_8249C418 {
    char pad0[0x2c];
    int pending; /* 0x2c */
} Screen_8249C418;

typedef struct Input_8249C418 {
    char pad0[0x4];
    unsigned int mode; /* 0x04 */
    int state;         /* 0x08 */
    char padC[0x8];
    int players[2]; /* 0x14 */
    char pad1C[0x4];
    int activePlayer; /* 0x20 */
    char pad24[0x10];
    Tree_8249C418 listeners; /* 0x34 */
    char pad3C[0x30];
    unsigned int blockedFlags; /* 0x6c */
    char pad70[0x18];
    int busy;  /* 0x88 */
    int dirty; /* 0x8c */
    char pad90[0x20];
    int id; /* 0xb0 */
    char padB4[0x5c];
    Screen_8249C418 *screen; /* 0x110 */
} Input_8249C418;

extern int fn_8249C848(Input_8249C418 *self, unsigned int flag, int *changed);
extern Listener_8249C418 **fn_8249CB58(Tree_8249C418 *tree, unsigned int *key);
extern int fn_8249D600(Screen_8249C418 *screen, unsigned int mode);
extern void *fn_8225F160(void);
extern int fn_8225F3C0(void *settings);

unsigned int fn_8249C418(Input_8249C418 *self, unsigned int flag, int force, int notify, int perPlayer)
{
    int changed = 0;
    unsigned int ok = 1;
    Listener_8249C418 *listener;
    int exclusive;
    int idle;
    int singlePlayer;
    int i;
    int settled;
    int screenIdle;

    if (force != 0 || fn_8249C848(self, flag, &changed) == 0) {
        listener = *fn_8249CB58(&self->listeners, &flag);
        listener->vtbl->reset(listener, self->id);
    } else {
        if (notify != 0) {
            exclusive = self->state == 2;
            if (exclusive && self->busy == 0) {
                idle = 1;
            } else {
                idle = 0;
            }
            if (perPlayer != 0) {
                int players = fn_8225F3C0(fn_8225F160());

                if (self->state != 2 && self->state != 1 && (self->blockedFlags & flag) == 0 &&
                    players == 1) {
                    singlePlayer = 1;
                } else {
                    singlePlayer = 0;
                }
                for (i = 0; i < 2; i++) {
                    if (!singlePlayer || i == self->activePlayer) {
                        listener = *fn_8249CB58(&self->listeners, &flag);
                        ok &= listener->vtbl->notify(listener, self->id, self->players[i], exclusive, idle);
                    }
                }
            } else {
                listener = *fn_8249CB58(&self->listeners, &flag);
                ok &= listener->vtbl->notify(listener, self->id, 0, exclusive, idle);
            }
        }
        if (changed != 0) {
            screenIdle = self->screen->pending == 0;
            if (self->state != 0 || fn_8249D600(self->screen, self->mode) != 0) {
                settled = 1;
            } else {
                settled = 0;
            }
            if (settled & screenIdle) {
                self->dirty = 1;
            }
        }
    }
    return ok;
}
