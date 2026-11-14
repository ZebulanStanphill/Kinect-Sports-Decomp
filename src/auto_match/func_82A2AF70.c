extern int NtWaitForSingleObjectEx(void *handle, char waitMode, unsigned char alertable, __int64 *timeout);
extern __int64 *fn_82A36058(__int64 *out, unsigned int milliseconds);
extern void fn_82A2B760(int status);

int fn_82A2AF70(void *handle, unsigned int milliseconds, int alertable)
{
    __int64 time;
    __int64 *timeout;
    int status;

    timeout = fn_82A36058(&time, milliseconds);
    do {
        status = NtWaitForSingleObjectEx(handle, 1, (unsigned char)alertable, timeout);
        if (status < 0) {
            fn_82A2B760(status);
            return -1;
        }
    } while (alertable != 0 && status == 0x101);
    return status;
}
