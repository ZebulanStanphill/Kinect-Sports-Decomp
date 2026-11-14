typedef struct Game_825F4DE0 {
    char pad0[0xd8];
    unsigned char busy;      /* 0xd8 */
    char padd9[0x120 - 0xd9];
    int slotB;               /* 0x120 */
    int slotA;               /* 0x124 */
} Game_825F4DE0;

typedef struct Obj_825F4DE0 {
    char pad0[0x8dc];
    void *player;            /* 0x8dc */
    char pad8e0[0x8f4 - 0x8e0];
    float f8f4;              /* 0x8f4 */
    float f8f8;              /* 0x8f8 */
    int f8fc;                /* 0x8fc */
    int f900;                /* 0x900 */
    char pad904[0x918 - 0x904];
    int f918;                /* 0x918 */
    int f91c;                /* 0x91c */
    float f920;              /* 0x920 */
    float f924;              /* 0x924 */
    void *movie;             /* 0x928 */
} Obj_825F4DE0;

extern void *fn_82554D38(void);
extern int fn_8265BF48(const char *name, int flags);
extern int fn_825200A8(int *a, int *b);
extern void fn_825200F0(void *out, int *name);
extern unsigned char fn_827D6968(int table, void *name, int index);
extern void *fn_8251F8E0(int *name, Game_825F4DE0 *game);
extern int fn_8251FBA8(void);
extern void fn_82554E20(void *player, int *name);
extern void fn_82554F20(void *player, void *movie, int arg, int *name);
extern Game_825F4DE0 *lbl_83265988;
extern int lbl_83265A24;
extern int lbl_832822A0;

void fn_825F4DE0(Obj_825F4DE0 *self, int *name, int arg)
{
    int id;
    unsigned char on;
    char buf[32];

    self->f900 = 0;
    self->player = fn_82554D38();
    id = fn_8265BF48("aid_xmv_banjoxdlc_levelintros_dlc1", 0);
    on = lbl_832822A0 > 0;
    if (on && fn_825200A8(&id, name)) {
        Game_825F4DE0 *game = lbl_83265988;
        int r = 0;
        fn_825200F0(buf, name);
        if (game->busy == 0 && game->slotA != -1 && game->slotB != -1
            && fn_827D6968(lbl_83265A24, buf, game->slotA)) {
            self->movie = fn_8251F8E0(name, lbl_83265988);
            r = fn_8251FBA8();
        }
        if (self->movie != 0)
            fn_82554F20(self->player, self->movie, r, name);
    } else {
        fn_82554E20(self->player, name);
    }
    self->f91c = arg;
    self->f918 = 0;
    self->f8fc = 1;
    self->f8f8 = 0.0f;
    self->f8f4 = 0.0f;
    self->f920 = 0.0f;
    self->f924 = 0.0f;
}
