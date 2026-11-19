typedef struct FrameRate_82E26F18 {
    unsigned __int64 timePerFrame; /* 0x00 */
    unsigned int numerator;        /* 0x08 */
    unsigned int denominator;      /* 0x0C */
    unsigned int pad[2];           /* 0x10 */
} FrameRate_82E26F18;

extern FrameRate_82E26F18 lbl_83187450[8];

void fn_82E26DD0(unsigned int num, unsigned int den, unsigned int *outNum, unsigned int *outDen);

void fn_82E26F18(unsigned __int64 timePerFrame, unsigned int *outNum, unsigned int *outDen)
{
    unsigned int i;

    if (timePerFrame == 0) {
        *outNum = 0;
        *outDen = 0;
        return;
    }
    for (i = 0; i != 8; i++) {
        if (timePerFrame >= lbl_83187450[i].timePerFrame - 30 &&
            timePerFrame <= lbl_83187450[i].timePerFrame + 30) {
            *outNum = lbl_83187450[i].numerator;
            *outDen = lbl_83187450[i].denominator;
            return;
        }
    }
    if (timePerFrame >= 100000000) {
        *outNum = 1;
        *outDen = 10;
        return;
    }
    fn_82E26DD0(10000000, (unsigned int)timePerFrame, outNum, outDen);
}
