typedef struct Header_82E1F9D0 {
    unsigned int value; /* 0x00 */
    char name[28];      /* 0x04 */
} Header_82E1F9D0;

extern int fn_82A29DE8(const char *path, unsigned int access, unsigned int share, void *security,
                       unsigned int disposition, unsigned int flags, int templateFile);
extern int fn_82A2A108(int file, void *buffer, unsigned int size, unsigned int *read, void *overlapped);
extern void fn_82A1E658(int file);
extern int stricmp(const char *first, const char *second);

int fn_82E1F9D0(unsigned int *self, const char *path)
{
    Header_82E1F9D0 header;
    unsigned int read;
    int file;
    if (path != 0 && (file = fn_82A29DE8(path, 0x80000000, 1, 0, 3, 0x80, 0)) != -1) {
        if (fn_82A2A108(file, &header, 0x20, &read, 0) == 0) {
            fn_82A1E658(file);
        } else {
            if (stricmp(header.name, (const char *)self[6]) == 0) {
                self[0] = header.value;
            }
            fn_82A1E658(file);
            return 0;
        }
    }
    return 0x80004005;
}
