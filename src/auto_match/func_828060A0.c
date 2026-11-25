typedef struct Track_828060A0 {
    int pad00;
    float *scales; /* 0x04 */
    char pad08[0x16];
    unsigned short count; /* 0x1e */
} Track_828060A0;

typedef struct Stream_828060A0 {
    char pad00[0x24];
    unsigned char *masks; /* 0x24 */
    short *bases;         /* 0x28 */
    int pad2C;
    unsigned char *widths; /* 0x30 */
} Stream_828060A0;

void fn_828060A0(Track_828060A0 *track, Stream_828060A0 *stream, float **out, unsigned char *bit,
                 unsigned int **words, unsigned int index)
{
    unsigned int mask = *stream->masks;
    unsigned int flag = 0x80;

    do {
        if (index >= track->count) {
            return;
        }
        if ((flag & mask) != 0) {
            if (((flag >> 3) & mask) != 0) {
                stream->bases++;
            } else {
                short base = *stream->bases++;
                unsigned char width = *stream->widths++;
                unsigned int *w = *words;
                unsigned char b = *bit;
                unsigned int t;
                **out =
                    ((float)((((w[1] << 1) << (31 - b)) | (w[0] >> b)) & ((1 << width) - 1)) + (float)base) *
                    track->scales[index];
                t = (unsigned char)(*bit + width);
                *bit = t & 0x1f;
                *words += t >> 5;
            }
        }
        flag >>= 1;
        index++;
        (*out)++;
    } while (flag != 0x10);
}
