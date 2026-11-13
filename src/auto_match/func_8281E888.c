extern int fn_82F6DFD0(double x); /* _isnan */
extern int fn_82F6DFB0(double x); /* _finite */

int fn_8281E888(double x)
{
    if (fn_82F6DFD0(x)) return 0; return fn_82F6DFB0(x) != 0;
}
