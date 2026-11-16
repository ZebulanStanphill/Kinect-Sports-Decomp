float fn_828173B8(float position, float start, float control, float end)
{
    double remaining = 1.0 - position;
    double middle = (double)position * control * remaining;
    double first = start * remaining * remaining;
    float last = position * position * end;
    return (float)(middle * 2.0 + first + last);
}
