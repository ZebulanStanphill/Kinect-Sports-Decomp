typedef struct Settings_82356E38 {
    int unk0;
    int locked; /* 0x4 */
    char pad8[8];
    int ids[2]; /* 0x10 */
} Settings_82356E38;

typedef struct Target_82356E38 {
    char pad0[0x50c];
    int slot; /* 0x50c */
} Target_82356E38;

typedef struct Session_82356E38 {
    char pad0[0x28];
    Settings_82356E38 *settings; /* 0x28 */
    char pad2c[0x3c];
    unsigned int index; /* 0x68 */
    char pad6c[0x5c];
    Target_82356E38 *target; /* 0xc8 */
} Session_82356E38;

typedef struct Mode_82356E38 {
    char pad0[8];
    int type; /* 0x8 */
} Mode_82356E38;

typedef struct Player_82356E38 Player_82356E38;

typedef struct PlayerVtbl_82356E38 {
    void *slots[25];
    int (*GetId)(Player_82356E38 *self); /* 0x64 */
} PlayerVtbl_82356E38;

struct Player_82356E38 {
    PlayerVtbl_82356E38 *vt; /* 0x0 */
    char pad4[0xcc];
    int primary; /* 0xd0 */
    char padd4[4];
    int secondary; /* 0xd8 */
};

typedef struct Owner_82356E38 {
    char pad0[0x18];
    Player_82356E38 *player; /* 0x18 */
    char pad1c[0x28c];
    int single; /* 0x2a8 */
    char pad2ac[0xa0];
    int id; /* 0x34c */
} Owner_82356E38;

extern Session_82356E38 *lbl_832765BC;
extern Mode_82356E38 *fn_8225F160(void);

static __forceinline int IndexOf_82356E38(Session_82356E38 *session, int id)
{
    int i;

    for (i = 0; i < 2; i++) {
        if (session->settings->ids[i] == id) {
            return i;
        }
    }
    return -1;
}

static __forceinline void SetPlayer_82356E38(Session_82356E38 *session, int id)
{
    if (lbl_832765BC != 0) {
        int index = IndexOf_82356E38(session, id);

        session->index = index;
        if (session->settings->locked == 0) {
            session->target->slot = index;
        } else {
            session->target->slot = 2;
        }
    }
}

void fn_82356E38(Owner_82356E38 *self)
{
    Session_82356E38 *session;
    int primary;
    int secondary;

    if (lbl_832765BC == 0) {
        return;
    }
    if (fn_8225F160()->type == 2) {
        session = lbl_832765BC;
        SetPlayer_82356E38(session, self->id);
    } else {
        int id = self->player->vt->GetId(self->player);

        session = lbl_832765BC;
        SetPlayer_82356E38(session, id);
    }
    if (session != 0) {
        if (session->settings->locked == 0) {
            if (session->index == 0) {
                primary = 1;
                secondary = 2;
            } else {
                primary = 2;
                secondary = 3;
            }
            self->single = 0;
        } else {
            primary = 3;
            secondary = 0;
            self->single = 1;
        }
    } else {
        primary = 0;
        self->single = 0;
        secondary = 0;
    }
    self->player->primary = primary;
    self->player->secondary = secondary;
}
