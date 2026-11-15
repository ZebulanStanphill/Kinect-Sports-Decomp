typedef struct Vector_8281EDE0 {
    float x;
    float y;
    float z;
} Vector_8281EDE0;

typedef struct Bounds_8281EDE0 {
    Vector_8281EDE0 minimum;
    Vector_8281EDE0 maximum;
} Bounds_8281EDE0;

extern const Vector_8281EDE0 lbl_821CA1A0;

Bounds_8281EDE0 *fn_8281EDE0(Bounds_8281EDE0 *out)
{
    Vector_8281EDE0 maximum;
    maximum.x = 1.0f;
    maximum.y = 1.0f;
    maximum.z = 1.0f;
    out->minimum = lbl_821CA1A0;
    out->maximum = maximum;
    return out;
}
