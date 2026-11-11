float __fsqrts(float);

void fn_83025900(float t, float b, float c, float *out)
{
    float tb = t * b;
    float it = 1.0f - t;
    float itb = it * b;
    float w2;

    if (c > 0.0f) {
        if (t >= 0.5f) {
            float ic = 1.0f - c;
            float s = (t - 0.5f) * 2.0f;
            w2 = (((1.0f - t) * b) * 2.0f) * c;
            itb = ic * itb;
            tb = s * b * c + ic * tb;
        } else {
            float ic = 1.0f - c;
            w2 = (tb * 2.0f) * c;
            itb = (1.0f - t * 2.0f) * b * c + ic * itb;
            tb = ic * tb;
        }
    } else {
        w2 = 0.0f;
    }
    out[5] = 0.0f;
    out[2] = __fsqrts(w2);
    out[0] = __fsqrts(itb);
    out[1] = __fsqrts(tb);
    out[3] = __fsqrts((1.0f - b) * it);
    out[4] = __fsqrts((1.0f - b) * t);
}
