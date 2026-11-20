typedef struct FrameRate_82E26F18 {
    unsigned __int64 timePerFrame; /* 0x00 */
    unsigned int numerator;        /* 0x08 */
    unsigned int denominator;      /* 0x0C */
    double rate;                   /* 0x10 */
} FrameRate_82E26F18;

extern FrameRate_82E26F18 lbl_83187450[8];

/* Converts a frame rate given as numerator / denominator to a frame duration in 100 ns units. */
void fn_82E26FD0(unsigned int num, unsigned int den, unsigned __int64 *timePerFrame)
{
    double rate;
    unsigned int i;

    if (num == 0 || den == 0) {
        *timePerFrame = 0;
        return;
    }
    rate = (double)num / (double)den;
    for (i = 0; i != 8; i++) {
        if (rate >= lbl_83187450[i].rate - 0.01 && rate <= lbl_83187450[i].rate + 0.01) {
            *timePerFrame = lbl_83187450[i].timePerFrame;
            return;
        }
    }
    *timePerFrame = (unsigned __int64)(10000000.0 / rate + 0.5);
}
