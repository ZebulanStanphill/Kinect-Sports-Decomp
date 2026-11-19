/* Sixteen RGBA colours: un-premultiplies each colour by its alpha, walking a pointer to the alpha channel. */
int fn_82BBDD18(float *rgba)
{
    float *alpha;
    int i;

    alpha = rgba + 3;
    for (i = 0; i < 16; i++, alpha += 4) {
        float a = alpha[0];
        if (a == 0.0f) {
            alpha[-3] = 0.0f;
            alpha[-2] = 0.0f;
            alpha[-1] = 0.0f;
        } else if (a < 1.0f) {
            float scale = 1.0f / a;
            alpha[-3] = alpha[-3] < a ? alpha[-3] * scale : 1.0f;
            alpha[-2] = alpha[-2] < a ? alpha[-2] * scale : 1.0f;
            alpha[-1] = alpha[-1] < a ? alpha[-1] * scale : 1.0f;
        }
    }
    return 0;
}
