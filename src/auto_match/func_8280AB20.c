extern double __fctid(double);
extern double __fcfid(double);

/* wrap an angle to one turn: fractional part of x / (2*pi), times 2*pi */
float fn_8280AB20(float x)
{
    double turns = (float)(x * 0.15915494f);
    return (float)((turns - __fcfid(__fctid(turns))) * (double)6.2831855f);
}
