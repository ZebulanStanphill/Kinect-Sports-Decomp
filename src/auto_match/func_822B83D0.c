typedef struct Temporary_822B83D0 {
    int words[2];
} Temporary_822B83D0;

typedef struct Animation_822B83D0 Animation_822B83D0;

typedef struct Player_822B83D0 {
    char pad0[0x160];
    int name;    /* 0x160 */
    int pad164;  /* 0x164 */
    int current; /* 0x168 */
    char pad16c[0x18];
    float time; /* 0x184 */
} Player_822B83D0;

typedef struct Owner_822B83D0 {
    char pad0[0xc];
    Player_822B83D0 *player; /* 0x0C */
} Owner_822B83D0;

typedef struct Source_822B83D0 {
    char pad0[0x40];
    int clip;    /* 0x40 */
    int name;    /* 0x44 */
    float end;   /* 0x48 */
    float start; /* 0x4c */
    float time;  /* 0x50 */
    char pad54[0x4];
    signed char flags; /* 0x58 */
} Source_822B83D0;

typedef union Bits_822B83D0 {
    unsigned int u;
    float f;
} Bits_822B83D0;

extern const float lbl_821CA45C[2];
extern const float lbl_821954B0[0x28a];
extern unsigned int lbl_83265A28;

extern void fn_8255F880(Temporary_822B83D0 *temporary, void *source);
extern Animation_822B83D0 *fn_8255F8D0(Temporary_822B83D0 *temporary, float start, float end, int flags);
extern int fn_8251F720(int *name, int flags);
extern void fn_8255F448(Player_822B83D0 *player, Animation_822B83D0 *animation, int id, int flags);
extern void fn_827F21F0(Player_822B83D0 *player);
extern void fn_827F2220(Player_822B83D0 *player);

Animation_822B83D0 *fn_822B83D0(Owner_822B83D0 *self, Source_822B83D0 *source)
{
    Temporary_822B83D0 temporary;
    Animation_822B83D0 *animation;
    Player_822B83D0 *player;
    int id;
    float start;
    float end;
    int flags;
    Bits_822B83D0 r;

    fn_8255F880(&temporary, &source->clip);
    end = source->end;
    flags = source->flags;
    if (source->start == lbl_821954B0[14]) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        r.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
        start = r.f - lbl_821CA45C[1];
    } else {
        start = source->start;
    }
    animation = fn_8255F8D0(&temporary, start, end, flags);
    player = self->player;
    player->time = source->time;
    id = fn_8251F720(&source->name, 0);
    fn_8255F448(player, animation, id, 0);
    player->current = 0;
    player->name = source->name;
    fn_827F21F0(self->player);
    fn_827F2220(self->player);
    return animation;
}
