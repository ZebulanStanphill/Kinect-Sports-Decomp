typedef struct Camera_829C6830 {
    unsigned int words[9];
    unsigned int pending;
    unsigned char rest[0x200 - 0x28];
} Camera_829C6830;

extern Camera_829C6830 lbl_83214DB0;
extern void fn_829C6490(void);
extern void *memset(void *dst, int value, unsigned int size);
extern unsigned int XamNuiCameraTiltSetCallback(void (*callback)(void));

void fn_829C6830(void)
{
    memset(&lbl_83214DB0, 0, sizeof(lbl_83214DB0));
    lbl_83214DB0.pending = 0;
    XamNuiCameraTiltSetCallback(fn_829C6490);
}
