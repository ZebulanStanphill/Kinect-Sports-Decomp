extern unsigned int lbl_83217B7C;
extern float lbl_83217B78;

unsigned int fn_829DD528(float value)
{
    if ((lbl_83217B7C & 1) == 0) {
        lbl_83217B7C |= 1;
        lbl_83217B78 = 0.4f;
    }
    if (value <= 0.8f) {
        return 0;
    }
    if (value >= 4.0f) {
        return 7;
    }
    return (unsigned int)((value - 0.8f) / lbl_83217B78);
}
