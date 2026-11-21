void fn_822A02D8(float time, int *minutes, int *seconds, int *fraction)
{
    int whole;
    int mins;

    whole = (int)time;
    *seconds = whole % 60;
    mins = (int)(time * (1.0f / 60.0f));
    *minutes = mins;
    if (mins < 0) {
        mins = 0;
    }
    *fraction = (int)((time - (float)whole) * 60.0f);
    if (mins >= 99) {
        mins = 99;
    }
    *minutes = mins;
}
