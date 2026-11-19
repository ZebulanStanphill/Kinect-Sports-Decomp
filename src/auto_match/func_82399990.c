typedef struct Round_82399990 {
    char pad0[0x20];
    float score; /* 0x20 */
} Round_82399990;

typedef struct Player_82399990 {
    Round_82399990 **rounds; /* 0x0 */
    char pad4[0x10 - 0x4];
    int round; /* 0x10 */
} Player_82399990;

typedef struct Players_82399990 {
    Player_82399990 **data; /* 0x0 */
} Players_82399990;

typedef struct Clock_82399990 Clock_82399990;

typedef struct ClockVtbl_82399990 {
    char pad[0x44];
    float (*getElapsed)(Clock_82399990 *self); /* 0x44 */
} ClockVtbl_82399990;

struct Clock_82399990 {
    ClockVtbl_82399990 *vt;
};

typedef struct Match_82399990 {
    char pad0[0x8];
    Players_82399990 *players; /* 0x8 */
    char padc[0x178 - 0xc];
    int opponents; /* 0x178 */
    char pad17c[0x2a4 - 0x17c];
    int resultPending; /* 0x2a4 */
    char pad2a8[0x2e0 - 0x2a8];
    Clock_82399990 *clock; /* 0x2e0 */
} Match_82399990;

extern int lbl_831C996C;
extern int fn_82397FE0(Match_82399990 *match, int side);
extern int fn_82398048(Match_82399990 *match, int side);
extern void fn_82260458(int counter, int score0, int score1, float duration, int human0, int human1);

void fn_82399990(Match_82399990 *self)
{
    int solo;
    int human1;
    int human0;
    int score1;

    if (self->resultPending == 0) {
        return;
    }
    solo = self->opponents == 0;
    if (solo && (fn_82397FE0(self, 1) || fn_82398048(self, 1))) {
        human1 = 1;
    } else {
        human1 = 0;
    }
    if (fn_82397FE0(self, 0) || fn_82398048(self, 0)) {
        human0 = 1;
    } else {
        human0 = 0;
    }
    if (solo) {
        Player_82399990 *player = self->players->data[1];

        score1 = (int)player->rounds[player->round]->score;
    } else {
        score1 = 0;
    }
    {
        int counter = lbl_831C996C;
        Player_82399990 *player = self->players->data[0];
        float score0 = player->rounds[player->round]->score;

        fn_82260458(counter, (int)score0, score1, self->clock->vt->getElapsed(self->clock), human0, human1);
    }
    self->resultPending = 0;
}
