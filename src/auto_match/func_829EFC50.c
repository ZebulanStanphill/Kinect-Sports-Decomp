extern float lbl_8315C878[4];
extern float lbl_8315C888[4];
extern float lbl_8315C898[4];
extern float lbl_8315C8A8[4];
extern float lbl_8315C8B8[4];
extern float lbl_83218BA0[5];

int fn_829EFC50(float *values)
{
    if (values == 0) {
        return 0x80070057;
    }
    if (values[0] >= lbl_8315C878[0] && values[0] <= lbl_8315C878[1]) {
        lbl_83218BA0[0] = values[0];
    }
    if (values[1] >= lbl_8315C888[0] && values[1] <= lbl_8315C888[1]) {
        lbl_83218BA0[1] = values[1];
    }
    if (values[2] >= lbl_8315C898[0] && values[2] <= lbl_8315C898[1]) {
        lbl_83218BA0[2] = values[2];
    }
    if (values[3] >= lbl_8315C8A8[0] && values[3] <= lbl_8315C8A8[1]) {
        lbl_83218BA0[3] = values[3];
    }
    if (values[4] >= lbl_8315C8B8[0] && values[4] <= lbl_8315C8B8[1]) {
        lbl_83218BA0[4] = values[4];
    }
    return 0;
}
