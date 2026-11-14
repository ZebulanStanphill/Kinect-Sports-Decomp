typedef struct Value_8297FBF0 {
    unsigned int type;
    int pad;
    union {
        int i;
        unsigned int u;
        double d;
    } v;
} Value_8297FBF0;

extern const double lbl_82005710;

long fn_8297FBF0(void *ctx, double *out, Value_8297FBF0 *value)
{
    switch (value->type) {
    case 0:
        *out = value->v.i != 0 ? 1.0 : lbl_82005710;
        break;
    case 1:
        *out = value->v.i;
        break;
    case 2:
        *out = value->v.u;
        break;
    case 3:
        *out = value->v.d;
        break;
    default:
        return 0x80004005;
    }
    return 0;
}
