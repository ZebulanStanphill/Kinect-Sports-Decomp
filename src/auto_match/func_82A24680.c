typedef struct FindData_82A24680 {
    char header[44]; /* 0x00 */
    char name[276];  /* 0x2c */
} FindData_82A24680;

extern unsigned int strlen(const char *);
extern int RtlCompareStringN(const char *, unsigned int, const char *, unsigned int, int);
extern int fn_82A2A438(const char *, FindData_82A24680 *);
extern int fn_82A35B80(int, FindData_82A24680 *);
extern void fn_82A1E658(int);
extern unsigned int fn_82A21508(void *, void (*)(void), const char *);
extern void fn_82A245B8(void);
extern int fn_82F664B0(char *, unsigned int, const char *);
extern int fn_82F69A80(char *, unsigned int, const char *);
extern int fn_82A2A958(const char *);
extern void fn_82A1CFC8(void);

unsigned int fn_82A24680(void *self)
{
    FindData_82A24680 data;
    char path[260];
    int handle = fn_82A2A438("cache:\\$cache$\\*.*", &data);
    if (handle != -1) {
        do {
            if (RtlCompareStringN(data.name, strlen(data.name), "dir", 3, 1) != 0 &&
                RtlCompareStringN(data.name, strlen(data.name), "spc", 3, 1) != 0 &&
                fn_82A21508(self, fn_82A245B8, data.name) == 0) {
                fn_82A1E658(handle);
                fn_82F664B0(path, 260, "cache:\\$cache$\\");
                fn_82F69A80(path, 260, data.name);
                fn_82A2A958(path);
                fn_82A1CFC8();
                return 0;
            }
        } while (fn_82A35B80(handle, &data));
        fn_82A1E658(handle);
    }
    return 1;
}
