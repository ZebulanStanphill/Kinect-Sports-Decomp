extern int NtCreateIoCompletion(void **out, unsigned int access, void *attributes);
extern int NtSetInformationFile(int file, void *status, void *info, unsigned int size, unsigned int type);
extern int NtClose(void *handle);
extern void fn_82A31F28(int status);

void *fn_8306C5D0(int file, void *port, unsigned int key)
{
    void *result = port;

    struct {
        void *port;
        unsigned int key;
    } completion;

    unsigned int status[2];
    int error;

    if (port == 0 && (error = NtCreateIoCompletion(&result, 0x1f0003, 0)) < 0) {
        fn_82A31F28(error);
        return 0;
    } else {
        if (file != -1) {
            completion.port = result;
            completion.key = key;
            error = NtSetInformationFile(file, status, &completion, 8, 30);
            if (error >= 0) {
                return result;
            }
            fn_82A31F28(error);
            if (port == 0) {
                NtClose(result);
            }
        } else {
            if (port != 0) {
                result = 0;
                fn_82A31F28(0xc000000d);
            }
            return result;
        }
    }
    return 0;
}
