typedef struct Curve_8302A610 {
    int pad0;
    float *table;
    int pad8, padc;
    float base;
    int pad14;
    float scale;
} Curve_8302A610;

float fn_8302A610(Curve_8302A610 *c, float x)
{
    unsigned idx = (unsigned)((x - c->base) * c->scale);
    return c->table[idx];
}
