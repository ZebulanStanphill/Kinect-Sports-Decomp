typedef struct Player_82372A58 {
    unsigned char pad0[0x40];
    unsigned int state; /* 0x40 */
} Player_82372A58;

typedef struct Coach_82372A58 {
    unsigned char pad0[0xa0];
    int player; /* 0x0a0: Player_82372A58 * */
    unsigned char pada4[0x204 - 0xa4];
    int automatic; /* 0x204 */
    unsigned char pad208[0x218 - 0x208];
    int skipIntro; /* 0x218 */
    unsigned char pad21c[0x348 - 0x21c];
    int hasTip; /* 0x348 */
    unsigned char pad34c[0x658 - 0x34c];
    int busy; /* 0x658 */
    unsigned char pad65c[0x9e0 - 0x65c];
    int saidWelcome; /* 0x9e0 */
    int saidTip;     /* 0x9e4 */
    int saidHint;    /* 0x9e8 */
    int saidWarning; /* 0x9ec */
    int saidIntro;   /* 0x9f0 */
    unsigned char pad9f4[0xa00 - 0x9f4];
    int pendingRetry; /* 0xa00 */
    int pendingQuit;  /* 0xa04 */
} Coach_82372A58;

extern int fn_82372F88(Coach_82372A58 *self);
extern int fn_82372ED8(Coach_82372A58 *self);
extern int fn_82372DE8(Coach_82372A58 *self, int side);

int fn_82372A58(Coach_82372A58 *self)
{
    int busy;
    int ready;
    int result;

    if (self->automatic == 0)
        busy = fn_82372F88(self) != -1;
    else
        busy = self->busy;
    ready = self->player != 0 && ((Player_82372A58 *)self->player)->state == 1;
    if (self->pendingQuit != 0) {
        result = 10;
        self->pendingQuit = 0;
    } else if (self->pendingRetry != 0) {
        result = 5;
        self->pendingRetry = 0;
    } else if (busy != 0) {
        result = ready ? 12 : 15;
    } else if (self->saidWelcome == 0 &&
               (self->player == 0 || ((Player_82372A58 *)self->player)->state != 1)) {
        result = 6;
        self->saidWelcome = 1;
    } else if (self->saidIntro == 0 && self->skipIntro == 0) {
        result = 11;
        self->saidIntro = 1;
    } else if (self->saidTip == 0 && self->hasTip != 0) {
        result = 7;
        self->saidTip = 1;
    } else if (self->saidWarning == 0 && fn_82372ED8(self) != 0) {
        result = 8;
        self->saidWarning = 1;
    } else if (self->saidHint == 0 && (fn_82372DE8(self, 0) != 0 || fn_82372DE8(self, 1) != 0)) {
        result = 9;
        self->saidHint = 1;
    } else {
        self->saidWelcome = 0;
        result = 2;
        self->saidTip = 0;
        self->saidHint = 0;
        self->saidWarning = 0;
        self->saidIntro = 0;
    }
    return result;
}
