typedef struct Settings_82530620 {
    char pad000[0xc0];
    int width;  /* 0xc0 */
    int height; /* 0xc4 */
    char padc8[0x148 - 0xc8];
} Settings_82530620;

typedef struct State_82530620 {
    char pad000[0xd0];
    char buffer[0x250 - 0xd0]; /* 0xd0 */
    char *cursor;              /* 0x250 */
    char pad254[0x318 - 0x254];
    int mode;    /* 0x318 */
    int count;   /* 0x31c */
    int enableA; /* 0x320 */
    int enableB; /* 0x324 */
    int enableC; /* 0x328 */
    int enableD; /* 0x32c */
} State_82530620;

typedef struct Slot_82530620 {
    char pad00[0xa0];
    int used; /* 0xa0 */
    char pada4[0xb0 - 0xa4];
} Slot_82530620;

extern Settings_82530620 lbl_8326B370;
extern State_82530620 lbl_83296890;
extern Slot_82530620 lbl_83296BE0[2];

void fn_82530620(void)
{
    int i;

    lbl_83296890.count = 0;
    lbl_83296890.cursor = lbl_83296890.buffer;
    lbl_83296890.enableA = 1;
    lbl_83296890.enableB = 1;
    lbl_83296890.enableC = 1;
    lbl_83296890.enableD = 1;
    if (lbl_8326B370.width / lbl_8326B370.height == 1)
        lbl_83296890.mode = 1;
    else
        lbl_83296890.mode = 3;
    for (i = 0; i < 2; i++)
        lbl_83296BE0[i].used = 0;
}
