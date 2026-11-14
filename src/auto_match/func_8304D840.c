/* Checks a big-endian RIFX/WAVE header at *cursor and advances past it. */
int fn_8304D840(unsigned int **cursor, unsigned int *end)
{
    unsigned int *p = *cursor;
    if (p + 3 > end)
        return 7;
    if (p[0] != 0x52494658)
        return 7;
    p += 2;
    *cursor = p;
    if (p[0] != 0x57415645)
        return 7;
    *cursor = p + 1;
    return 1;
}
