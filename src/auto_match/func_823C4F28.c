typedef struct Tuning_823C4F28 {
    char pad0[0x70];
    int telemetryEnabled; /* 0x70 */
} Tuning_823C4F28;

typedef struct Profile_823C4F28 {
    char pad0[4];
    unsigned char signedIn; /* 0x4 */
} Profile_823C4F28;

typedef struct Challenge_823C4F28 {
    char pad0[0x148];
    unsigned char kind; /* 0x148 */
} Challenge_823C4F28;

typedef struct Session_823C4F28 {
    char pad0[0x40];
    unsigned int state; /* 0x40 */
} Session_823C4F28;

typedef struct Game_823C4F28 Game_823C4F28;

typedef struct GameVtbl_823C4F28 {
    void *slots[50];
    int (*GetPlayerCount)(Game_823C4F28 *self); /* 0xc8 */
} GameVtbl_823C4F28;

struct Game_823C4F28 {
    GameVtbl_823C4F28 *vtbl; /* 0x0 */
    char pad4[0xa0 - 0x4];
    Session_823C4F28 *session; /* 0xa0 */
    char padA4[0x4c0 - 0xa4];
    Challenge_823C4F28 *challenge; /* 0x4c0 */
    char pad4C4[0x1680 - 0x4c4];
    int reported; /* 0x1680 */
};

extern Tuning_823C4F28 lbl_831D18A8;
extern Profile_823C4F28 *lbl_832975B0;
extern int lbl_83276554;
extern Profile_823C4F28 *fn_82250A18(void);
extern int fn_823CC7A0(void);
extern void fn_82263830(int counter, const char *mode, int live, unsigned char signedIn, int difficulty,
                        int solo, unsigned char coop);

static __forceinline Profile_823C4F28 *GetProfile_823C4F28(void)
{
    return lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
}

void fn_823C4F28(Game_823C4F28 *self)
{
    int solo;
    unsigned char coop;
    const char *mode;
    unsigned char signedIn;
    int live;
    int counter;

    if (lbl_831D18A8.telemetryEnabled != 0) {
        solo = 0;
        coop = 0;
        if (self->challenge == 0) {
            int players = self->vtbl->GetPlayerCount(self);
            solo = players == 0;
            coop = players == 1 || GetProfile_823C4F28()->signedIn != 0;
        }
        if (self->challenge != 0) {
            if (self->challenge->kind == 2) {
                mode = "Super Saver";
            } else {
                mode = "Target Kick";
            }
        } else {
            mode = "Main";
        }
        signedIn = GetProfile_823C4F28()->signedIn;
        live = (int)self->session != 0 && self->session->state == 1;
        counter = lbl_83276554;
        fn_82263830(counter, mode, live == 1, signedIn, fn_823CC7A0(), solo, coop);
        self->reported = 1;
    }
}
