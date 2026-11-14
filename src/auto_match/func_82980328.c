typedef struct Value_82980328 {
    unsigned int type;
    int pad;
    union {
        unsigned int u;
        double d;
    } v;
} Value_82980328;

extern const double lbl_82005710;

long fn_82980328(void *ctx, unsigned int *out, Value_82980328 *value, int *extra)
{
    double d;
    switch (value->type) {
    case 0:
        *out = value->v.u != 0;
        break;
    case 1:
        *out = value->v.u;
        break;
    case 2:
        *out = value->v.u;
        break;
    case 3:
        d = value->v.d;
        if (d >= lbl_82005710)
            d += 1e-6;
        else
            d -= 1e-6;
        *out = (unsigned int)d;
        break;
    default:
        return 0x80004005;
    }
    return 0;
}
