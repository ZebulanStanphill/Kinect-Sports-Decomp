/* Goalkeeper dive: picks the dive animation for the given direction flags and handedness,
   plays it, mirrors it to the remote player and counts the dive in the match statistics. */
typedef struct NetObject_822CEC20 NetObject_822CEC20;

typedef struct NetObjectVtbl_822CEC20 {
    void *slots00[20];
    char *(*GetReplica)(NetObject_822CEC20 *self); /* 0x50 */
} NetObjectVtbl_822CEC20;

struct NetObject_822CEC20 {
    NetObjectVtbl_822CEC20 *vtbl; /* 0x00 */
    char pad04[0xb8];
    int connected; /* 0xbc */
};

typedef struct SoundHandle_822CEC20 {
    void *sound; /* 0x00 */
} SoundHandle_822CEC20;

typedef struct PlayerStats_822CEC20 {
    char pad00[0x30];
    int dives; /* 0x30 */
    char pad34[0x54];
} PlayerStats_822CEC20;

typedef struct Game_822CEC20 {
    char pad000[0x84];
    void *remote; /* 0x084 */
    char pad088[0x298];
    SoundHandle_822CEC20 diveSound; /* 0x320 */
    char pad324[0x694];
    void **audio; /* 0x9b8 */
    char pad9bc[0x58];
    PlayerStats_822CEC20 stats[1]; /* 0xa14 */
} Game_822CEC20;

typedef struct Model_822CEC20 {
    char pad00[0x20];
    void *animation; /* 0x20 */
} Model_822CEC20;

typedef struct Keeper_822CEC20 {
    char pad000[0x24];
    int canDive; /* 0x024 */
    int side;    /* 0x028 */
    int team;    /* 0x02c */
    char pad030[0xe4];
    Model_822CEC20 *model; /* 0x114 */
    char pad118[0x50];
    NetObject_822CEC20 *net; /* 0x168 */
    int isLocal;             /* 0x16c */
    char pad170[0x50];
    Game_822CEC20 *game; /* 0x1c0 */
    char pad1c4[0xe0];
    int facingLeft; /* 0x2a4 */
    char pad2a8[0xac];
    int fastDive; /* 0x354 */
} Keeper_822CEC20;

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];
extern unsigned char fn_8288B760(NetObject_822CEC20 *net);
extern int fn_82375CA8(Game_822CEC20 *game, int team, int value);
extern void *fn_82535298(SoundHandle_822CEC20 *handle, void *audio, void *a, void *b);
extern void fn_82536288(SoundHandle_822CEC20 *handle);
extern int fn_822C72E0(void *animation, const char *name);
extern void fn_822D6D28(void *replica, int flags, int hand, unsigned char fast);

int fn_822CEC20(Keeper_822CEC20 *self, int flags, int hand, int fast)
{
    int result = 0;
    int owner;
    const char *name;
    SoundHandle_822CEC20 sound;
    NetObject_822CEC20 *net;
    void *remote;
    PlayerStats_822CEC20 *stats;

    if (self->net != 0) {
        owner = fn_8288B760(self->net);
    } else {
        owner = self->isLocal;
    }
    if (owner != 0) {
        if ((flags & 1) <= 0 && ((flags & 2) > 0) != self->facingLeft) {
            fn_82375CA8(self->game, self->team, 0);
        }
        self->fastDive = 0;
    }
    if (self->canDive != 0) {
        if (flags & 2) {
            name = "dive_left";
        } else if (flags & 4) {
            name = "dive_right";
        } else {
            switch (hand) {
            default:
                if (fast != 0) {
                    name = "dive_forward_fast";
                } else {
                    name = "dive_forward";
                }
                break;
            case 3:
                if (fast != 0) {
                    name = "dive_forward_righthanded_fast";
                } else {
                    name = "dive_forward_righthanded";
                }
                break;
            case 2:
                if (fast != 0) {
                    name = "dive_forward_lefthanded_fast";
                } else {
                    name = "dive_forward_lefthanded";
                }
                break;
            }
            if (fast == 0) {
                void **audio = self->game->audio;
                sound = self->game->diveSound;
                sound.sound = fn_82535298(&sound, *audio, lbl_83296BC0, lbl_83296BD0);
                fn_82536288(&sound);
            }
            self->fastDive = fast;
        }
        if (fn_822C72E0(self->model->animation, name) != 0) {
            result = 1;
            net = self->net;
            remote = self->game->remote;
            if (net != 0 && fn_8288B760(net) && remote != 0 && net->connected != 0) {
                fn_822D6D28(net->vtbl->GetReplica(net) + 0x190, flags, hand, fast != 0);
            }
        }
    }
    stats = self->game->stats;
    stats[self->team * 2 + self->side].dives++;
    return result;
}
