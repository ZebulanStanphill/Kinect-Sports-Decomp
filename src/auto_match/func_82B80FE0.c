void fn_82B80FE0(double *u, double *v, unsigned int flags)
{
    if (flags & 1) {
        if (*u < 0.0)
            *u = 0.0;
        else if (*u > 1.0)
            *u = 1.0;
        if (*v < 0.0)
            *v = 0.0;
        else if (*v > 1.0)
            *v = 1.0;
    }
    if (flags & 2) {
        double a = *u;
        if (a < 0.0) {
            double b = *v;
            if (b < 0.0) {
                *u = -b;
                *v = -a;
            } else {
                *u = 0.0;
                if (-a > b)
                    *v = -a;
            }
        }
    }
    if (flags & 4) {
        double t = *u;
        *u = -*v;
        *v = -t;
    }
}
