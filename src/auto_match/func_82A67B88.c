/* Copies count floats from src to dst, clamping each to [-1, 1]. */
void fn_82A67B88(float *dst, const float *src, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        float value = src[i];

        if (value < -1.0f) {
            value = -1.0f;
        } else if (value > 1.0f) {
            value = 1.0f;
        }
        dst[i] = value;
    }
}
