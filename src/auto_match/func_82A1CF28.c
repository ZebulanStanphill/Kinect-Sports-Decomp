extern unsigned int XexCheckExecutablePrivilege(unsigned int privilege);
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

unsigned int fn_82A1CF28(void)
{
    unsigned int result = 0;
    if (XexCheckExecutablePrivilege(0xb) == 0) {
        KeEnterCriticalRegion();
        RtlEnterCriticalSection(lbl_8315D230);
        lbl_832192F8[0] = 1;
        KeSetEvent(lbl_8315D24C, 1, 0);
        KeWaitForSingleObject(lbl_8315D25C, 3, 1, 0, 0);
        KeResetEvent(lbl_8315D25C);
        result = lbl_832192F8[4];
        RtlLeaveCriticalSection(lbl_8315D230);
        KeLeaveCriticalRegion();
    }
    return result;
}
