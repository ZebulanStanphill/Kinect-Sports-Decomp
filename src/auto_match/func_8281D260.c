extern float fn_82809558(float);
extern float fn_82809D40(float, float);

void fn_8281D260(float *value, float *out)
{
    float length = 0.0f;
    if (value[0] == 0.0f && value[2] == 0.0f) {
        *out = 0.0f;
    } else {
        *out = fn_82809D40(value[0], value[2]);
        length = fn_82809558(value[2] * value[2] + value[0] * value[0]);
    }
    fn_82809D40(value[1], length);
}
