extern int XamAlloc(unsigned int, unsigned int, void **);
extern void XamFree(void *);
extern int fn_82CE2AE0(void *, void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int);
extern int fn_82CE3410(void *);
extern char lbl_8323A8F0[];

int fn_82CE2100(void *buffer, unsigned int size, unsigned int a, unsigned int flags, unsigned int b,
                unsigned int c, unsigned int d, unsigned int *out)
{
    void *allocation = 0;
    void *work;
    int status;
    unsigned int mode = (~flags >> 2) & 1;
    if (size < 0x440) {
        if (buffer != 0) {
            status = 0x8007007a;
            goto done;
        }
        status = XamAlloc(0, 0x440, &allocation);
        if (status < 0) {
            goto cleanup;
        }
        work = allocation;
    } else {
        work = buffer;
    }
    status = fn_82CE2AE0(work, lbl_8323A8F0, a, b, c, d, *out, mode);
    if (status >= 0) {
        status = fn_82CE3410(work);
        if (status >= 0) {
            *out = *(unsigned int *)((char *)work + 0x14);
        }
    }
cleanup:
    if (allocation != 0) {
        XamFree(allocation);
    }
done:
    return status;
}
