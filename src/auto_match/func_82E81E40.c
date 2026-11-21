typedef struct Encoder_82E81E40 {
    char pad0[0x62c];
    int lowRateMode;   /* 0x62c */
    int lowRateFilter; /* 0x630 */
    char pad634[0x644 - 0x634];
    int denoise; /* 0x644 */
    int threads; /* 0x648 */
    char pad64C[0x888 - 0x64c];
    int profile; /* 0x888 */
    char pad88C[0x920 - 0x88c];
    int deblock; /* 0x920 */
    char pad924[0x1fa8 - 0x924];
    int cores; /* 0x1fa8 */
    char pad1FAC[0x76b8 - 0x1fac];
    int highBitrate; /* 0x76b8 */
} Encoder_82E81E40;

void fn_82E81E40(Encoder_82E81E40 *self, int bitrate)
{
    int lowRate;

    if (bitrate > 0x4d5800) {
        self->denoise = 0;
    }
    if (self->cores >= 2) {
        self->threads = 1;
    }
    self->highBitrate = bitrate > 0x4d5800;
    if (bitrate >= 0x4d5800) {
        self->deblock = 0;
    }
    if (self->profile == 2) {
        if (self->cores >= 2) {
            lowRate = bitrate < 0x708000;
            self->lowRateMode = lowRate;
            self->lowRateFilter = lowRate;
        } else {
            lowRate = bitrate <= 0x2e6800;
            self->lowRateMode = lowRate;
            self->lowRateFilter = lowRate;
        }
    }
}
