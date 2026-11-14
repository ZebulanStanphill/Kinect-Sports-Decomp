typedef struct Variant_829803A8 {
    unsigned int type;
    int pad4;
    union {
        int b;
        int i;
        unsigned int u;
        double d;
    } value;
} Variant_829803A8;

extern const double lbl_82005710;

int fn_829803A8(double value, Variant_829803A8 *v)
{
    switch (v->type) {
    case 3:
        v->value.d = value;
        break;
    case 2:
        v->value.u = (unsigned int)(value >= 0.0 ? value + 1e-6 : value - 1e-6);
        break;
    case 1:
        v->value.i = (int)(value >= 0.0 ? value + 1e-6 : value - 1e-6);
        break;
    case 0:
        v->value.b = value != lbl_82005710;
        break;
    default:
        return 0x80004005;
    }
    return 0;
}
