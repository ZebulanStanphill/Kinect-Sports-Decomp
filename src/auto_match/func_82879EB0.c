extern void fn_8287C058(float *value);
extern void fn_8287C078(float *value);
extern void fn_8287C010(float *value);
extern float fn_82809CB0(float value);

static const float one = 1.0f;

void fn_82879EB0(float *position, float target, float *velocity, float stiffness, float damping, float weight,
                 float threshold)
{
    float step;
    float offset;
    float sign;

    if (weight == 0.0f) {
        *position = target;
        *velocity = 0.0f;
        return;
    }
    step = weight < 0.0f ? 0.0f : (weight > one ? one : weight);
    offset = target - *position;
    *velocity = step * ((offset * stiffness - *velocity) * damping) + *velocity;
    fn_8287C058(velocity);
    fn_8287C078(velocity);
    fn_8287C010(velocity);
    if (fn_82809CB0(*velocity) <= threshold) {
        sign = offset >= 0.0f ? one : -1.0f;
        if ((target - (*velocity * step + *position) >= 0.0f ? one : -1.0f) != sign) {
            *position = target;
            *velocity = 0.0f;
            return;
        }
    }
    *position = *velocity * step + *position;
    fn_8287C010(position);
}
