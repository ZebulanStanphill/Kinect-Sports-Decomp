typedef struct Stats_829E5BC0 {
    float grid[25];              /* 0x0 */
    unsigned int histogram[256]; /* 0x64 */
} Stats_829E5BC0;

typedef struct Frame_829E5BC0 {
    int pad0;
    Stats_829E5BC0 *stats; /* 0x4 */
} Frame_829E5BC0;

typedef struct Detector_829E5BC0 {
    Frame_829E5BC0 *frame; /* 0x0 */
    char pad4[0x2c];
    unsigned int width;  /* 0x30 */
    unsigned int height; /* 0x34 */
} Detector_829E5BC0;

extern const float lbl_8201DFEC;
extern const float lbl_82057B98;

unsigned char fn_829E5BC0(Detector_829E5BC0 *self, float level)
{
    unsigned int count;
    int row;
    int column;
    int i;
    float sum;
    if (level > lbl_8201DFEC) {
        goto busy;
    }
    count = 0;
    for (row = 0; row < 5; row++) {
        for (column = 0; column < 5; column++) {
            if (self->frame->stats->grid[row * 5 + column] > lbl_8201DFEC) {
                count++;
            }
        }
    }
    if (count >= 4) {
        goto busy;
    }
    sum = 0.0f;
    for (i = 128; i < 256; i++) {
        sum += (float)self->frame->stats->histogram[i];
    }
    return sum / (float)((self->height * self->width) >> 1) > lbl_82057B98;
busy:
    return 1;
}
