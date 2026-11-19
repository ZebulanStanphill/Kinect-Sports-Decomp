typedef struct Temporary_822B84C0 {
    int words[2];
} Temporary_822B84C0;

typedef struct Animation_822B84C0 Animation_822B84C0;

typedef struct Player_822B84C0 {
    char pad0[0x160];
    int name;    /* 0x160 */
    int pad164;  /* 0x164 */
    int current; /* 0x168 */
    char pad16c[0x18];
    float time; /* 0x184 */
} Player_822B84C0;

typedef struct Owner_822B84C0 {
    char pad0[0xc];
    Player_822B84C0 *player; /* 0x0C */
} Owner_822B84C0;

extern const float lbl_821CA45C[2];
extern const float lbl_821917A8[0x52];

extern void fn_8255F880(Temporary_822B84C0 *temporary, void *source);
extern Animation_822B84C0 *fn_8255F8D0(Temporary_822B84C0 *temporary, float start, float end, int flags);
extern int fn_8251F720(int *name, int flags);
extern void fn_8255F448(Player_822B84C0 *player, Animation_822B84C0 *animation, int id, int flags);
extern void fn_827F21F0(Player_822B84C0 *player);
extern void fn_827F2220(Player_822B84C0 *player);

Animation_822B84C0 *fn_822B84C0(Owner_822B84C0 *self, void *source, int *name)
{
    Temporary_822B84C0 temporary;
    Animation_822B84C0 *animation;
    Player_822B84C0 *player;
    int id;

    fn_8255F880(&temporary, source);
    animation = fn_8255F8D0(&temporary, 0.0f, lbl_821CA45C[1], 0);
    player = self->player;
    player->time = lbl_821917A8[3];
    id = fn_8251F720(name, 0);
    fn_8255F448(player, animation, id, 0);
    player->current = 0;
    player->name = *name;
    fn_827F21F0(self->player);
    fn_827F2220(self->player);
    return animation;
}
