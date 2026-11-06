typedef struct Info_82CE1F30 {
    int f0;
    int f4;
    int f8;
    unsigned int size;
} Info_82CE1F30;

extern char lbl_8323A8F0[];
extern int fn_82CE2830(void *table, void *key, Info_82CE1F30 *info);

int fn_82CE1F30(void *key, unsigned int flags, unsigned int size, int extra,
                int *total, unsigned int *bufSize, unsigned int *align)
{
    Info_82CE1F30 info;
    unsigned int n;
    unsigned int s;
    int hdr;
    int hr;

    hr = fn_82CE2830(lbl_8323A8F0, key, &info);
    if (hr >= 0) {
        s = (flags & 8) != 0 ? size : info.size;
        if ((flags & 0x100) != 0) {
            s = ((s + 0x10) & ~0xf) + 0x104;
        }
        n = (s * 0x78 / 100 + 3) & ~3;
        if (bufSize != 0) {
            *bufSize = n;
        }
        if (align != 0) {
            *align = 0x1000;
        }
        if (total != 0) {
            hdr = 0x4c;
            if ((flags & 2) != 0) {
                hdr = 0x50;
            }
            if ((flags & 0x200) != 0) {
                hdr += 4;
            }
            *total = hdr + n + extra + 0x2e20;
        }
    }
    return hr;
}
