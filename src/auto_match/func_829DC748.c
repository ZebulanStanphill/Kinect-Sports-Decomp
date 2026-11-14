typedef struct State_829DC748 {
    char pad[0x8f060];
    float low;
    char pad2[0x8f074 - 0x8f064];
    float high;
} State_829DC748;

extern State_829DC748 *lbl_832179FC;

void fn_829DC748(unsigned int value, float *out)
{
    if (value > 0x50)
        *out = lbl_832179FC->high;
    else
        *out = lbl_832179FC->low;
}
