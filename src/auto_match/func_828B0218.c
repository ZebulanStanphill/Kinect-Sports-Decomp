typedef struct Info_828B0218 {
    char pad[0x26];
    unsigned char done;     /* 0x26 */
} Info_828B0218;

extern void fn_828B00F8(void *p, int v);

void fn_828B0218(void *p, Info_828B0218 *info)
{
    if (info->done == 0) {
        fn_828B00F8(p, 1);
    }
}
