void fn_8285AFA0(float *amin, float *amax, float *bmin, float *bmax, float *omin, float *omax)
{
    omin[0] = amin[0] < bmin[0] ? amin[0] : bmin[0];
    omin[1] = amin[1] < bmin[1] ? amin[1] : bmin[1];
    omax[0] = amax[0] > bmax[0] ? amax[0] : bmax[0];
    omax[1] = amax[1] > bmax[1] ? amax[1] : bmax[1];
}
