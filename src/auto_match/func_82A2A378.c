extern int fn_82A35E88(const unsigned short *src, int srcLen, char *dst, int dstLen);
extern int fn_82F64CE0(const unsigned short *s);
extern int RtlUnicodeToMultiByteN(char *dst, unsigned int dstLen, unsigned int *written,
                                  const unsigned short *src, unsigned int srcBytes);
extern unsigned int RtlNtStatusToDosError(int status);
extern void fn_82A2A370(unsigned int err);

int fn_82A2A378(unsigned int codePage, unsigned int flags, const unsigned short *src, int srcLen,
                char *dst, int dstLen, const char *defaultChar, int *usedDefault)
{
    unsigned int err;
    int status;
    int len;

    if (usedDefault != 0) {
        *usedDefault = 0;
    }
    if (codePage == 0xfde9) {
        return fn_82A35E88(src, srcLen, dst, dstLen);
    }
    if (srcLen == -1) {
        len = fn_82F64CE0(src) + 1;
    } else {
        len = srcLen;
    }
    if (dstLen == 0) {
        return len;
    }
    if (len < 0 || dstLen < len) {
        err = 0x7a;
    } else {
        status = RtlUnicodeToMultiByteN(dst, dstLen, 0, src, len * 2);
        if (status >= 0) {
            return len;
        }
        err = RtlNtStatusToDosError(status);
    }
    fn_82A2A370(err);
    return 0;
}
