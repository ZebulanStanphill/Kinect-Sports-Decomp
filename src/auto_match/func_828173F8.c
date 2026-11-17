float fn_828173F8(float position, float start, float firstControl, float secondControl, float end)
{
    double remaining = 1.0 - position;
    double first = start * remaining * remaining * remaining;
    double second = (double)position * firstControl * remaining * remaining * 3.0;
    double third = secondControl * (double)position * position * remaining * 3.0;
    float last = position * position * position * end;
    return (float)(first + second + third + last);
}
