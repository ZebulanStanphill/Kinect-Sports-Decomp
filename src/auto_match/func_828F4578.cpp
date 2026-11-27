struct Include_828F4578 {
    virtual int Open(void *parentData, const char *fileName, int includeType, const char **data,
                     unsigned int *size, char *fullPath, unsigned int fullPathSize);
};

typedef struct FileMap_828F4578 {
    void *handle;      /* 0x00 */
    const char *data;  /* 0x04 */
    unsigned int size; /* 0x08 */
} FileMap_828F4578;

typedef struct Source_828F4578 {
    char pad00[0x3c];
    FileMap_828F4578 map;      /* 0x3c */
    Include_828F4578 *include; /* 0x48 */
    char *fileName;            /* 0x4c */
    char *directory;           /* 0x50 */
    const char *data;          /* 0x54 */
    unsigned int size;         /* 0x58 */
} Source_828F4578;

extern "C" {
extern unsigned int strlen(const char *value);
extern void *memcpy(void *out, const void *input, unsigned int size);
extern int fn_82A2A378(unsigned int codePage, unsigned int flags, const unsigned short *src, int srcLen,
                       char *dst, int dstSize, const char *defaultChar, int *usedDefault);
extern char *fn_829301D0(void *allocator, unsigned int size, int align);
extern int fn_828F4498(Source_828F4578 *self, void *allocator, const char *path);
extern int fn_82920540(FileMap_828F4578 *map, const char *fileName, int flags);
extern void fn_828FA8D8(void *log, void *location, int code, const char *format, ...);
extern int fn_828F9D90(Source_828F4578 *self, const char *data, unsigned int size, char *fileName, int flags,
                       void *allocator, void *log);
}

/* Opens a source file for the shader preprocessor, through the include handler when there is one. */
extern "C" int fn_828F4578(Source_828F4578 *self, const char *fileName, int isWide, void *allocator,
                           void *location, void *log, Include_828F4578 *include, void *parentData,
                           int includeType)
{
    char fullPath[0x104];
    char converted[0x104];
    unsigned int size;
    int result;

    self->include = include;
    if (isWide) {
        fn_82A2A378(0xfde9, 0, (const unsigned short *)fileName, -1, converted, 0x104, 0, 0);
        fileName = converted;
    }
    if (self->include) {
        size = strlen(fileName) + 1;
        self->fileName = fn_829301D0(allocator, size, 1);
        if (!self->fileName) {
            return 0x8007000e;
        }
        memcpy(self->fileName, fileName, size);
        fullPath[0] = 0;
        result = self->include->Open(parentData, self->fileName, includeType, &self->data, &self->size,
                                     fullPath, 0x104);
        if (result < 0) {
            fn_828FA8D8(log, location, 0x5e3, "failed to open source file: '%s'", fileName);
            goto done;
        }
        if (fullPath[0]) {
            char *copy;

            fullPath[0x103] = 0;
            size = strlen(fullPath) + 1;
            copy = fn_829301D0(allocator, size, 1);
            if (!copy) {
                return 0x8007000e;
            }
            memcpy(copy, fullPath, size);
            self->fileName = copy;
        }
    } else {
        result = fn_828F4498(self, allocator, fileName);
        if (result < 0) {
            goto done;
        }
        result = fn_82920540(&self->map, self->fileName, 0);
        if (result < 0) {
            fn_828FA8D8(log, location, 0x5e3, "failed to open source file: '%s'", fileName);
            return result;
        }
        self->data = self->map.data;
        self->size = self->map.size;
    }
    result = fn_828F9D90(self, self->data, self->size, self->fileName, 1, allocator, log);
done:
    return result;
}
