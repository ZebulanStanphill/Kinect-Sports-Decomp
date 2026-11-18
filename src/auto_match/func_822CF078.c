typedef struct Session_822CF078 {
    char pad0[0xf8];
    int state;            /* 0xf8 */
    unsigned char locked; /* 0xfc */
} Session_822CF078;

typedef struct Info_822CF078 {
    char pad0[0xc];
    int busy; /* 0x0c */
} Info_822CF078;

typedef struct Data_822CF078 {
    char pad0[0x18];
    Info_822CF078 *info; /* 0x18 */
} Data_822CF078;

typedef struct Partner_822CF078 {
    char pad0[0xd4];
    Data_822CF078 *data; /* 0xd4 */
    char padd8[0x204 - 0xd8];
    int pending; /* 0x204 */
} Partner_822CF078;

typedef struct Mode_822CF078 {
    char pad0[0x18];
    unsigned int type; /* 0x18 */
} Mode_822CF078;

typedef struct Target_822CF078 {
    char pad0[0x254];
    int kind; /* 0x254 */
} Target_822CF078;

typedef struct Player_822CF078 {
    char pad0[0x110];
    Mode_822CF078 *mode; /* 0x110 */
    char pad114[0x168 - 0x114];
    Session_822CF078 *session; /* 0x168 */
    int active;                /* 0x16c */
    char pad170[0x1c0 - 0x170];
    Partner_822CF078 *partner; /* 0x1c0 */
    char pad1c4[0x264 - 0x1c4];
    float progress; /* 0x264 */
    char pad268[0x270 - 0x268];
    int highlighted; /* 0x270 */
} Player_822CF078;

extern const float lbl_821CA45C[2];

extern unsigned char fn_8288B760(Session_822CF078 *session);
extern Target_822CF078 *fn_822CEE40(Player_822CF078 *self);
extern int fn_822CF260(Player_822CF078 *self, int flags);
extern int fn_822CEFA0(Player_822CF078 *self);

int fn_822CF078(Player_822CF078 *self)
{
    int active;
    Partner_822CF078 *partner;
    Target_822CF078 *target;
    int kind;

    if (self->session != 0) {
        active = fn_8288B760(self->session);
    } else {
        active = self->active;
    }
    if (active == 0 && self->session != 0) {
        if (self->session->locked) {
            return self->session->state;
        }
        return 0;
    }
    if (self->progress < lbl_821CA45C[1]) {
        return 0;
    }
    partner = self->partner;
    if (partner != 0 && partner->data->info->busy != 0) {
        return 0;
    }
    if (partner->pending != 0) {
        return 0;
    }
    if (self->mode->type == 2) {
        return self->highlighted ? 0x20 : 0;
    }
    target = fn_822CEE40(self);
    if (target == 0) {
        return 2;
    }
    kind = target->kind;
    if (fn_822CF260(self, 0) != 0) {
        if (kind == 7) {
            return 0x10;
        }
        return 8;
    }
    return (fn_822CEFA0(self) == 0) + 1;
}
