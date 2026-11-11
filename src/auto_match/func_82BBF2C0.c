typedef struct Color_82BBF2C0 {
    float r, g, b, a;
} Color_82BBF2C0;

extern void *memset(void *, int, unsigned int);

static __forceinline void swapWords(unsigned int *p) { *p = (*p << 16) | (*p >> 16); }

int fn_82BBF2C0(unsigned int *bitmap, Color_82BBF2C0 *color, int dither)
{
    float error[16];
    unsigned int i;

    bitmap[0] = 0;
    bitmap[1] = 0;

    if (dither)
        memset(error, 0, sizeof(error));

    for (i = 0; i < 16; i++) {
        float alpha = color[i].a;
        unsigned int u;

        if (dither)
            alpha += error[i];

        bitmap[i >> 3] >>= 4;
        u = (unsigned int)(int)(alpha * 15.0f + 0.5f);
        bitmap[i >> 3] |= (u << 28);

        if (dither) {
            float diff = alpha - (float)u * (1.0f / 15.0f);

            if (3 != (i & 3))
                error[i + 1] += diff * (7.0f / 16.0f);

            if (i < 12) {
                if (i & 3)
                    error[i + 3] += diff * (3.0f / 16.0f);

                error[i + 4] += diff * (5.0f / 16.0f);

                if (3 != (i & 3))
                    error[i + 5] += diff * (1.0f / 16.0f);
            }
        }
    }

    swapWords(&bitmap[0]);
    swapWords(&bitmap[1]);
    return 0;
}
