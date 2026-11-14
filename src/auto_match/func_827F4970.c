typedef struct {
    int pad[11];
    float value;
    float threshold;
} Range_827F4970;

float fn_827F4970(Range_827F4970 *self)
{
    float diff = self->value - self->threshold;
    return (float)(diff >= 0.0f) * diff;
}
