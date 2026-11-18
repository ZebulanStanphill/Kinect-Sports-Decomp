extern void *fn_82A29DE8(const char *name, unsigned int access, unsigned int share, void *security,
                         unsigned int disposition, unsigned int attributes, void *templateFile);
extern int fn_82A2A108(void *file, void *buffer, unsigned int size, unsigned int *bytesRead,
                       void *overlapped);
extern int fn_82A1E658(void *handle);
extern void XMemSet(void *dest, int value, unsigned int size);
extern int fn_82F67FE8(const char *text, const char *format, ...);

int fn_829D3930(const char *path)
{
    int hr = 0;
    void *file;
    char text[0x80];

    file = fn_82A29DE8(path, 0x80000000, 1, 0, 3, 0, 0);
    if (file == (void *)-1) {
        hr = 0x80004005;
    } else {
        {
            unsigned int bytesRead;

            XMemSet(text, 0, 0x80);
            if (fn_82A2A108(file, text, 0x7f, &bytesRead, 0) == 0) {
                hr = 0x80004005;
            }
        }
        fn_82A1E658(file);
        if (hr >= 0) {
            int major;
            int minor;
            int build;

            major = -1;
            minor = -1;
            build = -1;
            if (fn_82F67FE8(text, "%d.%d.%d", &major, &minor, &build) != 3 || major != 1) {
                hr = 0x8301000e;
            }
        }
    }
    return hr;
}
