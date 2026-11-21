extern int sprintf(char *buffer, const char *format, ...);

/* Formats value as sign, integer part and nine fraction digits ("+12.500000000"). */
void fn_82BD2990(float value, char *out)
{
    char sign;
    int whole;
    int digit;
    float fraction;
    char digits[10];
    int i;

    if (value >= 0.0f) {
        sign = '+';
    } else {
        sign = '-';
        value = -value;
    }
    whole = (int)value;
    fraction = value - (float)whole;
    digit = (int)fraction;
    for (i = 0; i < 9; i++) {
        fraction = (fraction - (float)digit) * 10.0f;
        digit = (int)fraction;
        sprintf(digits + i, "%d", digit);
    }
    digits[9] = 0;
    sprintf(out, "%c%d.%s", sign, whole, digits);
}
