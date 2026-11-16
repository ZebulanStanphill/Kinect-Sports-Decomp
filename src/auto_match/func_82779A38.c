extern void fn_82779958(void *self, float *first, float *second, float *third);
extern const float lbl_82005CCC;

void fn_82779A38(void *self, int *first, int *second, int *third)
{
    struct {
        float first;
        float second;
        float third;
    } values;

    float scale;
    fn_82779958(self, &values.first, &values.second, &values.third);
    scale = lbl_82005CCC;
    values.second *= scale;
    *first = (int)(values.first * 360.0f);
    *second = (int)values.second;
    *third = (int)(values.third * scale);
}
