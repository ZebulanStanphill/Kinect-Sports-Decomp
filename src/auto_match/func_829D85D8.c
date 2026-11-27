typedef struct NuiUser_829D85D8 {
    int state;             /* 0x00 */
    int unknown04;         /* 0x04 */
    int pending;           /* 0x08 */
    unsigned int nuiIndex; /* 0x0c */
    int unknown10;         /* 0x10 */
    int unknown14;         /* 0x14 */
} NuiUser_829D85D8;

typedef struct NuiPlayer_829D85D8 {
    char unknown000[0x140];
    unsigned int userIndex;  /* 0x140 */
    unsigned int enrollment; /* 0x144 */
    int state;               /* 0x148 */
    int unknown14C;          /* 0x14c */
} NuiPlayer_829D85D8;

typedef struct NuiSession_829D85D8 {
    char unknown00[0x1c];
    unsigned int enrollment; /* 0x1c */
    char unknown20[0x40];
} NuiSession_829D85D8;

typedef struct NuiCapture_829D85D8 {
    char data[0x11fb0];
} NuiCapture_829D85D8;

typedef struct NuiProfile_829D85D8 {
    char data[0xd4d0];
} NuiProfile_829D85D8;

typedef struct NuiContext_829D85D8 {
    NuiUser_829D85D8 users[8];     /* 0x00000 */
    NuiPlayer_829D85D8 players[6]; /* 0x000c0 */
    char unknown8A0[0xb0];
    NuiSession_829D85D8 sessions[2]; /* 0x00950 */
    NuiCapture_829D85D8 captures[2]; /* 0x00a10 */
    char unknown24970[5];
    unsigned char changed; /* 0x24975 */
    char unknown24976[0xa];
    char lock[0x30];                 /* 0x24980 */
    NuiProfile_829D85D8 profiles[8]; /* 0x249b0 */
} NuiContext_829D85D8;

typedef struct NuiRequest_829D85D8 {
    int cookie;              /* 0x00 */
    unsigned int flags;      /* 0x04 */
    int unknown08;           /* 0x08 */
    int playerIndex;         /* 0x0c */
    int captureIndex;        /* 0x10 */
    int userIndex;           /* 0x14 */
    int resultUser;          /* 0x18 */
    unsigned int enrollment; /* 0x1c */
} NuiRequest_829D85D8;

typedef struct NuiListener_829D85D8 NuiListener_829D85D8;

typedef struct NuiListenerVtbl_829D85D8 {
    void *slot00;
    void *slot04;
    void (*OnEnrolled)(NuiListener_829D85D8 *self, int userIndex, int playerIndex); /* 0x08 */
    void *slot0C[5];
    unsigned char (*Override)(NuiListener_829D85D8 *self, int cookie, unsigned int enrollment,
                              int *resultUser); /* 0x20 */
} NuiListenerVtbl_829D85D8;

struct NuiListener_829D85D8 {
    const NuiListenerVtbl_829D85D8 *vt;
};

extern NuiContext_829D85D8 *lbl_832179FC;
extern NuiListener_829D85D8 *lbl_83217A00;
extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern void fn_829D76B8(int unused, NuiRequest_829D85D8 *request, int status);
extern int fn_829DFF40(NuiCapture_829D85D8 *capture);
extern void fn_829E00C0(NuiProfile_829D85D8 *profile, NuiCapture_829D85D8 *capture);

static __forceinline unsigned char IsSessionEnrollment_829D85D8(NuiContext_829D85D8 *context,
                                                                unsigned int enrollment)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        if (context->sessions[i].enrollment == enrollment) {
            return 1;
        }
    }
    return 0;
}

static __forceinline unsigned char IsPlayerEnrollment_829D85D8(NuiPlayer_829D85D8 *player,
                                                               unsigned int enrollment)
{
    return player->state == 2 && enrollment == player->enrollment;
}

static __forceinline unsigned char ListenerOverride_829D85D8(int cookie, unsigned int enrollment,
                                                             int *resultUser)
{
    if (lbl_83217A00 != 0) {
        return lbl_83217A00->vt->Override(lbl_83217A00, cookie, enrollment, resultUser);
    }
    return 0;
}

void fn_829D85D8(NuiRequest_829D85D8 *request)
{
    void *lock = lbl_832179FC->lock;
    NuiContext_829D85D8 *context;

    RtlEnterCriticalSection(lock);
    context = lbl_832179FC;
    if (!IsSessionEnrollment_829D85D8(context, request->enrollment)) {
        NuiPlayer_829D85D8 *player = &context->players[request->playerIndex];
        NuiCapture_829D85D8 *capture = &context->captures[request->captureIndex];
        NuiUser_829D85D8 *user = &context->users[request->userIndex];
        NuiProfile_829D85D8 *profile = &context->profiles[request->userIndex];

        if (!IsPlayerEnrollment_829D85D8(player, request->enrollment)) {
            fn_829D76B8(0, request, 0x83010008);
        } else if (fn_829DFF40(capture)) {
            if (!ListenerOverride_829D85D8(request->cookie, request->enrollment, &request->resultUser)) {
                request->resultUser = request->userIndex;
                fn_829E00C0(profile, capture);
                user->pending = 1;
                context->changed = 1;
                request->flags &= ~1;
                if (lbl_83217A00 != 0) {
                    lbl_83217A00->vt->OnEnrolled(lbl_83217A00, request->userIndex, request->playerIndex);
                }
            }
        }
    }
    RtlLeaveCriticalSection(lock);
}
