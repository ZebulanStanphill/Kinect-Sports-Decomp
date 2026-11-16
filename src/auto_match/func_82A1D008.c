extern void KeEnterCriticalRegion(void);
extern void KeLeaveCriticalRegion(void);
extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern int KeSetEvent(void *event, int increment, unsigned char wait);
extern int KeWaitForSingleObject(void *object, int reason, int mode, unsigned char alertable,
                                 const __int64 *timeout);
extern int KeResetEvent(void *event);
extern char lbl_8315D230[];
extern char lbl_8315D24C[];
extern char lbl_8315D25C[];
extern unsigned int lbl_832192F8[];

extern int lbl_832192E0[];
extern char lbl_8315D26C[];
extern void ExRegisterTitleTerminateNotification(void *notification, unsigned char enable);
extern void fn_82A1CD98(void);

void fn_82A1D008(void)
{
    if (lbl_832192E0[2] != 0) {
        KeEnterCriticalRegion();
        if (lbl_832192E0[0] != 0) {
            lbl_832192E0[0] = 0;
            ExRegisterTitleTerminateNotification(lbl_8315D26C, 0);
        }
        RtlEnterCriticalSection(lbl_8315D230);
        lbl_832192F8[0] = 2;
        KeSetEvent(lbl_8315D24C, 1, 0);
        KeWaitForSingleObject(lbl_8315D25C, 3, 1, 0, 0);
        KeResetEvent(lbl_8315D25C);
        RtlLeaveCriticalSection(lbl_8315D230);
        KeLeaveCriticalRegion();
    } else if (lbl_832192E0[1] != 0) {
        fn_82A1CD98();
    }
    lbl_832192E0[1] = 0;
}
