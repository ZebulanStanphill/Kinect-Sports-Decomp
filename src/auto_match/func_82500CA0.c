typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Game_82500CA0 Game_82500CA0;

typedef struct GameVtbl_82500CA0 {
    void *slots0[3];
    void (*load)(Game_82500CA0 *self); /* 0x0C */
    void *slots10[1];
    int (*isLoaded)(Game_82500CA0 *self); /* 0x14 */
    void *slots18[13];
    void *(*getBank)(Game_82500CA0 *self); /* 0x4C */
    void *slots50[7];
    int (*getSync)(Game_82500CA0 *self, int *target, unsigned char *flags); /* 0x6C */
} GameVtbl_82500CA0;

struct Game_82500CA0 {
    GameVtbl_82500CA0 *vt;
};

typedef struct Cache_82500CA0 {
    char pad0[0xc];
    void *bank; /* 0x0C */
} Cache_82500CA0;

typedef struct Temporary_82500CA0 {
    char data[0x10];
} Temporary_82500CA0;

typedef struct Screen_82500CA0 {
    char pad0[0x180];
    Cache_82500CA0 cache; /* 0x180 */
    char pad190[0x120];
    float fade; /* 0x2B0 */
    char pad2b4[0x60c];
    Game_82500CA0 *game; /* 0x8C0 */
    char pad8c4[0x278];
    float time; /* 0xB3C */
    char padb40[0x20];
    void *tracker;         /* 0xB60 */
    void *bank;            /* 0xB64 */
    unsigned char loaded;  /* 0xB68 */
    unsigned char pending; /* 0xB69 */
    char padb6a[0x2];
    int character;       /* 0xB6C */
    char key[0x3e8];     /* 0xB70 */
    unsigned int screen; /* 0xF58 */
    char padf5c[0x24];
    __vector4 orientation; /* 0xF80 */
    char padf90[0x5c];
    unsigned int music;       /* 0xFEC */
    unsigned int musicHandle; /* 0xFF0 */
    int mode;                 /* 0xFF4 */
    char padff8[0x8];
    unsigned char moving; /* 0x1000 */
} Screen_82500CA0;

extern void *lbl_83265988;
extern void *lbl_83297B04;
extern char lbl_821C223C[];

extern void *fn_828EB518(unsigned int index);
extern void *fn_8225C590(void);
extern int fn_8225DA70(void *list, char *key, void *item, unsigned int *out);
extern void fn_825010E8(Screen_82500CA0 *self, char *key);
extern void fn_827EF8F8(void *bank);
extern void fn_82F520B0(void *tracker, int target, unsigned char flags);
extern void fn_827EFC90(void *bank, unsigned short id, void *data, void *context);
extern void fn_8255F880(Temporary_82500CA0 *temporary, unsigned int *source);
extern unsigned int fn_8255F8D0(Temporary_82500CA0 *temporary, float low, float high, int flags);
extern void fn_827F2D60(void *bank, unsigned int value, float time, int mode, int flags);
extern void fn_825012C0(Screen_82500CA0 *self, float time);
extern unsigned char fn_82F525F0(void *tracker);
extern __vector4 *fn_82F52188(__vector4 *out, void *tracker, int mode);
extern void fn_82F51AC0(void *tracker, float time, int a, int b);
extern void fn_82501190(Screen_82500CA0 *self);
extern void fn_82592430(Screen_82500CA0 *self, void *message);
extern void fn_8313EFB0(void);
extern int atexit(void (*func)(void));

void fn_82500CA0(Screen_82500CA0 *self, void *message)
{
    static unsigned int guard; /* initialisation guard of the function-local callback object */

    {
        float *fade = &self->fade;
        *fade = 10.0f;
    }
    if (self->pending) {
        if (self->mode == 3 && self->character >= 0) {
            void *item;
            if ((unsigned int)self->character == 0xff) {
                item = lbl_83265988;
            } else {
                item = fn_828EB518(self->character);
            }
            if (item != 0) {
                if (fn_8225DA70(fn_8225C590(), self->key, item, 0) == 0) {
                    goto done;
                }
                fn_825010E8(self, self->key);
            }
        } else {
            if (self->screen == 0x3e5) {
                goto done;
            }
            fn_825010E8(self, self->key);
        }
        self->pending = 0;
    } else if (!self->loaded) {
        Game_82500CA0 *game = self->game;
        if (game != 0) {
            if (game->vt->isLoaded(game) == 0) {
                game->vt->load(game);
            }
            if (game->vt->isLoaded(game) != 0) {
                Cache_82500CA0 *cache = &self->cache;
                int target;
                unsigned char flags;
                if (cache->bank == 0) {
                    cache->bank = self->game->vt->getBank(self->game);
                }
                self->bank = cache->bank;
                if ((guard & 1) == 0) {
                    guard |= 1;
                    lbl_83297B04 = lbl_821C223C;
                    atexit(fn_8313EFB0);
                }
                fn_827EF8F8(self->bank);
                if (game->vt->getSync(game, &target, &flags) != 0) {
                    int i;
                    fn_82F520B0(self->tracker, target, flags);
                    for (i = 0; i < 0x47; i++) {
                        fn_827EFC90(self->bank, (unsigned short)i, &lbl_83297B04, self->tracker);
                    }
                }
                self->loaded = 1;
                if (self->music != 0) {
                    Temporary_82500CA0 temporary;
                    unsigned int handle;
                    float zero = 0.0f;
                    fn_8255F880(&temporary, &self->music);
                    handle = fn_8255F8D0(&temporary, zero, 1.0f, 0);
                    self->musicHandle = handle;
                    if (handle != 0) {
                        fn_827F2D60(self->bank, handle, 0.5f, 0x12, 0);
                    }
                    fn_825012C0(self, zero);
                }
            }
        }
    }
done:
    if (self->loaded) {
        float time = self->time;
        if (fn_82F525F0(self->tracker)) {
            __vector4 temporary;
            self->orientation = *fn_82F52188(&temporary, self->tracker, 2);
            fn_82F51AC0(self->tracker, time, 0, 2);
            if (self->moving) {
                fn_82501190(self);
            }
        }
        fn_825012C0(self, time);
    }
    fn_82592430(self, message);
}
