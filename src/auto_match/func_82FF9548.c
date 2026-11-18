typedef struct File_82FF9548 {
    char pad0[0x10];
    void *buffer;        /* 0x10 */
    unsigned int size;   /* 0x14 */
    int handle;          /* 0x18 */
    unsigned char owned; /* 0x1c */
} File_82FF9548;

typedef struct Reader_82FF9548 {
    int pad0;
    char stream[4]; /* 0x04 */
} Reader_82FF9548;

extern int fn_82FA5538(int arg, unsigned int a, unsigned int b, int mode, int flags);
extern int fn_82FA4F60(int handle);
extern int fn_82FA4F18(int handle);
extern void *fn_82FA52E8(int handle);
extern void *fn_82FA5060(int handle, unsigned int size);
extern int fn_82FF86F0(void *stream, void *buffer, unsigned int size, unsigned int *read);

int fn_82FF9548(Reader_82FF9548 *self, unsigned int size, File_82FF9548 *file)
{
    int result;
    unsigned int read;

    if (size == 0) {
        return 1;
    }
    if (file->handle == -1) {
        file->handle = fn_82FA5538(0, size, size, 0xb, 0x800);
        if (file->handle != -1) {
            file->owned = 1;
        } else {
            return 2;
        }
    }
    result = fn_82FA4F60(file->handle);
    if (result == 1) {
        if ((fn_82FA4F18(file->handle) & 8) != 0) {
            file->buffer = fn_82FA52E8(file->handle);
        } else {
            file->buffer = fn_82FA5060(file->handle, size);
        }
        if (file->buffer == 0) {
            return 2;
        }
        file->size = size;
        read = 0;
        result = fn_82FF86F0(self->stream, file->buffer, size, &read);
        if (result == 1 && read != size) {
            result = 7;
        }
    }
    return result;
}
