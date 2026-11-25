extern const float lbl_820885A0;
extern const float lbl_8208DD8C;
extern const float lbl_8208DD90;

int fn_82E34AF8(unsigned int bytesPerSecond, unsigned int channels, unsigned short formatTag, float *out)
{
    int hr = 0;
    unsigned int rate;

    if (formatTag > 0x166 || formatTag < 0x161 || formatTag == 0x163 || formatTag == 0x164 ||
        formatTag == 0x167 || channels < 1 || out == 0) {
        return 0x80070057;
    }
    rate = (bytesPerSecond * 2) / channels;
    if (rate >= 192000) {
        *out = lbl_8208DD90 / (float)rate;
    } else if (rate >= 128000) {
        *out = lbl_8208DD90 / (float)rate;
    } else if (rate >= 96000) {
        *out = lbl_820885A0 / (float)rate;
    } else if (rate >= 80000) {
        *out = 0.05f;
    } else if (rate >= 64000) {
        *out = lbl_8208DD8C;
    } else if (rate >= 48000) {
        *out = 0.1f;
    } else if (rate >= 40000) {
        *out = 0.2f;
    } else {
        hr = 0x80070057;
    }
    return hr;
}
