typedef struct SharedPtr_8224F700 {
    void *px;
    int *rep;
} SharedPtr_8224F700;

typedef struct Profile_8224F700 {
    char pad00[8];
    void *gamer; /* 0x08 */
} Profile_8224F700;

typedef struct Session_8224F700 {
    char pad00[0x38];
    void *pending; /* 0x38 */
} Session_8224F700;

typedef struct Player_8224F700 {
    char pad00[4];
    unsigned char isRemote; /* 0x04 */
    char pad05[3];
    int id; /* 0x08 */
} Player_8224F700;

typedef struct Self_8224F700 {
    char pad00[0x2c];
    Player_8224F700 *player; /* 0x2c */
    char pad30[0x10];
    unsigned char finished; /* 0x40 */
} Self_8224F700;

extern void *lbl_83297810;
extern void *fn_82511928(void);
extern void fn_825138E0(SharedPtr_8224F700 *out, void *manager, int id);
extern void fn_82522588(SharedPtr_8224F700 *out, SharedPtr_8224F700 *in);
extern int fn_82247000(void *pending);
extern int fn_82520EB0(Player_8224F700 *player);
extern unsigned char fn_828ACCE8(void *gamer);
extern void fn_8224FD10(Self_8224F700 *self);
extern void fn_8224F838(Self_8224F700 *self, float dt);
extern void fn_8224FB78(Self_8224F700 *self);
extern void fn_822315A0(int *rep);

void fn_8224F700(Self_8224F700 *self, float dt)
{
    int id = self->player->id;
    SharedPtr_8224F700 profile;
    SharedPtr_8224F700 session;
    unsigned char busy;
    Profile_8224F700 *gamerProfile;

    fn_825138E0(&profile, lbl_83297810 != 0 ? lbl_83297810 : fn_82511928(), id);
    fn_82522588(&session, &profile);
    if (self->finished == 0) {
        gamerProfile = profile.px;
        if (gamerProfile != 0) {
            busy = ((Session_8224F700 *)session.px)->pending != 0
                       ? fn_82247000(((Session_8224F700 *)session.px)->pending) != 0
                       : 0;
            if (busy)
                goto done;
        }
        if (self->player->isRemote != 0) {
            if (fn_82520EB0(self->player) == 2)
                fn_8224FD10(self);
        } else if (gamerProfile != 0 && fn_828ACCE8(gamerProfile->gamer) != 0) {
            fn_8224F838(self, dt);
        } else {
            fn_8224FB78(self);
        }
    }
done:
    if (session.rep != 0)
        fn_822315A0(session.rep);
    if (profile.rep != 0)
        fn_822315A0(profile.rep);
}
