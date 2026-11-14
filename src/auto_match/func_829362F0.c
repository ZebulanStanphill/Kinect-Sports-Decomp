int fn_829362F0(const char *str, unsigned int max, unsigned int *length)
{
    int hr = 0;
    unsigned int original = max;

    while (max != 0 && *str != 0) {
        str++;
        max--;
    }
    if (max == 0)
        hr = 0x80070057;
    else if (length != 0)
        *length = original - max;
    return hr;
}
