typedef struct Function_8247D430 {
    const void *manager;
    void (*fn)(void);
    int pad[2];
    struct Function_8247D430 *impl;
} Function_8247D430;

typedef struct Game_8247D430 {
    char pad0[0x54];
    int loaded;                    /* 0x54 */
} Game_8247D430;

typedef struct World_8247D430 {
    char pad0[0x8c8];
    int scene;                     /* 0x8c8 */
} World_8247D430;

typedef struct Self_8247D430 {
    int pad0[2];
    int state;                     /* 0x08 */
    int pad0c;
    char sub[0x80];                /* 0x10 */
    World_8247D430 *world;         /* 0x90 */
} Self_8247D430;

typedef struct Global_8247D430 {
    char pad0[0x1c];
    int current;                   /* 0x1c */
} Global_8247D430;

extern Global_8247D430 lbl_831D44F0;
extern const char lbl_821B44EC[];
extern const float lbl_821917A8[];
extern const float lbl_821CA45C[2];

extern void fn_82292BC0(int a, int b, int c);
extern void fn_82292C30(int mode);
extern Game_8247D430 *fn_82292AE8(void);
extern void fn_82536070(const char *name, const char *value);
extern void fn_8254B438(int scene);
extern void fn_8247D718(void);
extern void fn_825521F0(float from, float to, Function_8247D430 *done);
extern void fn_8247CD28(void *sub);

void fn_8247D430(Self_8247D430 *self)
{
    Game_8247D430 *game;

    fn_82292BC0(0, 0, 0);
    fn_82292C30(4);
    game = fn_82292AE8();
    if (game->loaded != 0) {
        game->loaded = 0;
        fn_82536070("stadium_location", "exterior");
    }
    fn_8254B438(self->world->scene);
    if (self->state == 4) {
        Function_8247D430 done;
        void (*fn)(void) = fn_8247D718;
        lbl_831D44F0.current = -1;
        if (fn == 0) {
            done.impl = 0;
        } else {
            done.manager = lbl_821B44EC;
            done.fn = fn;
            done.impl = &done;
        }
        fn_825521F0(lbl_821CA45C[1], lbl_821917A8[6], &done);
    }
    fn_8247CD28(self->sub);
}
