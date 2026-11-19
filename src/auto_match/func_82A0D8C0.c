/* Depth image position (x, y in pixels of a 320x240 depth image, z in metres) to skeleton space. */
static __forceinline void DepthToSkeleton(float *out, int x, int y, float depth)
{
    out[2] = depth;
    out[1] = (120.0f - (float)y) * depth * 0.00350103760138154f;
    out[0] = ((float)x - 160.0f) * depth * 0.00350103760138154f;
}

void fn_82A0D8C0(float *out, const float *in)
{
    DepthToSkeleton(out, (int)in[0], (int)in[1], in[2]);
    out[3] = in[3];
}
