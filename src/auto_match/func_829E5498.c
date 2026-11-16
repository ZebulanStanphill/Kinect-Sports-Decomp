extern int fn_829E5430(void *self, float time, float duration, float *out);

int fn_829E5498(float *self, float value, float time, float *out)
{
    int result;
    float fraction;
    if (time <= 0.0f) {
        result = 0x80070057;
    } else {
        if (self[2] <= 0.0f) {
            return 0x8000ffff;
        }
        if (self[3] <= 0.0f) {
            return 0x8000ffff;
        }
        result = fn_829E5430(self, time, self[3], &fraction);
        if (result >= 0) {
            float blended = (1.0f - fraction) * value + self[1] * fraction;
            *out = blended;
            self[4] = blended;
            result = 0;
        }
    }
    return result;
}
