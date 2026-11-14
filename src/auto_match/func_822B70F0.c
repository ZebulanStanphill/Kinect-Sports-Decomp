typedef struct Obj_822B70F0 {
    char pad0[0x14];
    void *channel;              /* 0x014 */
    char pad18[0x124 - 0x18];
    int muted[2];               /* 0x124 */
    int clamp;                  /* 0x12c */
    float volume[2];            /* 0x130 */
} Obj_822B70F0;

extern const float lbl_821917A8[];
extern const float lbl_821CA45C[2];
extern void fn_8252AF80(void *channel, int index, float volume);

void fn_822B70F0(Obj_822B70F0 *self, float volume, int index)
{
    int muted;

    self->volume[index] = volume;
    if (self->clamp != 0 && volume >= lbl_821917A8[0x2c / 4]) {
        if (volume < lbl_821CA45C[1]) {
            self->muted[index] = 1;
            return;
        }
        muted = 0;
    } else {
        muted = volume < lbl_821CA45C[1];
    }
    self->muted[index] = muted;
    fn_8252AF80(self->channel, index, volume);
}
