typedef struct Globals_822A1E68 {
    char pad00[0x18];
    void *stream; /* 0x18 */
    int pad1c;
    int mode; /* 0x20 */
    char pad24[8];
    unsigned char busy; /* 0x2c */
} Globals_822A1E68;

typedef struct Settings_822A1E68 {
    char pad00[0x4c];
    int muted; /* 0x4c */
} Settings_822A1E68;

typedef struct Mixer_822A1E68 {
    char pad00[0x4c];
    unsigned char enabled; /* 0x4c */
} Mixer_822A1E68;

extern Globals_822A1E68 lbl_831D1298;
extern Settings_822A1E68 lbl_8327FBC0;
extern void *lbl_832765BC;

extern void fn_822A23A8(void);
extern void fn_822A2468(void);
extern int fn_822A22C8(void);
extern void *fn_82512B08(int a, int b);
extern void fn_82512B70(void *stream);
extern Mixer_822A1E68 *fn_82292AE8(void);
extern void fn_822931D8(Mixer_822A1E68 *mixer);
extern void fn_8226D970(void);
extern void fn_82460420(void *object, float dt);
extern void fn_822A2938(float dt);

void fn_822A1E68(float dt)
{
    if (lbl_831D1298.busy != 0) {
        return;
    }
    lbl_831D1298.busy = 1;
    if (lbl_831D1298.mode != 0) {
        fn_822A23A8();
    } else {
        fn_822A2468();
    }
    if (fn_822A22C8() != 0) {
        if (lbl_831D1298.stream != 0) {
            fn_82512B70(lbl_831D1298.stream);
            lbl_831D1298.stream = 0;
        }
    } else if (lbl_831D1298.stream == 0) {
        lbl_831D1298.stream = fn_82512B08(1, lbl_831D1298.mode == 0);
    }
    fn_82292AE8()->enabled = lbl_8327FBC0.muted == 0;
    fn_822931D8(fn_82292AE8());
    lbl_831D1298.busy = 0;
    fn_8226D970();
    if (lbl_832765BC != 0) {
        fn_82460420(lbl_832765BC, dt);
    }
    fn_822A2938(dt);
}
