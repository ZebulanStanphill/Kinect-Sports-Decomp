extern int *_errno(void);

int fn_82F62DA8(char *out, unsigned short wc)
{
    if (wc > 0xff) {
        *_errno() = 42; /* EILSEQ */
        return -1;
    }
    *out = (char)wc;
    return 1;
}
