// Builds a description string "<side>_<force>_<+z|-z>" for a motion: side from the x component of
// v (scaled by 2 / self->+0x20) against the threshold lbl_831D2BF0[1] ("left" / "right" / "centre"),
// force from the length of w against lbl_831D2BF0[0] ("hard" / "medium"), and the sign of w.z.
// The std::string helpers keep their fn_ names: fn_82230110 constructs from a C string,
// fn_8223DFF0 appends (ptr, count), fn_82336760 is operator+(string &&, string &&), fn_82240378
// moves into the result and fn_82230300 is _Tidy.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct String_823A1398 {
    int data[7];
} String_823A1398;

typedef struct Motion_823A1398 {
    char pad0[0x20];
    float scale;   /* 0x20 */
} Motion_823A1398;

extern float lbl_831D2BF0[];
extern const char lbl_821AC4B4[];   /* "_" */
extern const char lbl_821ADAE0[];   /* "left" */
extern const char lbl_821ADAE8[];   /* "right" */

String_823A1398 *fn_82230110(String_823A1398 *self, const char *s);
String_823A1398 *fn_8223DFF0(String_823A1398 *self, const char *s, int count);
String_823A1398 *fn_82336760(String_823A1398 *left, String_823A1398 *right);
String_823A1398 *fn_82240378(String_823A1398 *self, String_823A1398 *right);
void fn_82230300(String_823A1398 *self, int built, int newsize);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

String_823A1398 *fn_823A1398(String_823A1398 *result, const Motion_823A1398 *self, __vector4 v, __vector4 w)
{
    String_823A1398 side, force, sign;
    __vector4 t;
    float x;

    t = w;
    if (t.vector4_f32[2] > 0.0f) {
        fn_82230110(&sign, "+z");
    } else {
        fn_82230110(&sign, "-z");
    }
    t = Length3(w);
    if (t.vector4_f32[0] > lbl_831D2BF0[0]) {
        fn_82230110(&force, "hard");
    } else {
        fn_82230110(&force, "medium");
    }
    t = v;
    x = t.vector4_f32[0] / self->scale * 2.0f;
    if (x > lbl_831D2BF0[1]) {
        fn_82230110(&side, lbl_821ADAE0);
    } else if (x < -lbl_831D2BF0[1]) {
        fn_82230110(&side, lbl_821ADAE8);
    } else {
        fn_82230110(&side, "centre");
    }
    fn_82240378(result, fn_82336760(fn_8223DFF0(fn_82336760(fn_8223DFF0(&side, lbl_821AC4B4, 1), &force),
                                                lbl_821AC4B4, 1), &sign));
    fn_82230300(&side, 1, 0);
    fn_82230300(&force, 1, 0);
    fn_82230300(&sign, 1, 0);
    return result;
}
