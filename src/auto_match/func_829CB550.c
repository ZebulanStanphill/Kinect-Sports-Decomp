long _InterlockedExchange(long volatile *target, long value);
extern int XamXStudioRequest(int code, void *req);
extern void fn_829C9120(void);
extern long lbl_8315C3E8;

void fn_829CB550(void)
{
    int request = 0;
    if (XamXStudioRequest(1, &request) >= 0) {
        _InterlockedExchange(&lbl_8315C3E8, (long)fn_829C9120);
    }
}
