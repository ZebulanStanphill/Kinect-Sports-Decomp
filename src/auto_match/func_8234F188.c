typedef struct Temporary_8234F188 {
    int words[2];
} Temporary_8234F188;

typedef struct Animation_8234F188 Animation_8234F188;

typedef struct Player_8234F188 {
    char pad0[0x160];
    int name;    /* 0x160 */
    int pad164;  /* 0x164 */
    int current; /* 0x168 */
    char pad16c[0x18];
    float time; /* 0x184 */
} Player_8234F188;

typedef struct Owner_8234F188 {
    char pad0[0x4];
    Player_8234F188 *player; /* 0x04 */
    char pad8[0x4];
    void *blender; /* 0x0c */
    char pad10[0x4];
    float blendTime; /* 0x14 */
} Owner_8234F188;

extern const float lbl_821CA45C[2];

extern void fn_8255F880(Temporary_8234F188 *temporary, void *source);
extern Animation_8234F188 *fn_8255F8D0(Temporary_8234F188 *temporary, float start, float end, int flags);
extern int fn_8251F720(int *name, int flags);
extern void fn_8255F448(Player_8234F188 *player, Animation_8234F188 *animation, int id, int flags);
extern void fn_827F21F0(Player_8234F188 *player);
extern void fn_827F2220(Player_8234F188 *player);
extern void fn_827F5730(void *blender, float weight, float time);

void fn_8234F188(Owner_8234F188 *self, void *source, int *name, float start, float end, float time,
                 float blendTime)
{
    Temporary_8234F188 temporary;
    Animation_8234F188 *animation;
    Player_8234F188 *player;
    int id;

    fn_8255F880(&temporary, source);
    animation = fn_8255F8D0(&temporary, start, end, 1);
    self->player->time = time;
    player = self->player;
    id = fn_8251F720(name, 0);
    fn_8255F448(player, animation, id, 0);
    player->current = 0;
    player->name = *name;
    fn_827F21F0(self->player);
    fn_827F2220(self->player);
    fn_827F5730(self->blender, lbl_821CA45C[1], blendTime);
    self->blendTime = blendTime;
}
