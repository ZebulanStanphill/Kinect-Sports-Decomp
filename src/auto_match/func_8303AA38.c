double tan(double x);

/* Second-order Butterworth low-pass coefficients for a cutoff in Hz at 48 kHz (pi / 48000). */
void fn_8303AA38(float cutoff, float *coefficients)
{
    float k;
    float k2;
    float ks;
    float norm;

    k = 1.0f / (float)tan(cutoff * 6.54498508e-05f);
    ks = k * 1.41421354f;
    k2 = k * k;
    norm = 1.0f / (k2 + ks + 1.0f);
    coefficients[0] = norm;
    coefficients[1] = norm * 2.0f;
    coefficients[2] = (1.0f - k2) * norm * -2.0f;
    coefficients[3] = -((1.0f - ks + k2) * norm);
}
