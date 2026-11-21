
int fn_8253FF60(float value)
{
    int whole;

    whole = (int)value;
    if (value >= 0.0f) {
        if (value - (float)whole < 0.5f) {
            return whole;
        }
        return whole + 1;
    }
    if (value - (float)whole > -0.5f) {
        return whole;
    }
    return whole - 1;
}
