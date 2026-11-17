typedef struct Mix_82532810 {
    unsigned char pad0[0x34]; /* +0x0 */
    unsigned int flags;       /* +0x34 */
    unsigned char pad38[8];   /* +0x38 */
} Mix_82532810;

extern const float lbl_82192730[2];
extern char *fn_8255FEE8(char *source, Mix_82532810 *mix, int randomize, float time);
extern int fn_8252D2F8(void *self, int index, Mix_82532810 *mix, void *source);

void fn_82532810(char *self, char *source)
{
    char *settings = self + 0x180;
    Mix_82532810 mix;
    float time;

    time = settings[0x17] ? *(float *)(settings + 0x18) : lbl_82192730[1];
    source = fn_8255FEE8(source, &mix, (unsigned char)settings[0x14], time);
    if (settings[0x15]) {
        mix.flags |= 1;
    }
    if (settings[0x16]) {
        mix.flags |= 2;
    }
    fn_8252D2F8(self, (signed char)source[0x5b], &mix, source + 0x40);
    settings[0x14] = 0;
    settings[0x17] = 0;
    settings[0x15] = 0;
    settings[0x16] = 0;
}
