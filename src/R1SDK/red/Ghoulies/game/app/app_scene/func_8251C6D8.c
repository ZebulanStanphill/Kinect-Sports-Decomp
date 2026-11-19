typedef struct Hooks_8251C6D8 {
    void (*onReset)(void); /* 0x0 */
    char pad4[0x28 - 0x4];
    void (*onResetDone)(void); /* 0x28 */
} Hooks_8251C6D8;

typedef struct Debug_8251C6D8 {
    char pad0[0x8];
    void (*assertFailed)(const char *expression, const char *file, int line); /* 0x8 */
    char padC[0x24 - 0xc];
    int (*isOk)(void); /* 0x24 */
    char pad28[0x30 - 0x28];
} Debug_8251C6D8;

typedef struct Scene_8251C6D8 {
    int pad0; /* 0x0 */
    int f4;   /* 0x4 */
    char pad8[0x14 - 0x8];
    int f14; /* 0x14 */
    int f18; /* 0x18 */
    char pad1C[0x104 - 0x1c];
    void (*setPaused)(int paused); /* 0x104 */
    char pad108[0x128 - 0x108];
    int f128; /* 0x128 */
} Scene_8251C6D8;

extern Hooks_8251C6D8 lbl_832659F4;
extern Debug_8251C6D8 lbl_83276774;
extern Scene_8251C6D8 lbl_832960A0;
extern char lbl_831D50D0[];
extern char lbl_831D6F00[];
extern void fn_825996B0(void);
extern void fn_82624CC8(void *list, int mode);

void fn_8251C6D8(void)
{
    int ok;

    fn_825996B0();
    fn_82624CC8(lbl_831D50D0, 3);
    fn_82624CC8(lbl_831D6F00, 2);
    if (lbl_832659F4.onReset != 0) {
        lbl_832659F4.onReset();
    }
    lbl_832960A0.f128 = 0;
    if (lbl_832960A0.setPaused != 0) {
        lbl_832960A0.setPaused(0);
    }
    if (lbl_83276774.isOk != 0) {
        ok = lbl_83276774.isOk();
    } else {
        ok = 0;
    }
    if (ok == 0 && lbl_83276774.assertFailed != 0) {
        lbl_83276774.assertFailed("appSceneResetToStartOfGame",
                                  "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\app\\app_scene.cpp",
                                  0x359);
    }
    lbl_832960A0.f4 = 0;
    lbl_832960A0.f18 = 0;
    lbl_832960A0.f14 = 0;
    lbl_832960A0.f128 = 0;
    if (lbl_832659F4.onResetDone != 0) {
        lbl_832659F4.onResetDone();
    }
}
