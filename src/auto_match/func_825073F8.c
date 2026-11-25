typedef struct Player_825073F8 Player_825073F8;

typedef struct PlayerVtbl_825073F8 {
    void *slots0[3];
    void (*Load)(Player_825073F8 *self); /* 0xC */
    void *slot10;
    int (*IsLoaded)(Player_825073F8 *self); /* 0x14 */
    void *slots18[13];
    void *(*CreateHandle)(Player_825073F8 *self); /* 0x4C */
} PlayerVtbl_825073F8;

struct Player_825073F8 {
    PlayerVtbl_825073F8 *vtbl; /* 0x0 */
    char pad4[0x7C];
    void **clips[1]; /* 0x80 */
};

typedef struct Owner_825073F8 {
    char pad0[0x44];
    int clipIndex; /* 0x44 */
    char pad48[0x820 - 0x48];
    float speed; /* 0x820 */
    char pad824[0x838 - 0x824];
    float fixedRate; /* 0x838 */
} Owner_825073F8;

typedef struct Sound_825073F8 {
    char pad0[0xC];
    void *handle; /* 0xC */
} Sound_825073F8;

typedef struct Object_825073F8 {
    char pad0[0x4C];
    Owner_825073F8 *owner; /* 0x4C */
    char pad50[0x180 - 0x50];
    Sound_825073F8 sound; /* 0x180 */
    char pad190[0x2B0 - 0x190];
    float range; /* 0x2B0 */
    char pad2B4[0x8C0 - 0x2B4];
    Player_825073F8 *player; /* 0x8C0 */
    char pad8C4[0xB68 - 0x8C4];
    void *playing;          /* 0xB68 */
    unsigned char started;  /* 0xB6C */
    unsigned char stopping; /* 0xB6D */
    char padB6E;
    char stopArgs[1]; /* 0xB6F */
    char padB70[0xF58 - 0xB70];
    unsigned int state; /* 0xF58 */
    char padF5C[0xFEC - 0xF5C];
    void *pending; /* 0xFEC */
} Object_825073F8;

/* A tuning value in .data. */
extern float lbl_8327F880[8];

extern void fn_82507590(Object_825073F8 *self, void *args);
extern void fn_82507668(Object_825073F8 *self, void **pending);
extern void fn_827EF828(void *h, float f);
extern void fn_827EFFE8(void *h);
extern void fn_827F0180(void *h, void *a, int b, int c, int d);
extern void fn_82592430(void *a, int b);

void fn_825073F8(Object_825073F8 *self, int arg)
{
    Player_825073F8 *player;
    float rate;

    {
        float *range = &self->range;

        *range = 10.0f;
    }
    if (self->stopping != 0) {
        if (self->state != 0x3E5) {
            fn_82507590(self, self->stopArgs);
            self->stopping = 0;
        }
    } else if (self->started == 0) {
        player = self->player;
        if (player != 0) {
            if (player->vtbl->IsLoaded(player) == 0) {
                player->vtbl->Load(player);
            }
            if (player->vtbl->IsLoaded(player) != 0) {
                Sound_825073F8 *sound = &self->sound;

                if (sound->handle == 0) {
                    sound->handle = self->player->vtbl->CreateHandle(self->player);
                }
                self->playing = sound->handle;
                self->started = 1;
                if (self->pending != 0) {
                    fn_82507668(self, &self->pending);
                }
            }
        }
    }
    if (self->started != 0) {
        rate = 0.0f;
        if (!(self->owner->fixedRate > 0.0f)) {
            rate = self->owner->speed * lbl_8327F880[5];
        }
        fn_827EF828(self->playing, rate);
        fn_827EFFE8(self->playing);
        if (self->player != 0) {
            fn_827F0180(self->playing, *self->player->clips[self->owner->clipIndex], 1, 0, 0);
        }
    }
    fn_82592430(self, arg);
}
