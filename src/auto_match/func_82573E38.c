extern float lbl_8218E8FC[];
extern float lbl_821CA45C[];
extern double sqrt(double);

int fn_82573E38(float a, float b, float c, float *root0, float *root1)
{
    float denom = a * 2.0f;
    int found;
    if (denom != 0.0f) {
        float inv = lbl_821CA45C[1] / denom;
        float disc = b * b - (a * c) * lbl_8218E8FC[0];
        if (disc < 0.0f) {
            *root1 = 0.0f;
            *root0 = 0.0f;
            found = 0;
        } else {
            float s = (float)sqrt(disc);
            *root0 = (s - b) * inv;
            *root1 = (-b - s) * inv;
            found = 1;
        }
    } else if (b != 0.0f) {
        float r = -(c / b);
        *root0 = r;
        *root1 = r;
        found = 1;
    } else {
        *root1 = c;
        *root0 = c;
        found = 0;
    }
    return found;
}
