typedef struct SharedPtr_82350D88 {
    void *px;
    int *rep;
} SharedPtr_82350D88;

typedef struct Profile_82350D88 {
    char padding[0x8];
    void *gamer; /* 0x08 */
} Profile_82350D88;

typedef struct Controller_82350D88 {
    char padding[0x4];
    unsigned char enabled; /* 0x04 */
} Controller_82350D88;

typedef struct Lobby_82350D88 {
    char padding[0x4];
    void *request; /* 0x04 */
    char padding8[0x4];
    SharedPtr_82350D88 host; /* 0x0c */
    char padding14[0x4];
    unsigned char hasHost;   /* 0x18 */
    unsigned char signedOut; /* 0x19 */
} Lobby_82350D88;

typedef struct Screen_82350D88 {
    char padding[0x8];
    int state;         /* 0x08 */
    int previousState; /* 0x0c */
    char padding10[0x3ec];
    void *hostGamer; /* 0x3fc */
    int user;        /* 0x400 */
    void *listener;  /* 0x404 */
} Screen_82350D88;

extern Controller_82350D88 *lbl_832975B0;
extern Lobby_82350D88 *lbl_8329759C;
extern void *lbl_83297810;
extern Controller_82350D88 *fn_82250A18(void);
extern Lobby_82350D88 *fn_822442F0(void);
extern void *fn_82511928(void);
extern void fn_825138E0(SharedPtr_82350D88 *out, void *manager, int id);
extern SharedPtr_82350D88 *fn_82365BD8(SharedPtr_82350D88 *self, const SharedPtr_82350D88 *other);
extern void fn_822315A0(int *rep);
extern void fn_82245758(void *gamer, void **listener);
extern unsigned char fn_828ACCE8(void *gamer);
extern void fn_828AE818(void *gamer, int message);
extern void fn_82242B10(Lobby_82350D88 *lobby);
extern void fn_82242928(Lobby_82350D88 *lobby, SharedPtr_82350D88 *profile, int user);

/* The original materialises this test as a byte (subic; subfe; clrlwi.): a 64-bit compare does too. */
static __forceinline unsigned char HasRequest_82350D88(Lobby_82350D88 *lobby)
{
    return (__int64)lobby->request != 0;
}

void fn_82350D88(Screen_82350D88 *self)
{
    int leave;
    Controller_82350D88 *controller;
    Lobby_82350D88 *lobby;
    SharedPtr_82350D88 profile;
    void *gamer;

    leave = 0;
    controller = lbl_832975B0 != 0 ? lbl_832975B0 : fn_82250A18();
    if (controller->enabled != 0) {
        lobby = lbl_8329759C != 0 ? lbl_8329759C : fn_822442F0();
        fn_825138E0(&profile, lbl_83297810 != 0 ? lbl_83297810 : fn_82511928(), 1);
        if (lobby->hasHost != 0) {
            SharedPtr_82350D88 host;

            fn_82365BD8(&host, &lobby->host);
            self->hostGamer = ((Profile_82350D88 *)host.px)->gamer;
            if (host.rep != 0) {
                fn_822315A0(host.rep);
            }
            if (self->listener != 0) {
                fn_82245758(self->hostGamer, &self->listener);
            }
            leave = 1;
        } else if (lobby->signedOut != 0) {
            gamer = ((Profile_82350D88 *)profile.px)->gamer;
            if (fn_828ACCE8(gamer)) {
                fn_828AE818(gamer, 0x23);
            }
        } else if (!HasRequest_82350D88(lobby)) {
            SharedPtr_82350D88 copy;

            fn_82242928(lobby, fn_82365BD8(&copy, &profile), self->user);
        } else {
            fn_82242B10(lobby);
        }
        if (profile.rep != 0) {
            fn_822315A0(profile.rep);
        }
    } else {
        leave = 1;
    }
    if (leave != 0 && self->state != 1) {
        self->previousState = self->state;
        self->state = 1;
    }
}
