extern float lbl_8213855C;
extern float lbl_831819C0;
extern float lbl_831819C4;

void fn_82D40808(int value)
{
    lbl_831819C0 = ((float)(value / 8) - 0.1f) * lbl_8213855C;
    lbl_831819C4 = 1.0f / lbl_831819C0;
}
