extern unsigned int strlen(const char *value);
extern char *strncpy(char *out, const char *input, unsigned int size);
extern char *strrchr(const char *value, int character);
extern void *memcpy(void *out, const void *input, unsigned int size);
extern char *fn_829301D0(void *allocator, unsigned int size, int align);

typedef struct Paths_828F4498 {
    char pad[0x4c];
    char *fullPath;  /* 0x4c */
    char *directory; /* 0x50 */
} Paths_828F4498;

int fn_828F4498(Paths_828F4498 *self, void *allocator, const char *path)
{
    int result = 0;
    unsigned int length = strlen(path);
    unsigned int size = length + 1;
    self->directory = fn_829301D0(allocator, size, 1);
    if (!self->directory) {
        result = 0x8007000e;
    } else {
        self->fullPath = fn_829301D0(allocator, size, 1);
        if (!self->fullPath) {
            result = 0x8007000e;
        } else {
            char *separator;
            strncpy(self->directory, path, size);
            separator = strrchr(self->directory, '\\');
            if (separator) {
                separator++;
            }
            self->directory[length] = 0;
            memcpy(self->fullPath, self->directory, size);
            if (separator) {
                *separator = 0;
            }
        }
    }
    return result;
}
