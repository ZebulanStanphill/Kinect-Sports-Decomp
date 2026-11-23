typedef struct Measurement_82A04470 {
    unsigned char padding0[0x40a0];
    float first; /* 0x40a0 */
    unsigned int unknown0;
    float second; /* 0x40a8 */
    unsigned int unknown1;
    float third; /* 0x40b0 */
    unsigned char padding1[0x14];
    float total; /* 0x40c8 */
    unsigned char padding2[0x0c];
    float fourth; /* 0x40d8 */
} Measurement_82A04470;

typedef struct Mode_82A04470 {
    unsigned char padding0[8];
    float defaultValue; /* 0x08 */
    unsigned char padding1[0x14];
} Mode_82A04470;

extern Mode_82A04470 lbl_8315C958[31];
extern const float lbl_82015D08;

float fn_82A04470(const Measurement_82A04470 *self, unsigned int mode)
{
    float total = self->total;
    float initial = lbl_8315C958[mode].defaultValue;
    float value;
    float ratio;

    if (total != 0.0f) {
        switch (mode) {
        case 21:
        case 22:
            if (self->fourth != 0.0f) {
                value = self->fourth / total;
                ratio = value / initial;
                if (ratio < 0.8f) {
                    return (value + initial) * 0.5f;
                }
                if (ratio < 0.95f) {
                    return value;
                }
            }
            break;

        case 3:
        case 6:
        case 23:
        case 24:
            if (self->first != 0.0f) {
                value = (self->first / total) * 0.5f;
                ratio = value / initial;
                if (ratio < 0.8f) {
                    return (value + initial) * 0.5f;
                }
                if (ratio < 0.9f) {
                    return value;
                }
            }
            break;

        case 7:
        case 10:
        case 27:
        case 28:
            if (self->second != 0.0f) {
                float limit;

                value = (self->second / total) * 0.5f;
                ratio = value / initial;
                limit = (mode == 7 || mode == 10) ? 0.8f : 0.9f;
                if (ratio < limit) {
                    return (value + initial) * 0.5f;
                }
            }
            break;

        case 12:
        case 13:
        case 25:
        case 26:
            if (self->third != 0.0f) {
                value = (self->third / total) * 0.5f;
                if (value / initial > lbl_82015D08) {
                    return (value + initial) * 0.5f;
                }
            }
            break;
        }
    }
    return initial;
}
