extern int fn_82FA5538(int, unsigned int, int, int, int);
extern unsigned int lbl_831BC770;
extern unsigned int lbl_832643B4[];
extern unsigned int lbl_831BC7FC[];
unsigned __int64 fn_82FEBDE8(void)
{
    unsigned int size;
    if (lbl_831BC770 == -1) {
        size = lbl_832643B4[6];
        if (size <= 0x40) size = 0x1000000;
        lbl_831BC770 = fn_82FA5538(0, size, 0x40, 3, 0x10);
        if (lbl_831BC770 != -1) {
            lbl_831BC7FC[1] = lbl_831BC770;
        } else {
            return 0x34;
        }
    }
    return 1;
}
