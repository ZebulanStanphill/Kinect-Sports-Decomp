double fabs(double x);

/* 1.0e18: beyond this magnitude every double is already integral */
extern const double lbl_82168360;

/* ceil(x) built from fctidz/fcfid and fsel selects */
double fn_82F6B2A8(double x)
{
    double truncated;

    truncated = __fcfid(__fctidz(x));
    truncated = __fsel(truncated - x, truncated, truncated + 1.0);
    truncated = __fsel(lbl_82168360 - fabs(x), truncated, x);
    return __fsel(-fabs(x), x, truncated);
}
