typedef struct Settings_822D15E0 {
    char pad0[0x8];
    int enabled; /* 0x8 */
    char padC[0x16c];
} Settings_822D15E0;

typedef struct Limit_822D15E0 {
    char pad0[0x64];
    float low; /* 0x64 */
    char pad68[0x4];
    float high; /* 0x6c */
} Limit_822D15E0;

typedef struct Model_822D15E0 {
    char pad0[0x13c];
    Limit_822D15E0 *lower; /* 0x13c */
    Limit_822D15E0 *upper; /* 0x140 */
} Model_822D15E0;

typedef struct Body_822D15E0 {
    char pad0[0x24];
    Model_822D15E0 *model; /* 0x24 */
} Body_822D15E0;

typedef struct Range_822D15E0 {
    float from;  /* 0x0 */
    float to;    /* 0x4 */
    float value; /* 0x8 */
} Range_822D15E0;

typedef struct Output_822D15E0 {
    char pad0[0x3c];
    Range_822D15E0 first;  /* 0x3c */
    Range_822D15E0 second; /* 0x48 */
} Output_822D15E0;

typedef struct Actor_822D15E0 {
    char pad0[0x14];
    Body_822D15E0 *body;     /* 0x14 */
    Output_822D15E0 *output; /* 0x18 */
} Actor_822D15E0;

extern Settings_822D15E0 lbl_831CDB38;

static __forceinline void Interpolate(Range_822D15E0 *range, float t)
{
    range->value = t * (range->to - range->from) + range->from;
}

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_822D15E0(Actor_822D15E0 *self, float amount)
{
    Model_822D15E0 *model;
    Output_822D15E0 *output;
    float low;
    float high;
    float first;
    float second;

    if (lbl_831CDB38.enabled != 0) {
        model = self->body->model;
        low = model->lower != 0 ? model->lower->low : 1.0f;
        high = model->upper != 0 ? model->upper->high : 1.0f;
        output = self->output;
        first = Max(amount, low);
        second = Max(amount, high);
        Interpolate(&output->first, first);
        Interpolate(&output->second, second);
    }
}
