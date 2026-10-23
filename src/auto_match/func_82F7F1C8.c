typedef struct {
    int osfhnd;
    char osfile;
    char pipech;
    int lockinitflag;
    char lock[0x1c];
    char textmode : 7;
    char unicode : 1;
    char pipech2[2];
    __int64 startpos;
    int utf8translations;
    char dbcsBuffer;
    int dbcsBufferUsed;
} ioinfo;

extern void *fn_82F6E1C8(unsigned int num, unsigned int size);
extern int lbl_8329F60C;
extern ioinfo *lbl_8329F620[];

int fn_82F7F1C8(void)
{
    int fh;
    ioinfo *pio;

    if ((pio = (ioinfo *)fn_82F6E1C8(0x20, sizeof(ioinfo))) == 0)
        return -1;

    lbl_8329F620[0] = pio;
    lbl_8329F60C = 0x20;

    for (; pio < lbl_8329F620[0] + 0x20; pio++) {
        pio->osfile = 0;
        pio->osfhnd = -1;
        pio->pipech = 10;
        pio->lockinitflag = 0;
        pio->textmode = 0;
        pio->unicode = 0;
        pio->pipech2[0] = 10;
        pio->pipech2[1] = 10;
        pio->dbcsBufferUsed = 0;
        pio->dbcsBuffer = '\0';
    }

    for (fh = 0; fh < 3; fh++) {
        pio = lbl_8329F620[0] + fh;
        pio->osfile = (char)0xc1;
        pio->osfhnd = -2;
    }
    return 0;
}
