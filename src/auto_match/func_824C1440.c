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

typedef struct Player_824C1440 {
    char pad00[4];
    unsigned char isRemote; /* 0x04 */
    char pad05[3];
    int id; /* 0x08 */
    char pad0C[0x54];
    int state; /* 0x60 */
} Player_824C1440;

typedef struct Self_824C1440 {
    char pad00[4];
    Player_824C1440 *player; /* 0x04 */
    char pad08[0x10];
    int failed;   /* 0x18 */
    int finished; /* 0x1c */
} Self_824C1440;

extern void *lbl_83297810;
extern void *fn_82511928(void);
extern void fn_825138E0(SharedPtr_8224F700 *out, void *manager, int id);
extern void fn_82522588(SharedPtr_8224F700 *out, SharedPtr_8224F700 *in);
extern int fn_82247000(void *pending);
extern int fn_82520EB0(Player_824C1440 *player);
extern unsigned char fn_828ACCE8(void *gamer);
extern void fn_824C1AD8(Self_824C1440 *self);
extern void fn_824C15D0(Self_824C1440 *self, float dt);
extern void fn_824C1930(Self_824C1440 *self);
extern void fn_822315A0(int *rep);

int fn_824C1440(Self_824C1440 *self, float dt)
{
    int id = self->player->id;
    SharedPtr_8224F700 profile;
    SharedPtr_8224F700 session;
    unsigned char busy;
    Profile_8224F700 *gamerProfile;
    int status;

    fn_825138E0(&profile, lbl_83297810 != 0 ? lbl_83297810 : fn_82511928(), id);
    fn_82522588(&session, &profile);
    if (self->finished != 0) {
        if (session.rep != 0)
            fn_822315A0(session.rep);
        if (profile.rep != 0)
            fn_822315A0(profile.rep);
        return 0;
    }
    if (self->failed != 0) {
        if (session.rep != 0)
            fn_822315A0(session.rep);
        if (profile.rep != 0)
            fn_822315A0(profile.rep);
        return 0;
    }
    gamerProfile = profile.px;
    if (gamerProfile != 0) {
        busy = ((Session_8224F700 *)session.px)->pending != 0
                   ? fn_82247000(((Session_8224F700 *)session.px)->pending) != 0
                   : 0;
        if (busy)
            goto done;
    }
    if (self->player->isRemote != 0) {
        status = fn_82520EB0(self->player);
        if (status == 2) {
            fn_824C1AD8(self);
        } else if (status == 0 && self->player->state != 4) {
            self->failed = 1;
        }
    } else if (gamerProfile != 0 && fn_828ACCE8(gamerProfile->gamer) != 0) {
        fn_824C15D0(self, dt);
    } else {
        fn_824C1930(self);
    }
done:
    if (session.rep != 0)
        fn_822315A0(session.rep);
    if (profile.rep != 0)
        fn_822315A0(profile.rep);
    return 1;
}
