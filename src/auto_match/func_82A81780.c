void fn_82A81780(int *values, int count, short scale)
{
    int i;
    for (i = 0; i < count; i++) {
        values[i] = values[i] * scale;
    }
}
