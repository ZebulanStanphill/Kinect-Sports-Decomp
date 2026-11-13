extern float lbl_82022E50;
extern float lbl_82022E54;

void fn_8287C010(float *value)
{
    unsigned char inRange = *value < lbl_82022E50 && *value > lbl_82022E54;
    if (inRange)
        *value = 0.0f;
}
