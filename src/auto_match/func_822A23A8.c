typedef struct Fade_822A23A8 {
    int target;   /* 0x00 */
    int previous; /* 0x04 */
    char pad08[0x0C - 0x08];
    float inRate;  /* 0x0C */
    float outRate; /* 0x10 */
    char pad14[0x20 - 0x14];
    int timed; /* 0x20 */
    char pad24[0x28 - 0x24];
    float value; /* 0x28 */
} Fade_822A23A8;

extern Fade_822A23A8 lbl_831D1298;

void fn_822A23A8(float dt)
{
    float value;

    if (lbl_831D1298.target > 0 && lbl_831D1298.previous == 0) {
        lbl_831D1298.value = 0.0f;
    } else if (lbl_831D1298.target == 0 && lbl_831D1298.previous > 0) {
        lbl_831D1298.value = 1.0f;
    }
    value = lbl_831D1298.value;
    lbl_831D1298.previous = lbl_831D1298.target;
    if (lbl_831D1298.target > 0 && value < 1.0f) {
        value = value + lbl_831D1298.inRate * dt;
        lbl_831D1298.value = value;
        if (value >= 1.0f) {
            lbl_831D1298.value = 1.0f;
        }
    } else if (lbl_831D1298.target == 0 && value > 0.0f) {
        value = value - lbl_831D1298.outRate * dt;
        lbl_831D1298.value = value;
        if (value <= 0.0f) {
            lbl_831D1298.value = 0.0f;
            lbl_831D1298.timed = 0;
        }
    }
}
