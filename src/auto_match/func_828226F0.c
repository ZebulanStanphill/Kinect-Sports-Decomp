extern char *strncpy(char *dst, const char *src, unsigned int count);

extern char lbl_8320A650[];

void fn_828226F0(char *buf, int size)
{
    buf[size - 1] = 0;
    if (lbl_8320A650[0] != 0)
        strncpy(buf, lbl_8320A650, size - 1);
    else
        buf[0] = 0;
}
