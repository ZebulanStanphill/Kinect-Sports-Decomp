extern void fn_828102A8(float *, float *, float);

void fn_83066690(float *out, float x, float y, float z, float scale)
{
    out[0] = x;
    out[1] = y;
    out[2] = z;
    fn_828102A8(out, out + 3, -scale);
}
