extern float lbl_8201543C;
extern float fn_8287C138(float *angle);
extern float fn_8287C0A8(float from, float to);
extern float fn_82809CB0(float x);
extern void fn_8287C010(float *value);

void fn_82879FB0(float *angle, float target, float *velocity, float stiffness, float damping, float weight,
                 float threshold)
{
    float step;
    float offset;
    float move;
    unsigned char arrived;

    fn_8287C138(angle);
    fn_8287C138(&target);
    if (weight == 0.0f) {
        *angle = target;
        *velocity = 0.0f;
        return;
    }
    step = weight < 0.0f ? 0.0f : (weight > 1.0f ? 1.0f : weight);
    offset = fn_8287C0A8(*angle, target);
    *velocity = step * ((offset * stiffness - *velocity) * damping) + *velocity;
    move = *velocity * step;
    arrived = 0;
    if (fn_82809CB0(*velocity) < threshold) {
        if ((offset > 0.0f) != (move > 0.0f)) {
            arrived = fn_82809CB0(move) > lbl_8201543C - fn_82809CB0(offset);
        } else {
            arrived = fn_82809CB0(move) > fn_82809CB0(offset);
        }
    }
    if (arrived) {
        *angle = target;
        *velocity = 0.0f;
    } else {
        *angle = *velocity * step + *angle;
    }
    fn_8287C010(angle);
    fn_8287C010(velocity);
    fn_8287C138(angle);
}
