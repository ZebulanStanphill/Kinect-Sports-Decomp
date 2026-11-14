extern int fn_82F65350(void);
extern const float lbl_82015CF0;

float fn_8301E448(float lo, float hi)
{
    float t;
    if (hi < lo)
        hi = lo;
    t = (float)fn_82F65350() * lbl_82015CF0;
    return t * (hi - lo) + lo;
}
