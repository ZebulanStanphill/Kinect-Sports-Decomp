typedef struct Channel_830221F8 {
    int pad0;
    char filter[0x10]; /* 0x04 */
    float targetLevel; /* 0x14 */
    float level;       /* 0x18 */
    int state;         /* 0x1c */
    int pad20;
    unsigned char alternate; /* 0x24 */
    unsigned char audible;   /* 0x25 */
    char pad26[7];
    unsigned char dirty; /* 0x2d */
} Channel_830221F8;

extern unsigned char fn_8303A930(float level, unsigned char alternate, float *factor);
extern void fn_8303AA38(float factor, void *filter);

int fn_830221F8(Channel_830221F8 *channel, float level)
{
    float factor;
    unsigned char audible;

    if (level < 0.0f) {
        level = 0.0f;
    } else if (level > 100.0f) {
        level = 100.0f;
    }
    if (channel->dirty) {
        channel->targetLevel = level;
        factor = 0.0f;
        channel->level = level;
        channel->state = 8;
        audible = fn_8303A930(level, channel->alternate, &factor);
        channel->audible = audible;
        if (audible == 0) {
            fn_8303AA38(factor, channel->filter);
        }
        channel->dirty = 0;
    }
    if (level != channel->level) {
        channel->level = level;
        channel->state = 0;
    }
    return 1;
}
