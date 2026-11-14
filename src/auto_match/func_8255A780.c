extern double __fctid(double);
extern double __fcfid(double);
/* float pool: [0x38] = 1/(2*pi); as doubles, [0x1e] = 2*pi */
extern const float lbl_821954B0[];

/* is the angle from a to b within +-tolerance, after wrapping it to one turn */
int fn_8255A780(float a, float b, float tolerance)
{
    double turns = (float)((b - a) * lbl_821954B0[0x38]);
    float angle = (float)((turns - (float)__fcfid(__fctid(turns))) * ((const double *)lbl_821954B0)[0x1e]);
    return angle >= -tolerance && angle <= tolerance;
}
