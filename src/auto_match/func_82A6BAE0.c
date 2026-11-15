extern double fn_82F655D8(double, double);
extern float lbl_820A8648[];

float fn_82A6BAE0(int index)
{
    if (index >= 0 && index < 0xc0) {
        return lbl_820A8648[index];
    }
    return (float)fn_82F655D8(10.0, (float)index * 0.05f);
}
