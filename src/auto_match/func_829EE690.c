typedef struct Sample_829EE690 {
    float first;
    float second;
    float value;
    float last;
} Sample_829EE690;

extern int lbl_83218B98;
extern const float lbl_82186E18;

unsigned char fn_829EE690(const Sample_829EE690 *samples)
{
    float limit = lbl_83218B98 != 0 ? lbl_82186E18 : 1.0f;
    float maximum = 0.0f;
    int i;
    for (i = 0; i < 20; i++) {
        if (samples[i].value > maximum) {
            maximum = samples[i].value;
        }
    }
    lbl_83218B98 = maximum < limit;
    return lbl_83218B98 == 0;
}
