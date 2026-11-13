typedef struct XOverlapped_82A1C098 {
    unsigned int internalLow;
    unsigned int internalHigh;
    unsigned int internalContext;
    void *event;
    void *completionRoutine;
    unsigned int completionContext;
    unsigned int extendedError;
} XOverlapped_82A1C098;

extern unsigned int fn_82A1F470(void); /* GetLastError */

#define ERROR_IO_INCOMPLETE 996
#define ERROR_IO_PENDING 997

unsigned int fn_82A1C098(XOverlapped_82A1C098 *ov)
{
    unsigned int r = ERROR_IO_INCOMPLETE;
    if (ov == 0)
        return fn_82A1F470();
    if (ov->internalLow != ERROR_IO_PENDING)
        r = ov->extendedError;
    return r;
}
