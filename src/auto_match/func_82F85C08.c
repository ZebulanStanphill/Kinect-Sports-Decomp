int fn_82F85C08(unsigned short *out, const char *src, unsigned int size)
{
    if (src == 0 || size == 0)
        return 0;
    if (*src == 0) {
        if (out != 0)
            *out = 0;
        return 0;
    }
    if (out != 0)
        *out = (unsigned char)*src;
    return 1;
}
