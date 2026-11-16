#include <string.h>
extern unsigned char lbl_8322B2B8[];
extern unsigned char *lbl_8317559C;
extern char *lbl_8322B4EC;
extern unsigned int fn_82BFA208(void *self, unsigned int size, int mode);
extern void fn_82BFA478(void);
extern int fn_82F66368(char *out, unsigned int capacity, const char *text, unsigned int count);

int fn_82BF3B68(void)
{
    char first[0x104];
    char second[0x104];
    unsigned int status;
    memset(lbl_8322B2B8, 0, 0x230);
    status = fn_82BFA208(lbl_8317559C, 0x230, 0);
    if (status != 0) {
        if (status == 0x8009) {
            goto complete;
        }
        return 0;
    }
    do {
        unsigned int count;
        if (status == 0x800a) {
            goto complete;
        }
        count = *(unsigned int *)(lbl_8317559C + 0x18);
        if (count >= 0x103) {
            count = 0x103;
        }
        fn_82F66368(first, 0x104, lbl_8322B4EC, count);
        {
            int available = *(int *)(lbl_8317559C + 0x1c);
            if ((unsigned int)available < 0x103) {
                count = available;
            } else {
                count = 0x103;
            }
        }
        fn_82F66368(second, 0x104, lbl_8322B4EC + *(unsigned int *)(lbl_8317559C + 0x18), count);
        memset(lbl_8322B2B8, 0, 0x230);
        status = fn_82BFA208(lbl_8317559C, 0x230, 3);
    } while (status != 0x8009);
complete:
    fn_82BFA478();
    return 1;
}
