typedef struct Game_822A2938 {
    char pad0[0x2a8];
    int ready; /* 0x2a8 */
} Game_822A2938;

typedef struct Globals_822A2938 {
    char pad0[0x14];
    void *screen; /* 0x14 */
    char pad18[0x1c - 0x18];
    int loaded; /* 0x1c */
    char pad20[0x34 - 0x20];
    int flash; /* 0x34 */
    char pad38[0x88 - 0x38];
    int active; /* 0x88 */
    char pad8C[0x90 - 0x8c];
    Game_822A2938 *game; /* 0x90 */
} Globals_822A2938;

typedef struct Ref_822A2938 {
    void *object; /* 0x0 */
    void *rep;    /* 0x4 */
} Ref_822A2938;

typedef struct Desc_822A2938 {
    int a;       /* 0x0 */
    void *rep;   /* 0x4 */
    int flag;    /* 0x8 */
    int mode;    /* 0xc */
    float delay; /* 0x10 */
    unsigned char rest[0x10a0 - 0x14];
} Desc_822A2938;

extern Globals_822A2938 lbl_831D1298;
extern const float lbl_82192438[0x2c];

extern void fn_8226D2A8(Desc_822A2938 *desc);
extern void fn_822A2C28(Game_822A2938 *game, float dt);
extern int fn_8226FE40(void *screen);
extern void fn_8226D6A0(void *screen);
extern void *fn_822A2E90(Ref_822A2938 *out, Game_822A2938 *game, int *flag);
extern void fn_823F2E20(Desc_822A2938 *desc, void *src);
extern void fn_822315A0(void *rep);
extern void *fn_8226D388(Desc_822A2938 *desc);

void fn_822A2938(float dt)
{
    Ref_822A2938 ref;
    Desc_822A2938 desc;

    fn_8226D2A8(&desc);
    fn_822A2C28(lbl_831D1298.game, dt);
    if (lbl_831D1298.active != 0 && lbl_831D1298.loaded != 0 && lbl_831D1298.screen != 0 &&
        fn_8226FE40(lbl_831D1298.screen) != 0 && lbl_831D1298.game->ready != 0) {
        fn_8226D6A0(lbl_831D1298.screen);
        fn_823F2E20(&desc, fn_822A2E90(&ref, lbl_831D1298.game, &desc.flag));
        if (ref.rep != 0) {
            fn_822315A0(ref.rep);
        }
        desc.mode = 0;
        if (lbl_831D1298.flash != 0) {
            desc.delay = lbl_82192438[0x14];
        } else {
            desc.delay = 0.0f;
        }
        lbl_831D1298.screen = fn_8226D388(&desc);
    }
    if (desc.rep != 0) {
        fn_822315A0(desc.rep);
    }
}
