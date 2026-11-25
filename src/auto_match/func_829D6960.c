typedef struct NuiUser_829D6960 {
    int state;             /* 0x00 */
    int unk04;             /* 0x04 */
    int pending;           /* 0x08 */
    unsigned int nuiIndex; /* 0x0C */
    int unk10;             /* 0x10 */
    int unk14;             /* 0x14 */
} NuiUser_829D6960;

typedef struct NuiPlayer_829D6960 {
    char pad0[0x140];
    unsigned int userIndex; /* 0x140 */
    char pad144[0xc];
} NuiPlayer_829D6960;

typedef struct NuiContext_829D6960 {
    NuiUser_829D6960 users[8];     /* 0x00000 */
    NuiPlayer_829D6960 players[6]; /* 0x000C0 */
    char pad8a0[0x240d5];
    unsigned char changed; /* 0x24975 */
    char pad24976[0xa];
    char lock[0x1c]; /* 0x24980 */
    char pad2499c[0x6ab28];
    void *event; /* 0x8F4C4 */
} NuiContext_829D6960;

extern NuiContext_829D6960 *lbl_832179FC;
extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern int KeSetEvent(void *event, int increment, unsigned char wait);
extern int XamUserNuiGetUserIndex(unsigned int user, unsigned int *nuiIndex);

void fn_829D6960(void)
{
    void *lock = lbl_832179FC->lock;
    NuiContext_829D6960 *context;
    unsigned int user;
    unsigned int player;
    unsigned int nuiIndex;
    NuiPlayer_829D6960 *slot;

    RtlEnterCriticalSection(lock);
    context = lbl_832179FC;
    for (user = 0; user < 8; user++) {
        nuiIndex = 0xfe;
        if (XamUserNuiGetUserIndex(user, &nuiIndex) >= 0) {
            if (context->users[user].nuiIndex != nuiIndex) {
                context->users[user].nuiIndex = nuiIndex;
                context->changed = 1;
                if (context->users[user].state == 0) {
                    context->users[user].state = 1;
                    context->users[user].pending = 0;
                }
            }
        } else if (context->users[user].nuiIndex != 0xfe) {
            context->users[user].nuiIndex = 0xfe;
            context->users[user].pending = 0;
            context->changed = 1;
            if (context->users[user].state == 2) {
                for (player = 0, slot = context->players; player < 6; player++, slot++) {
                    if (slot->userIndex == user) {
                        slot->userIndex = 0xffffffff;
                        break;
                    }
                }
            }
            context->users[user].state = 0;
        }
    }
    if (context->changed != 0) {
        KeSetEvent(lbl_832179FC->event, 0, 0);
    }
    RtlLeaveCriticalSection(lock);
}
