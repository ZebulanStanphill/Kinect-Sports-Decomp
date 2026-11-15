extern float lbl_83264AA8[256];
double sin(double);

void fn_83025478(void)
{
    int i;
    for (i = 0; i < 256; i++) {
        double value = sin((double)i * 0.012271846644580364);
        lbl_83264AA8[i] = (float)(value * value);
    }
}
