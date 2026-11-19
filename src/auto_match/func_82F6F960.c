typedef struct ThreadData_82F6F960 {
    unsigned int threadId;     /* 0x0 */
    unsigned int threadHandle; /* 0x4 */
    int errnoValue;            /* 0x8 */
    char padC[0x14 - 0xc];
    unsigned int randomSeed; /* 0x14 */
    char pad18[0x5c - 0x18];
    void *multibyteInfo; /* 0x5c */
    char pad60[0xc4 - 0x60];
} ThreadData_82F6F960;

extern unsigned int lbl_831BB900; /* TLS slot of the per-thread data */
extern char lbl_8216A9E0[];       /* initial multibyte code page info */
extern void *KeTlsGetValue(unsigned int index);
extern int KeTlsSetValue(unsigned int index, void *value);
extern unsigned int fn_82A1F470(void);
extern void fn_82A2A370(unsigned int error);
extern void *fn_82F6E1C8(unsigned int count, unsigned int size);
extern void free(void *p);
extern unsigned int fn_82A1BB18(void);

/* Returns the calling thread's CRT data, creating it on first use; 0 when that fails. The TLS
   slot holds 1 while the data is being created. The thread's last error is preserved. */
ThreadData_82F6F960 *_getptd_noexit(void)
{
    unsigned int error = fn_82A1F470();
    ThreadData_82F6F960 *data = (ThreadData_82F6F960 *)KeTlsGetValue(lbl_831BB900);

    if (data == 0) {
        if (KeTlsSetValue(lbl_831BB900, (void *)1) != 0) {
            data = (ThreadData_82F6F960 *)fn_82F6E1C8(1, sizeof(ThreadData_82F6F960));
            if (data != 0) {
                if (KeTlsSetValue(lbl_831BB900, data) != 0) {
                    data->errnoValue = 0;
                    data->multibyteInfo = lbl_8216A9E0;
                    data->randomSeed = 1;
                    data->threadId = fn_82A1BB18();
                    data->threadHandle = 0xffffffff;
                } else {
                    free(data);
                    data = 0;
                }
            } else {
                KeTlsSetValue(lbl_831BB900, 0);
            }
        }
    } else if (data == (ThreadData_82F6F960 *)1) {
        data = 0;
    }
    fn_82A2A370(error);
    return data;
}
