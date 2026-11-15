extern const float lbl_8201DDF4;
extern const float lbl_82022E64;
extern const float lbl_82022E58;
extern const float lbl_8201543C;
extern const float lbl_82022E5C;

float fn_8287C238(float *value)
{
    float current = *value;
    if (current >= lbl_8201DDF4 && current <= lbl_82022E64) {
        float lower = lbl_82022E58;
        float step = lbl_8201543C;
        float upper;
        while (current < lower) {
            current = *value + step;
            *value = current;
        }
        upper = lbl_82022E5C;
        while (*value >= upper) {
            *value -= step;
        }
        return *value;
    }
    *value = 0.0f;
    return 0.0f;
}
