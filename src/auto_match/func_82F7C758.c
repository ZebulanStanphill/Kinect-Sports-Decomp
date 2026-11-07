typedef struct {
    void *osfhnd;          /* 0x00 */
    unsigned char osfile;  /* 0x04 */
    char pipech;           /* 0x05 */
    char pad06[0x22];      /* 0x06 */
    char textmode : 7;     /* 0x28 */
    char unicode : 1;
    char pad29[0x1f];      /* 0x29 */
} Ioinfo_82F7C758;

extern Ioinfo_82F7C758 *lbl_8329F620[];

extern int *_errno(void);
extern unsigned long *fn_82F68278(void);
extern void _invalid_parameter_noinfo(void);
extern long fn_82F855A8(int fh, long off, int origin);
extern int fn_82A29FE0(void *h, const void *buf, unsigned int n,
                       unsigned long *written, void *ov);
extern unsigned long fn_82A1F470(void);
extern void fn_82F682B0(unsigned long err);

#define PIO_82F7C758(fh) (lbl_8329F620[(fh) >> 5] + ((fh) & 31))

#define VALIDATE_82F7C758(expr)                 \
    {                                           \
        int _Expr_val = !!(expr);               \
        if (!(_Expr_val)) {                     \
            *fn_82F68278() = 0;                 \
            *_errno() = 0x16;                   \
            _invalid_parameter_noinfo();        \
            return -1;                          \
        }                                       \
    }

int fn_82F7C758(int fh, const void *buf, unsigned int cnt)
{
    int lfcount;
    int charcount;
    const char *p;
    char *q;
    char ch;
    char tm;
    unsigned long dosretval;
    unsigned long written;
    char lfbuf[0x1400];

    charcount = 0;
    lfcount = 0;
    if (cnt == 0)
        return 0;
    VALIDATE_82F7C758(buf != 0);
    tm = PIO_82F7C758(fh)->textmode;
    if (tm == 2 || tm == 1) {
        VALIDATE_82F7C758((cnt & 1) == 0);
    }

    if (PIO_82F7C758(fh)->osfile & 0x20)
        fn_82F855A8(fh, 0, 2);

    if (PIO_82F7C758(fh)->osfile & 0x80) {
        dosretval = 0;
        p = (const char *)buf;
        while ((unsigned int)(p - (const char *)buf) < cnt) {
            q = lfbuf;
            while ((unsigned int)(q - lfbuf) < sizeof(lfbuf) - 1 &&
                   (unsigned int)(p - (const char *)buf) < cnt) {
                ch = *p++;
                if (ch == '\n') {
                    ++lfcount;
                    *q++ = '\r';
                }
                *q++ = ch;
            }
            if (fn_82A29FE0(PIO_82F7C758(fh)->osfhnd, lfbuf, (int)(q - lfbuf),
                            &written, 0)) {
                charcount += written;
                if ((int)written < (int)(q - lfbuf))
                    break;
            } else {
                dosretval = fn_82A1F470();
                break;
            }
        }
    } else {
        if (fn_82A29FE0(PIO_82F7C758(fh)->osfhnd, buf, cnt, &written, 0)) {
            charcount = written;
            dosretval = 0;
        } else {
            dosretval = fn_82A1F470();
        }
    }

    if (charcount == 0) {
        if (dosretval != 0) {
            if (dosretval == 5) {
                *_errno() = 9;
                *fn_82F68278() = dosretval;
            } else {
                fn_82F682B0(dosretval);
            }
            return -1;
        }
        if ((PIO_82F7C758(fh)->osfile & 0x40) && *(const char *)buf == 0x1a)
            return 0;
        *_errno() = 0x1c;
        *fn_82F68278() = 0;
        return -1;
    }
    return charcount - lfcount;
}
