typedef struct Channels_825B9EF8 {
    int pad0;
    int refs[4];     /* 0x04 */
    float levels[4]; /* 0x14 */
} Channels_825B9EF8;

void fn_825B9EF8(Channels_825B9EF8 *channels, unsigned int mask, int release)
{
    int i;
    unsigned int bit;
    int silent[4];

    if (release != 0) {
        for (i = 0, bit = 1; i < 4; i++, bit <<= 1) {
            if (mask & bit) {
                if (--channels->refs[i] == 0) {
                    channels->levels[i] = 0.5f;
                }
            }
        }
        return;
    }
    for (i = 0, bit = 1; i < 4; i++, bit <<= 1) {
        silent[i] = 0;
        if (mask & bit) {
            if (++channels->refs[i] == 1) {
                silent[i] = channels->levels[i] == 0.0f;
            }
        }
    }
}
