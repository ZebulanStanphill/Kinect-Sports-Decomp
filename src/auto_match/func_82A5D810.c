extern char lbl_8315F6E0[];
extern char lbl_8315F6F0[];
extern void *lbl_8321A2E8[8];
extern int lbl_8321A308;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void ExRegisterTitleTerminateNotification(void *reg, int create);
extern void fn_82A5D4A0(void *entry);

void fn_82A5D810(void)
{
    unsigned int i;

    RtlEnterCriticalSection(lbl_8315F6F0);
    ExRegisterTitleTerminateNotification(lbl_8315F6E0, 0);
    for (i = 0; i < 8; i++) {
        if (lbl_8321A2E8[i] != 0) {
            fn_82A5D4A0(lbl_8321A2E8[i]);
            lbl_8321A308--;
            lbl_8321A2E8[i] = 0;
        }
    }
    RtlLeaveCriticalSection(lbl_8315F6F0);
}
