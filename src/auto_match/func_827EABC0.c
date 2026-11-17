extern double __fsel(double test, double positive, double negative);
extern const double lbl_82005710;

int fn_827EABC0(float *plane, float *minimum, float *maximum)
{
    double minY = minimum[1];
    double maxY = maximum[1];
    double nearY = __fsel(plane[1], minY, maxY);
    double minX = minimum[0];
    double maxX = maximum[0];
    double nearX = __fsel(plane[0], minX, maxX);
    double z = plane[2];
    double minZ = minimum[2];
    double maxZ = maximum[2];
    double nearZ = __fsel(z, minZ, maxZ);
    double distance = plane[3];
    if (nearZ * z + nearX * plane[0] + nearY * plane[1] - distance > lbl_82005710) {
        return 3;
    }
    if (__fsel(z, maxZ, minZ) * z + __fsel(plane[0], maxX, minX) * plane[0] +
            __fsel(plane[1], maxY, minY) * plane[1] - distance >
        lbl_82005710) {
        return 1;
    }
    return 0;
}
