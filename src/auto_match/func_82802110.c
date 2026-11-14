typedef struct Range_82802110 {
    int pad0;
    unsigned int min;   /* 0x04 */
    unsigned int max;   /* 0x08 */
} Range_82802110;

void fn_82802110(Range_82802110 *range, float t, float scale, float offset, float *out)
{
    *out = (((float)range->max - (float)range->min) * t + (float)range->min + offset) * scale;
}
