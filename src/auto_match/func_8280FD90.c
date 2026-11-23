extern float fn_82809CB0(float x);

void fn_8280FD90(float x, float y, float z, float *ax, float *ay, float *az)
{
    const float pi = 3.14159265358979323846f;
    float direct = (fn_82809CB0(x - *ax) + fn_82809CB0(z - *az)) + fn_82809CB0(y - *ay);
    float plus = (fn_82809CB0(x - (*ax + pi)) + fn_82809CB0(y - (pi - *ay))) + fn_82809CB0(z - (*az + pi));
    float minus = (fn_82809CB0(x - (*ax - pi)) + fn_82809CB0(y - (pi - *ay))) + fn_82809CB0(z - (*az - pi));

    if (plus < direct && plus < minus) {
        *ax = *ax + pi;
        *ay = pi - *ay;
        *az = *az + pi;
    } else if (minus < direct) {
        *ax = *ax - pi;
        *ay = pi - *ay;
        *az = *az - pi;
    }
}
