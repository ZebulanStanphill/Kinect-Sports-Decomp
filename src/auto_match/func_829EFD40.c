extern float lbl_8315C878[4];
extern float lbl_8315C888[4];
extern float lbl_8315C898[4];
extern float lbl_8315C8A8[4];
extern float lbl_8315C8B8[4];

int fn_829EFD40(float *out)
{
    if (out == 0) {
        return 0x80070057;
    }
    out[0] = lbl_8315C878[2];
    out[1] = lbl_8315C888[2];
    out[2] = lbl_8315C898[2];
    out[3] = lbl_8315C8A8[2];
    out[4] = lbl_8315C8B8[2];
    return 0;
}
