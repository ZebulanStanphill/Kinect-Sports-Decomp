typedef struct Source_824B58A8 Source_824B58A8;

typedef struct SourceVtbl_824B58A8 {
    void (*GetRange)(Source_824B58A8 *self, int *first, int *last); /* 0x0 */
} SourceVtbl_824B58A8;

struct Source_824B58A8 {
    SourceVtbl_824B58A8 *vt; /* 0x0 */
};

double fabs(double value);
extern float fn_824B5980(void *self, Source_824B58A8 *source, int index);

float fn_824B58A8(void *self, Source_824B58A8 *source, int count)
{
    int last;
    int first;
    int i;
    float largest;
    float value;
    float delta;
    int index;
    int previous;
    int offset;

    source->vt->GetRange(source, &first, &last);
    largest = 0.0f;
    for (i = 0; i < count; i++) {
        offset = last - i;
        index = first >= offset ? first : offset;
        previous = first >= offset - 1 ? first : offset - 1;
        value = fn_824B5980(self, source, index);
        delta = value - fn_824B5980(self, source, previous);
        if (fabs(delta) > fabs(largest))
            largest = delta;
    }
    return largest;
}
