extern int fn_82F640F0(char *dst, unsigned int dstSize, const char *src, unsigned int count);

char *fn_826670F0(char *buf, unsigned int size, char *pos)
{
    unsigned int remaining = size - (pos - buf);
    if (remaining < 0) {
        return 0;
    } else if (remaining == 0) {
        *pos = 0;
    } else {
        int err;
        /* the original stores the count back into its own slot here
           (a self-assignment, as an unused-variable macro writes it) */
        remaining = remaining;
        err = fn_82F640F0(pos, remaining + 1, pos + 1, remaining);
        if (err != 0) {
            return 0;
        }
    }
    return buf;
}
