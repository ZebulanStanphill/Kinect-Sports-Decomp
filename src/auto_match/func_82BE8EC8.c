typedef struct XNADDR_82BE8EC8 {
    unsigned int ina;
    unsigned int inaOnline;
    unsigned short wPortOnline;
    unsigned char abEnet[6];
    unsigned char abOnline[20];
} XNADDR_82BE8EC8;

extern long fn_82CE07D8(XNADDR_82BE8EC8 *addr);
extern int fn_82F64020(char *buf, unsigned n, const char *fmt, ...);

int fn_82BE8EC8(void *self, char *buf, int size)
{
    XNADDR_82BE8EC8 addr;

    if (buf != 0 && size >= 0x12 && fn_82CE07D8(&addr) >= 0) {
        fn_82F64020(buf, size, "%02X:%02X:%02X:%02X:%02X:%02X",
                    addr.abEnet[0], addr.abEnet[1], addr.abEnet[2],
                    addr.abEnet[3], addr.abEnet[4], addr.abEnet[5]);
        return 1;
    }
    return 0;
}
