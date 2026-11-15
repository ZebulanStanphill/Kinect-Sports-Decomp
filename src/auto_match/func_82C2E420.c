extern double fn_82F655D8(double, double);
extern float lbl_820F96C8[];

float fn_82C2E420(int index)
{
    if (index >= 0 && index < 0xc0) {
        return lbl_820F96C8[index];
    }
    return (float)fn_82F655D8(10.0, (float)index * 0.05f);
}
