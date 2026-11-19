typedef struct Encoder_82F0E1E0 {
    char pad0[0xaf0];
    int pass; /* 0xaf0 */
    char padAF4[0x1b14 - 0xaf4];
    unsigned int cost[4]; /* 0x1b14 */
    char pad1B24[0x5150 - 0x1b24];
    unsigned char *table;       /* 0x5150 */
    int pad5154;                /* 0x5154 */
    unsigned char *firstTable;  /* 0x5158 */
    unsigned char *secondTable; /* 0x515c */
    int pad5160;                /* 0x5160 */
    int mode;                   /* 0x5164 */
    char pad5168[0x51a0 - 0x5168];
    unsigned char *modeTable; /* 0x51a0 */
    char pad51A4[0x7954 - 0x51a4];
    int forcedMode; /* 0x7954 */
    char pad7958[0x7b3c - 0x7958];
    int alternate; /* 0x7b3c */
} Encoder_82F0E1E0;

extern unsigned char lbl_8319FB18[4][0x2000];
extern unsigned char lbl_831AEA20[];
extern unsigned char lbl_831AEC68[];
extern unsigned char lbl_831AEEB0[];
extern unsigned char lbl_831AF0F8[];
extern unsigned char lbl_831AF340[];
extern unsigned char lbl_831AF598[];
extern unsigned char lbl_831AF7F0[];
extern unsigned char lbl_831AFA48[];

void fn_82F0E1E0(Encoder_82F0E1E0 *self)
{
    unsigned int best;
    unsigned int mode;

    best = self->cost[0];
    mode = 0;
    if (self->cost[1] < best) {
        best = self->cost[1];
        mode = 1;
    }
    if (self->cost[2] < best) {
        best = self->cost[2];
        mode = 2;
    }
    if (self->cost[3] < best) {
        mode = 3;
    }
    if (self->forcedMode != -1) {
        mode = self->forcedMode > 3 ? self->forcedMode - 4 : self->forcedMode;
    }
    switch (mode) {
    case 0:
        self->mode = 0;
        if (self->alternate != 0) {
            self->table = lbl_831AF340;
        } else {
            self->table = lbl_831AEA20;
        }
        break;
    case 1:
        self->mode = 1;
        if (self->alternate != 0) {
            self->table = lbl_831AF598;
        } else {
            self->table = lbl_831AEC68;
        }
        break;
    case 2:
        self->mode = 2;
        if (self->alternate != 0) {
            self->table = lbl_831AF7F0;
        } else {
            self->table = lbl_831AEEB0;
        }
        break;
    case 3:
        self->mode = 3;
        if (self->alternate != 0) {
            self->table = lbl_831AFA48;
        } else {
            self->table = lbl_831AF0F8;
        }
        break;
    }
    self->modeTable = lbl_8319FB18[self->mode];
    if (self->pass == 1) {
        self->firstTable = self->table;
    } else {
        self->secondTable = self->table;
    }
}
