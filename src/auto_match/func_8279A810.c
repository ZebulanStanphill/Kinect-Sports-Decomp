extern double lbl_82005710;

int fn_8279A810(int value)
{
    double number = (double)value;
    if (number > lbl_82005710) {
        return (int)(number + 0.5);
    }
    return (int)(number - 0.5);
}
