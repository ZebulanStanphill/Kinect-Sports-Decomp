typedef struct FormatInfo_828F0248 {
    const char *name;    /* 0x00 */
    unsigned int format; /* 0x04 */
    unsigned int flags;  /* 0x08 */
} FormatInfo_828F0248;

extern const FormatInfo_828F0248 lbl_82027790[0x31];

int fn_828F0248(unsigned int format, unsigned int flags, FormatInfo_828F0248 *info)
{
    unsigned int i;

    i = 0x31;
    while (i-- > 0) {
        if (lbl_82027790[i].format == format && (lbl_82027790[i].flags & flags) == flags) {
            if (info != 0) {
                *info = lbl_82027790[i];
            }
            return 0;
        }
    }
    return 0x80004005;
}
