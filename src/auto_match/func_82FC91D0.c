extern const float lbl_8216C698;
extern const float lbl_8216DE58[99];

float fn_82FC91D0(float decibels)
{
    float position;
    unsigned int index;
    float fraction;

    if (decibels <= lbl_8216C698) {
        return 0.0f;
    }
    if (decibels >= 0.0f) {
        return 1.0f;
    }
    position = decibels + 97.0f;
    index = (unsigned int)position;
    fraction = position - (float)index;
    return lbl_8216DE58[index] * (1.0f - fraction) + lbl_8216DE58[index + 1] * fraction;
}
