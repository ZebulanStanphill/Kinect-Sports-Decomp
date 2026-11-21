typedef struct Temporary_8255F880 {
    int a; /* 0x0 */
    int b; /* 0x4 */
} Temporary_8255F880;

typedef struct Source_824FAB98 {
    unsigned int first;  /* 0x0 */
    unsigned int second; /* 0x4 */
} Source_824FAB98;

typedef struct Animation_824FAB98 {
    void *table;        /* 0x0 */
    void *player;       /* 0x4 */
    unsigned int value; /* 0x8 */
    unsigned int blend; /* 0xc */
} Animation_824FAB98;

typedef struct Self_824FAB98 {
    char pad000[0x70];
    int state; /* 0x70 */
    char pad074[0x200 - 0x74];
    Animation_824FAB98 animation; /* 0x200 */
    int count;                    /* 0x210 */
    unsigned int firsts[5];       /* 0x214 */
    unsigned int seconds[5];      /* 0x228 */
} Self_824FAB98;

extern float lbl_821CA45C[2];
extern void fn_8255F880(Temporary_8255F880 *temporary, Source_824FAB98 *source);
extern unsigned int fn_8255F8D0(Temporary_8255F880 *temporary, float low, float high, int flags);
extern unsigned int fn_8251F720(unsigned int *second, int flags);
extern void fn_827F2D60(void *player, unsigned int value, float time, int mode, int flags);
extern int fn_824FAC80(Self_824FAB98 *self, float time, Animation_824FAB98 *animation);

void fn_824FAB98(Self_824FAB98 *self)
{
    Source_824FAB98 source;
    Temporary_8255F880 temporary;
    Animation_824FAB98 *animation = &self->animation;
    unsigned int second;

    source.first = self->firsts[self->count - 1];
    second = self->seconds[self->count - 1];
    source.second = second;
    fn_8255F880(&temporary, &source);
    animation->value = fn_8255F8D0(&temporary, 0.0f, lbl_821CA45C[1], 1);
    if (animation->blend == 0) {
        if (second != 0) {
            animation->blend = fn_8251F720(&source.second, 0);
        } else {
            animation->blend = 0;
        }
    }
    if (animation->value != 0) {
        fn_827F2D60(animation->player, animation->value, 0.0f, 0x12, 0);
    }
    fn_824FAC80(self, 0.0f, animation);
    self->state = 2;
}
