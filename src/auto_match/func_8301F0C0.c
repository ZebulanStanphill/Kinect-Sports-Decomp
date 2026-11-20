typedef struct Curve_8301F0C0 {
    char pad00[0x10];
    float x0; /* 0x10 */
    float x1; /* 0x14 */
} Curve_8301F0C0;

typedef struct Source_8301F0C0 {
    int unknown0;     /* 0x00 */
    int unknown4;     /* 0x04 */
    unsigned int key; /* 0x08 */
    char pad0c[0x18 - 0x0c];
    float scale; /* 0x18 */
    char pad1c[0x48 - 0x1c];
    Curve_8301F0C0 *curve; /* 0x48 */
} Source_8301F0C0;

typedef struct Voice_8301F0C0 {
    int unknown0;           /* 0x00 */
    Source_8301F0C0 source; /* 0x04 */
} Voice_8301F0C0;

extern char *lbl_832642E0;
extern Curve_8301F0C0 *fn_82FAB9C0(char *table, unsigned int key);
extern float fn_8301E1F8(float *a, float *b);
extern float fn_8301E260(float x0, float y0, float x1, float y1, float x);
extern double fn_82F65E18(double x);

void fn_8301F0C0(Voice_8301F0C0 *self, float *position, float *direction, float distance, float *minimum,
                 float *total)
{
    Source_8301F0C0 *source = &self->source;
    Curve_8301F0C0 *curve;
    float ratio;
    float value;

    if (source->curve == 0) {
        source->curve = fn_82FAB9C0(lbl_832642E0 + 0xfe0, source->key);
    }
    curve = source->curve;
    if (distance > 0.0f) {
        ratio = fn_8301E1F8(direction, position + 3) / distance;
    } else {
        ratio = 1.0f;
    }
    ratio = ratio - 1.0f >= 0.0f ? 1.0f : ratio;
    ratio = ratio - -1.0f >= 0.0f ? ratio : -1.0f;
    value = fn_8301E260(curve->x0, 0.0f, curve->x1, 1.0f, (float)fn_82F65E18(ratio));
    *minimum = *minimum - value >= 0.0f ? value : *minimum;
    *total = self->source.scale * value + *total;
}
