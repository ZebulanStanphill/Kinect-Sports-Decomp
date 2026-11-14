typedef struct Loader_826E5600 Loader_826E5600;
typedef struct LoaderVtbl_826E5600 {
    void *pad0;
    void *(*load)(Loader_826E5600 *self, const char *name);
} LoaderVtbl_826E5600;
struct Loader_826E5600 {
    LoaderVtbl_826E5600 *vt;
};

typedef struct Log_826E5600 {
    char pad0[0xc];
    char sink[4];           /* 0xc */
} Log_826E5600;

extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void fn_8267C498(void *image);
extern void *fn_826E4B08(void);
extern void fn_826E4CA8(void *sink, const char *fmt, ...);
extern void *fn_826E4D70(void *mem, void *image, int owns);

void *fn_826E5600(const char *name, Loader_826E5600 *loader, Log_826E5600 *log, void *heap)
{
    void *image;
    void *result;
    void *mem;

    if (loader == 0 || (image = loader->vt->load(loader, name)) == 0) {
        if (log != 0)
            fn_826E4CA8(log->sink, "Could not load user image \"%s\" - GFxImageLoader failed or not specified\n", name);
        image = fn_826E4B08();
        if (image == 0)
            goto fail;
    }
    mem = fn_8267B890(heap, 0x1c, 0);
    if (mem != 0) {
        result = fn_826E4D70(mem, image, 1);
    } else {
fail:
        result = 0;
    }
    if (image != 0)
        fn_8267C498(image);
    return result;
}
