typedef struct Temporary_824FCD30 {
    int words[4];
} Temporary_824FCD30;

static const float zero_824FCD30 = 0.0f;

extern float lbl_821CA45C[2];
extern float lbl_8218E8E8;
extern char *fn_82560010(void *self, const char *name);
extern void fn_8255F880(Temporary_824FCD30 *temporary, void *source);
extern int fn_8255F8D0(Temporary_824FCD30 *temporary, float low, float high, int flags);
extern unsigned char fn_827F22D0(void *self);
extern void fn_827F2D60(void *self, int value, float time, int mode, int flags);

void fn_824FCD30(char *self)
{
    Temporary_824FCD30 temporary;
    int value;
    float time;
    fn_8255F880(&temporary, fn_82560010(*(void **)(self + 0x20), "stand") + 0x40);
    value = fn_8255F8D0(&temporary, zero_824FCD30, lbl_821CA45C[1], 0);
    time = fn_827F22D0(*(void **)(self + 8)) ? zero_824FCD30 : lbl_8218E8E8;
    fn_827F2D60(*(void **)(self + 8), value, time, 0x12, 0);
    *(int *)(self + 0x28) = 1;
}
