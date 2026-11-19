/* CRT: switches a low-level file handle between text (0x4000) and binary (0x8000) mode and returns
   the previous mode (the setmode worker without locking or validation). */
typedef struct ioinfo {
    int osfhnd;  /* 0x00 */
    char osfile; /* 0x04 */
    char pad5[0x23];
    unsigned char textmode : 7; /* 0x28 */
    unsigned char unicode : 1;
    char pad29[0x1f];
} ioinfo;

extern ioinfo *lbl_8329F620[]; /* __pioinfo */

#define FTEXT 0x80

#define _pioinfo(i) (&lbl_8329F620[(i) >> 5][(i) & 31])

int fn_82F88588(int fh, int mode)
{
    int oldmode;

    oldmode = _pioinfo(fh)->osfile & FTEXT;
    switch (mode) {
    case 0x4000:
        _pioinfo(fh)->osfile |= FTEXT;
        _pioinfo(fh)->textmode = 0;
        break;
    case 0x8000:
        _pioinfo(fh)->osfile &= ~FTEXT;
        break;
    }
    if (oldmode == 0)
        return 0x8000;
    return 0x4000;
}
