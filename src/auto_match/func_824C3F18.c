typedef struct Player_824C3F18 Player_824C3F18;
typedef struct {
    void *f0;
    void *f4;
    char *(*getData)(Player_824C3F18 *);
} PlayerVt_824C3F18;
struct Player_824C3F18 {
    PlayerVt_824C3F18 *vt;
};

typedef struct {
    char pad0[0x204];
    unsigned int count;
} Info_824C3F18;

typedef struct {
    char pad0[0x8];
    Info_824C3F18 *info;
    char padC[0x38 - 0xc];
    int player;
    char pad3C[0x4c - 0x3c];
    unsigned int value;
} Session_824C3F18;

typedef struct {
    char pad0[0x40c];
    unsigned int value;
} Source_824C3F18;

typedef struct {
    char pad0[0x44];
    int state;
    int session;
    char pad4C[0x5c - 0x4c];
    Source_824C3F18 *source;
} Manager_824C3F18;

typedef struct {
    void *f0;
    Manager_824C3F18 *mgr;
} Owner_824C3F18;

extern unsigned char fn_828AD740(Info_824C3F18 *);
extern unsigned char fn_82246A40(Session_824C3F18 *);
extern unsigned char fn_8289AB78(char *);
extern void fn_822471C8(Player_824C3F18 *, int);
extern void fn_824C04E0(Manager_824C3F18 *, int);

static __forceinline unsigned char IsShared_824C3F18(int session)
{
    if (session != 0 && ((Session_824C3F18 *)session)->info->count > 1)
        return 1;
    return 0;
}

void fn_824C3F18(Owner_824C3F18 *self)
{
    Manager_824C3F18 *mgr = self->mgr;
    int session;
    int player;

    if (mgr->source != 0)
        ((Session_824C3F18 *)mgr->session)->value = mgr->source->value;
    session = mgr->session;
    if (!IsShared_824C3F18(session)) {
        mgr->state = 6;
        fn_824C04E0(mgr, 1);
        return;
    }
    if (mgr->source != 0) {
        if (fn_828AD740(((Session_824C3F18 *)session)->info)) {
            if (fn_82246A40((Session_824C3F18 *)mgr->session)) {
                player = ((Session_824C3F18 *)mgr->session)->player;
                if (player != 0) {
                    if (fn_8289AB78(((Player_824C3F18 *)player)->vt->getData((Player_824C3F18 *)player) + 0xf0)) {
                        fn_822471C8((Player_824C3F18 *)((Session_824C3F18 *)mgr->session)->player, 1);
                    }
                }
            }
        }
    }
}
