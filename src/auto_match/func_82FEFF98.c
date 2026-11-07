typedef struct {
    unsigned pad : 30;
    unsigned flag : 1;
    unsigned low : 1;
} Bits_82FEFF98;

typedef struct {
    char pad[0x1c];
    Bits_82FEFF98 bits;
} Res_82FEFF98;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FECF60(char *obj);
extern void fn_82FF5750(void *mgr, void *h, char *owner);
extern unsigned int *fn_83000878(void *h);
extern void fn_8301B970(void *mgr, Res_82FEFF98 *res, char *owner);
extern void *lbl_832642F4;
extern void *lbl_832642F8;
extern char lbl_83264558[];

int fn_82FEFF98(char *p, int mode, unsigned char noNotify)
{
    RtlEnterCriticalSection(lbl_83264558);
    if ((*(unsigned char *)(p + 0xd5) & 2) == 0) {
        *(unsigned char *)(p + 0xd5) = *(unsigned char *)(p + 0xd5) | 2;
        if (noNotify == 0) {
            fn_82FECF60(p - 4);
        }
        if (mode == 0 || mode == 2) {
            if (*(void **)(p + 0x54) != 0) {
                fn_82FF5750(lbl_832642F4, *(void **)(p + 0x54), (p - 4) ? p + 8 : 0);
                *(void **)(p + 0x54) = 0;
            }
            if (*(void **)(p + 0x58) != 0) {
                fn_82FF5750(lbl_832642F4, *(void **)(p + 0x58), (p - 4) ? p + 8 : 0);
                *(void **)(p + 0x58) = 0;
            }
            if (*(Res_82FEFF98 **)(p + 0x178) != 0) {
                if ((unsigned char)(*(Res_82FEFF98 **)(p + 0x178))->bits.flag != 0) {
                    unsigned int *q = fn_83000878(*(void **)(p + 0x64));
                    q[1] = 0;
                    q[0] = 0;
                }
                fn_8301B970(lbl_832642F8, *(Res_82FEFF98 **)(p + 0x178), p - 4);
                *(void **)(p + 0x178) = 0;
                *(void **)(p + 0x17c) = 0;
            }
            *(unsigned char *)(p + 0xd5) = (*(unsigned char *)(p + 0xd5) & 0xd7) | 8;
        }
    }
    RtlLeaveCriticalSection(lbl_83264558);
    return 1;
}
