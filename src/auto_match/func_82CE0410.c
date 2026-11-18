typedef struct Lock_82CE0410 {
    int reserved00;     /* 0x00 */
    char section[0x1c]; /* 0x04 */
    int reserved20[2];  /* 0x20 */
} Lock_82CE0410;

extern Lock_82CE0410 lbl_83177900;
extern int lbl_8323A8E0;
extern int lbl_8323A8E4;
extern unsigned int XamGetSystemVersion(void);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_82CE0298(unsigned int a, unsigned int b, unsigned int c);
extern unsigned int fn_82CE0340(unsigned int a, unsigned int *state, unsigned int *extra);

unsigned int fn_82CE0410(void)
{
    unsigned int result;
    unsigned int state;
    unsigned int extra;

    if ((XamGetSystemVersion() & 0xffff00) < 0x8a100) {
        RtlEnterCriticalSection(lbl_83177900.section);
        if (lbl_8323A8E0 == 1) {
            result = 0x65b;
        } else {
            result = fn_82CE0340(2, &state, &extra);
            if (result == 0) {
                lbl_8323A8E4 = 0 == state;
                result = fn_82CE0298(2, 0, 1);
                if (result == 0) {
                    lbl_8323A8E0 = 1;
                    goto done;
                }
            }
            lbl_8323A8E0 = 0;
            lbl_8323A8E4 = 0;
        }
    done:
        RtlLeaveCriticalSection(lbl_83177900.section);
    } else {
        result = fn_82CE0298(2, 0, 1);
    }
    return result;
}
