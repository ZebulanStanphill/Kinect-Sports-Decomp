typedef struct Temporary_8234B0C8 {
    void *source; /* +0x0 */
    int handle;   /* +0x4 */
} Temporary_8234B0C8;

typedef struct Player_8234B0C8 {
    char pad0[0x20];  /* 0x00 */
    void *animator;   /* 0x20 */
    void *blender;    /* 0x24 */
    int animation;    /* 0x28 */
    char *source;     /* 0x2c */
    float time;       /* 0x30 */
    int blendEnabled; /* 0x34 */
} Player_8234B0C8;

extern const float lbl_821CA45C[2];
extern char *fn_8234B190(Player_8234B0C8 *self);
extern void fn_8255F880(Temporary_8234B0C8 *temporary, void *source);
extern int fn_8255F8D0(Temporary_8234B0C8 *temporary, float low, float high, int flags);
extern void fn_827F2D60(void *self, int value, float time, int mode, int flags);
extern void fn_827F5708(void *self, float value);

void fn_8234B0C8(Player_8234B0C8 *self, float time)
{
    Temporary_8234B0C8 temporary;
    char *source = fn_8234B190(self);
    float high = lbl_821CA45C[1];
    int value;

    if (source != self->source) {
        fn_8255F880(&temporary, source + 0x40);
        value = fn_8255F8D0(&temporary, 0.0f, high, 0);
        fn_827F2D60(self->animator, value, 0.0f, 0x12, 0);
        self->time = time;
        self->animation = value;
        self->source = source;
    }
    if (self->blendEnabled != 0 && self->blender != 0) {
        fn_827F5708(self->blender, high);
    }
}
