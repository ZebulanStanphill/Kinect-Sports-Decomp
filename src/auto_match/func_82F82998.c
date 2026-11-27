typedef struct File_82F82998 {
    char *ptr;  /* 0x00 */
    int count;  /* 0x04 */
    char *base; /* 0x08 */
    int flag;   /* 0x0c */
    int file;   /* 0x10 */
    int charBuffer;
    int bufferSize;
    char *tempName; /* 0x1c */
} File_82F82998;

extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F883D0(int *pfh, const unsigned short *path, int oflag, int shflag, int pmode);
extern int lbl_832636E4;
extern int lbl_83263398;

File_82F82998 *fn_82F82998(const unsigned short *filename, const unsigned short *mode, int shareFlag,
                           File_82F82998 *stream)
{
    int modeFlag;
    int streamFlag = lbl_832636E4;
    int commitSet = 0;
    int scanSet = 0;
    int parsing;
    int handle;

    while (*mode == ' ')
        ++mode;
    switch (*mode) {
    case 'r':
        modeFlag = 0;
        streamFlag |= 1;
        break;
    case 'w':
        modeFlag = 0x301;
        streamFlag |= 2;
        break;
    case 'a':
        modeFlag = 0x109;
        streamFlag |= 2;
        break;
    default:
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0;
    }
    parsing = 1;
    while (*++mode != 0 && parsing) {
        switch (*mode) {
        case ' ':
            break;
        case '+':
            if (modeFlag & 2) {
                parsing = 0;
            } else {
                modeFlag |= 2;
                modeFlag &= ~1;
                streamFlag |= 0x80;
                streamFlag &= ~3;
            }
            break;
        case 'b':
            if (modeFlag & 0xc000) {
                parsing = 0;
            } else {
                modeFlag |= 0x8000;
            }
            break;
        case 't':
            if (modeFlag & 0xc000) {
                parsing = 0;
            } else {
                modeFlag |= 0x4000;
            }
            break;
        case 'c':
            if (commitSet) {
                parsing = 0;
            } else {
                commitSet = 1;
                streamFlag |= 0x4000;
            }
            break;
        case 'n':
            if (commitSet) {
                parsing = 0;
            } else {
                commitSet = 1;
                streamFlag &= ~0x4000;
            }
            break;
        case 'S':
            if (scanSet) {
                parsing = 0;
            } else {
                scanSet = 1;
                modeFlag |= 0x20;
            }
            break;
        case 'R':
            if (scanSet) {
                parsing = 0;
            } else {
                scanSet = 1;
                modeFlag |= 0x10;
            }
            break;
        case 'T':
            if (modeFlag & 0x1000) {
                parsing = 0;
            } else {
                modeFlag |= 0x1000;
            }
            break;
        case 'D':
            if (modeFlag & 0x40) {
                parsing = 0;
            } else {
                modeFlag |= 0x40;
            }
            break;
        case 'N':
            modeFlag |= 0x80;
            break;
        case ',':
            parsing = 0;
            break;
        default:
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0;
        }
    }
    while (*mode == ' ')
        ++mode;
    if (*mode != 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0;
    }
    if (fn_82F883D0(&handle, filename, modeFlag, shareFlag, 0x180) != 0)
        return 0;
    lbl_83263398++;
    stream->flag = streamFlag;
    stream->count = 0;
    stream->ptr = 0;
    stream->base = 0;
    stream->tempName = 0;
    stream->file = handle;
    return stream;
}
