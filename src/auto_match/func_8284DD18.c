extern float fn_82809A88(float base, float exponent);   /* powf */
extern float fn_82809558(float x);                      /* sqrtf */

float fn_8284DD18(float value, float level, float scale)
{
    return fn_82809558(value / (fn_82809A88(4.0f, level - 1.0f) * scale));
}
