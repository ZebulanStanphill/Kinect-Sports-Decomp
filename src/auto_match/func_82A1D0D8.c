typedef struct Tbl_82A1D0D8 {
    int (*f0)(void);
    int (*Start)(void);
    int (*f8)(void);
    int (*fC)(void);
    void (*Stop)(void);
} Tbl_82A1D0D8;

typedef struct Ctx_82A1D0D8 {
    int state;          /* 0x00 */
    int pad4;           /* 0x04 */
    int index;          /* 0x08 */
    int second;         /* 0x0C */
    int result;         /* 0x10 */
    char pad14[0x298 - 0x14];
    Tbl_82A1D0D8 *tbl;  /* 0x298 */
} Ctx_82A1D0D8;

typedef struct Vol_82A1D0D8 {
    int pad0[6];        /* 0x00 */
    int handle;         /* 0x18 */
    int pad1C[9];       /* 0x1C */
    void *base;         /* 0x40 */
    int pad44;          /* 0x44 */
    void *device;       /* 0x48 */
    int pad4C[3];       /* 0x4C */
} Vol_82A1D0D8;

extern int lbl_832192E0[];
extern char lbl_8315D25C[];
extern char lbl_8315D26C[];
extern char lbl_8315D24C[];

extern int fn_82A1C808(int idx, Ctx_82A1D0D8 *ctx, Vol_82A1D0D8 *vol, unsigned int *size, char *path);
extern int fn_82A1CA50(int idx, Ctx_82A1D0D8 *ctx, Vol_82A1D0D8 *vol);
extern int fn_82A1CE88(int second, const char *fmt, int idx);
extern void fn_82A1CD98(void);
extern void ExRegisterTitleTerminateNotification(void *reg, int create);
extern int KeSetEvent(void *evt, int inc, int wait);
extern int KeWaitForSingleObject(void *obj, int reason, int mode, int alertable, void *timeout);
extern int XamTaskShouldExit(void);
extern int IoDismountVolume(void *dev);
extern void ObDereferenceObject(void *obj);
extern int NtFreeVirtualMemory(void **base, unsigned int *size, unsigned int type, int prot);
extern int NtClose(int handle);

int fn_82A1D0D8(Ctx_82A1D0D8 *p)
{
    Vol_82A1D0D8 vol[2];
    unsigned int size[2];
    char path[2][0x40];
    int have2;
    int hr;
    int state;

    have2 = 0;
    if (p->tbl->Start != 0) {
        hr = p->tbl->Start();
        if (hr < 0)
            goto done;
    }
    hr = fn_82A1C808(p->index, p, &vol[0], &size[0], path[0]);
    if (hr >= 0) {
        if (p->second != 0) {
            hr = fn_82A1C808(1, p, &vol[1], &size[1], path[1]);
            if (hr < 0)
                goto cleanup;
            have2 = 1;
        }
        hr = fn_82A1CE88(p->second, "\\Device\\cache%d", p->index);
        if (hr >= 0) {
            lbl_832192E0[0] = 1;
            ExRegisterTitleTerminateNotification(lbl_8315D26C, 1);
            p->result = hr;
            lbl_832192E0[2] = 1;
            KeSetEvent(lbl_8315D25C, 1, 0);
            do {
                KeWaitForSingleObject(lbl_8315D24C, 3, 1, 0, 0);
                state = p->state;
                fn_82A1CA50(p->index, p, &vol[0]);
                if (p->second != 0) {
                    fn_82A1CA50(1, p, &vol[1]);
                }
                if (state == 1) {
                    p->result = hr;
                    KeSetEvent(lbl_8315D25C, 1, 0);
                }
            } while (state != 2 && XamTaskShouldExit() == 0);
            if (lbl_832192E0[0] != 0) {
                lbl_832192E0[0] = 0;
                ExRegisterTitleTerminateNotification(lbl_8315D26C, 0);
            }
            fn_82A1CD98();
        }
cleanup:
        IoDismountVolume(vol[0].device);
        ObDereferenceObject(vol[0].device);
        NtFreeVirtualMemory(&vol[0].base, &size[0], 0x8000, 1);
        NtClose(vol[0].handle);
        if (have2 != 0) {
            IoDismountVolume(vol[1].device);
            ObDereferenceObject(vol[1].device);
            NtFreeVirtualMemory(&vol[1].base, &size[1], 0x8000, 1);
            NtClose(vol[1].handle);
        }
    }
    if (p->tbl->Stop != 0) {
        p->tbl->Stop();
    }
done:
    p->result = hr;
    lbl_832192E0[2] = 0;
    KeSetEvent(lbl_8315D25C, 1, 0);
    return 0;
}
