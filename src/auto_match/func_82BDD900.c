extern double lbl_820E8840;
extern int lbl_83224480;
extern float lbl_83223F80[320];
extern double sin(double);
extern void fn_82BE1218(void);
extern void fn_82BE0810(void);

void fn_82BDD900(void)
{
    float *entry = lbl_83223F80;
    int index = 0;
    double scale;
    lbl_83224480 = 1;
    scale = 0.004908738521234052;
    do {
        *entry++ = (float)sin((float)(((double)index + 0.5) * scale));
        index++;
    } while ((int)entry < (int)(lbl_83223F80 + 320));
    fn_82BE1218();
    fn_82BE0810();
}
