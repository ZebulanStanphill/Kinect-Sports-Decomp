typedef struct Curve_8302A9B8 Curve_8302A9B8;

typedef struct CurveHolder_8302A9B8 {
    Curve_8302A9B8 *curve;
} CurveHolder_8302A9B8;

extern CurveHolder_8302A9B8 lbl_83264368;
extern float fn_8302A8F0(Curve_8302A9B8 *curve, float x);

void fn_8302A9B8(float *a, float *b)
{
    *a = fn_8302A8F0(lbl_83264368.curve, *a);
    *b = fn_8302A8F0(lbl_83264368.curve, *b);
}
