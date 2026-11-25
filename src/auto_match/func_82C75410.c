#include <math.h>

typedef struct Encoder_82C75410 {
    char pad0[0xe74];
    int forcedLevel; /* 0xe74 */
    char pade78[0x8];
    int frameRate;  /* 0xe80 */
    int bufferSize; /* 0xe84 */
    char pade88[0x2e74];
    int level; /* 0x3cfc */
    char pad3d00[0x14];
    int interlaced; /* 0x3d14 */
    char pad3d18[0x2090];
    int defaultLevel; /* 0x5da8 */
    int bitRate;      /* 0x5dac */
} Encoder_82C75410;

int fn_82C75410(Encoder_82C75410 *enc, int width, int height)
{
    int level;
    int forced;
    int frameRate;
    int bufferSize;
    int bitRate;
    int scale;
    int quality;

    level = enc->defaultLevel;
    if (level < 0) {
        level = 0;
        enc->defaultLevel = 0;
    }
    forced = enc->forcedLevel;
    if (forced >= 0 && forced <= 4) {
        enc->level = forced;
        return 0;
    }
    if (level < 0 || level > 4) {
        frameRate = 30;
        if (enc->frameRate > 0) {
            frameRate = enc->frameRate;
        }
        bufferSize = enc->bufferSize;
        if (bufferSize <= 0) {
            bufferSize = 500;
        }
        bitRate = enc->bitRate;
        if (bitRate <= 0 || bitRate < 100 || bitRate > 100000) {
            enc->level = 0;
            return 0;
        }
        scale = (int)(sqrtf((float)bufferSize) * (float)(frameRate * width * height) * 0.001f);
        quality = (bitRate * 10000 + (scale >> 1)) / scale;
        if (enc->interlaced == 0) {
            quality -= 50;
        }
        quality -= 100;
        if (quality >= 120) {
            enc->level = 4;
            return 0;
        }
        if (quality >= 90) {
            enc->level = 3;
            return 0;
        }
        if (quality >= 65) {
            enc->level = 2;
            return 0;
        }
        if (quality < 42) {
            enc->level = 0;
            return 0;
        }
        level = 1;
    }
    enc->level = level;
    return 0;
}
