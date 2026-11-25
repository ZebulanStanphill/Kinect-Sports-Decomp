typedef struct Format_82E36C28 {
    char pad0[0x30];
    float quality; /* 0x30 */
    char pad34[0x1c];
    int sampleRate; /* 0x50 */
} Format_82E36C28;

typedef struct Encoder_82E36C28 {
    Format_82E36C28 *format; /* 0x0 */
    char pad4[0x10];
    int f14; /* 0x14 */
    char pad18[0x4];
    int f1c; /* 0x1c */
    int f20; /* 0x20 */
    char pad24[0x1090c - 0x24];
    int lowRate;  /* 0x1090c */
    float f10910; /* 0x10910 */
    float f10914; /* 0x10914 */
    float f10918; /* 0x10918 */
    float f1091c; /* 0x1091c */
} Encoder_82E36C28;

extern const float lbl_8208DDAC; /* 0.88f */
extern const float lbl_8200D8C4; /* 5.0f */

void fn_82E36C28(Encoder_82E36C28 *self)
{
    Format_82E36C28 *format = self->format;
    float threshold = lbl_8208DDAC;
    int lowRate;

    if (format->sampleRate <= 32000 || (format->sampleRate >= 44100 && format->quality <= threshold &&
                                        (self->f14 == 0 || self->f20 != 0 || self->f1c != 0))) {
        lowRate = 1;
    } else {
        lowRate = 0;
    }
    self->lowRate = lowRate;
    self->f10910 = 0.15f;
    self->f10914 = 0.05f;
    self->f10918 = 0.5f;
    self->f1091c = 1.0f;
    if (format->quality > threshold) {
        self->lowRate = 1;
        self->f10918 = lbl_8200D8C4;
        self->f1091c = 10.0f;
    }
}
