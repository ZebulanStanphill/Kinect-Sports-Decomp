/* hkpLinearParametricCurve: only the members this function reads. */
typedef struct Curve_82D9F750 {
    char unknown0[0x24];
    int m_pointsSize;     /* 0x24: m_points.m_size */
    int m_pointsCapacity; /* 0x28 */
    float *m_distance;    /* 0x2c: m_distance.m_data */
} Curve_82D9F750;

extern int fn_82CECDD8(float value);

/* Distance along the curve at a parametric position: the segment's two ends are interpolated. */
float fn_82D9F750(Curve_82D9F750 *self, float position)
{
    int index = fn_82CECDD8(position);
    float delta;

    if (index >= self->m_pointsSize - 1) {
        index = self->m_pointsSize - 1;
        delta = self->m_distance[index] - self->m_distance[index - 1];
    } else {
        if (index < 0) {
            index = 0;
        }
        delta = self->m_distance[index + 1] - self->m_distance[index];
    }
    return (position - (float)index) * delta + self->m_distance[index];
}
