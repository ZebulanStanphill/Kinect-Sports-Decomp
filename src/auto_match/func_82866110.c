extern unsigned int fn_82A29B68(void *file, unsigned int offset, int *high, int method);
extern int fn_82A2A108(void *file, void *buf, unsigned int size, unsigned int *read, void *overlapped);

typedef struct File_82866110 {
    void *handle;
} File_82866110;

int fn_82866110(File_82866110 *f, void *buf, unsigned int offset, unsigned int size, unsigned int *read)
{
    if (fn_82A29B68(f->handle, offset, 0, 0) != offset) {
        return 2;
    }
    return (fn_82A2A108(f->handle, buf, size, read, 0) == 0) + 1;
}
