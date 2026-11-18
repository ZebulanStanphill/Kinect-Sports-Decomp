typedef struct AssertHooks_822A1AF8 {
    void *unk0;
    void *unk4;
    void (*report)(const char *func, const char *file, int line); /* 0x8 */
} AssertHooks_822A1AF8;

typedef struct LoadingState_822A1AF8 {
    int openCount;   /* 0x00 */
    int unk4;        /* 0x04 */
    int needsReport; /* 0x08 */
    char padC[0x1c - 0xc];
    int arg0;      /* 0x1c */
    int arg1;      /* 0x20 */
    int selection; /* 0x24 */
    char pad28[0x34 - 0x28];
    int reset0; /* 0x34 */
    int reset1; /* 0x38 */
    int reset2; /* 0x3c */
    char pad40[0x9c - 0x40];
} LoadingState_822A1AF8;

extern LoadingState_822A1AF8 lbl_831D1298;
extern AssertHooks_822A1AF8 lbl_83276774;
extern int fn_822A22C8(void);

void fn_822A1AF8(void *unused, int arg0, int arg1)
{
    if (fn_822A22C8() != 0) {
        lbl_831D1298.arg0 = arg0;
        lbl_831D1298.arg1 = arg1;
        lbl_831D1298.selection = -1;
    } else {
        lbl_831D1298.reset0 = 0;
        lbl_831D1298.reset1 = 0;
        lbl_831D1298.reset2 = 0;
    }
    lbl_831D1298.openCount++;
    if (lbl_831D1298.needsReport != 0) {
        if (lbl_83276774.report != 0) {
            lbl_83276774.report("_uiGameLoadingIncubationOpen",
                                "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\ui\\ui_game\\"
                                "ui_game_loading\\ui_game_loading_incubation.cpp",
                                0x12a);
        }
        lbl_831D1298.needsReport = 0;
    }
}
