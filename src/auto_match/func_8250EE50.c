typedef struct Temporary_8250EE50 {
    int words[2];
} Temporary_8250EE50;

typedef struct Animation_8250EE50 Animation_8250EE50;

typedef struct Owner_8250EE50 {
    char pad0[0x18];
    int source[1]; /* 0x18 */
    int name;      /* 0x1C */
} Owner_8250EE50;

typedef struct Player_8250EE50 {
    char pad0[0x160];
    int name;    /* 0x160 */
    int pad164;  /* 0x164 */
    int current; /* 0x168 */
    char pad16c[0x18];
    float time; /* 0x184 */
} Player_8250EE50;

extern const float lbl_821CA45C[2];
/* The link-time pooled 0.0f, read as a variable: the original keeps its address and reloads it after calls. */
extern const float ltcg_pool_0_0f;

extern void fn_8255F880(Temporary_8250EE50 *temporary, void *source);
extern Animation_8250EE50 *fn_8255F8D0(Temporary_8250EE50 *temporary, float start, float end, int flags);
extern void fn_827F62A8(Animation_8250EE50 *animation, float time, int flags);
extern void fn_827F6430(Animation_8250EE50 *animation, float time);
extern int fn_8251F720(int *name, int flags);
extern void fn_8255F448(Player_8250EE50 *player, Animation_8250EE50 *animation, int id, int flags);
extern void fn_827F21F0(Player_8250EE50 *player);
extern void fn_827F2220(Player_8250EE50 *player);

Animation_8250EE50 *fn_8250EE50(Owner_8250EE50 *self, Player_8250EE50 *player, float time)
{
    Temporary_8250EE50 temporary;
    Animation_8250EE50 *animation;

    fn_8255F880(&temporary, self->source);
    animation = fn_8255F8D0(&temporary, ltcg_pool_0_0f, lbl_821CA45C[1], 0);
    fn_827F62A8(animation, time, 1);
    fn_827F6430(animation, time);
    player->time = ltcg_pool_0_0f;
    fn_8255F448(player, animation, fn_8251F720(&self->name, 0), 0);
    player->current = 0;
    player->name = self->name;
    fn_827F21F0(player);
    fn_827F2220(player);
    return animation;
}
