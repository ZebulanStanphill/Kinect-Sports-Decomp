typedef struct Temporary_8234C258 {
    int words[4]; /* +0x0 */
} Temporary_8234C258;

extern const float lbl_821CA45C[2];
extern const float lbl_8218E8E8;
extern char *fn_8234C398(void *self, unsigned int hand);
extern void fn_8255F880(Temporary_8234C258 *temporary, void *source);
extern int fn_8255F8D0(Temporary_8234C258 *temporary, float low, float high, int flags);
extern unsigned char fn_827F22D0(void *self);
extern void fn_827F2D60(void *self, int value, float time, int mode, int flags);
extern void fn_827F6210(void *self, float value);

void fn_8234C258(char *self, unsigned int hand)
{
    Temporary_8234C258 temporary;
    char *source = fn_8234C398(self, hand);
    char *entry = self + hand * 0x2c;
    float high = lbl_821CA45C[1];
    int value;
    float time;

    if (source != *(char **)(entry + 0x124)) {
        fn_8255F880(&temporary, source + 0x40);
        value = fn_8255F8D0(&temporary, 0.0f, high, 0);
        time = fn_827F22D0(*(void **)(entry + 0x118)) ? 0.0f : lbl_8218E8E8;
        fn_827F2D60(*(void **)(entry + 0x118), value, time, 0x12, 0);
        *(int *)(entry + 0x120) = value;
        *(char **)(entry + 0x124) = source;
    }
    fn_827F6210(*(void **)(entry + 0x120), high);
}
