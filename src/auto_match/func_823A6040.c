typedef struct Batter_823A6040 Batter_823A6040;

typedef struct BatterVtbl_823A6040 {
    void *slots[40];
    float (*GetSwingSpeed)(Batter_823A6040 *self); /* 0xa0 */
} BatterVtbl_823A6040;

struct Batter_823A6040 {
    BatterVtbl_823A6040 *vtbl;
    char padding4[0x64];
    void *model; /* 0x68 */
    char padding6c[0x30];
    unsigned int hits;   /* 0x9c */
    unsigned int target; /* 0xa0 */
};

typedef struct Stage_823A6040 {
    char padding[0xa4];
    void *audio; /* 0xa4 */
    char paddinga8[0xcc];
    char *effects; /* 0x174 */
    char padding178[0x164];
    void *camera;            /* 0x2dc */
    Batter_823A6040 *batter; /* 0x2e0 */
} Stage_823A6040;

typedef struct Minigame_823A6040 {
    char padding[0x8];
    Stage_823A6040 *stage; /* 0x08 */
    char padding0c[0xc];
    char trail[0x8]; /* 0x18 */
    int pickedUp;    /* 0x20 */
} Minigame_823A6040;

extern const float lbl_821922C0[28];
extern void fn_823A6168(Minigame_823A6040 *self);
extern void fn_8239FF60(void *camera, int shot);
extern int fn_82508078(void *audio, const char *cue, int argument);
extern void fn_82359420(Stage_823A6040 *stage, void *effect, float elapsed, void *trail);
extern void fn_823A6490(Minigame_823A6040 *self);
extern void fn_823A65E0(Minigame_823A6040 *self);
extern void fn_823A67E8(Minigame_823A6040 *self, float elapsed);

void fn_823A6040(Minigame_823A6040 *self, float elapsed)
{
    Batter_823A6040 *batter;
    unsigned int hits;

    fn_823A6168(self);
    batter = self->stage->batter;
    hits = batter->hits;
    if (hits != 0) {
        self->pickedUp = 0;
        if (hits > batter->target + 1) {
            fn_82508078(self->stage->audio, "minigame_twinbat_encouragement", 0);
        }
    } else {
        if (self->pickedUp == 0) {
            if (batter->vtbl->GetSwingSpeed(batter) > lbl_821922C0[4]) {
                fn_8239FF60(self->stage->camera, 0x1b);
            }
            fn_82508078(self->stage->audio, "minigame_twinbat_pickup", 0);
        }
        self->pickedUp = 1;
    }
    if (batter->model != 0) {
        fn_82359420(self->stage, self->stage->effects + 0x84c, elapsed, self->trail);
    }
    fn_823A6490(self);
    fn_823A65E0(self);
    fn_823A67E8(self, elapsed);
}
