typedef struct Stream_82684338 Stream_82684338;

typedef struct StreamVtable_82684338 {
    void (*destroy)(Stream_82684338 *);        /* 0x00 */
    const char *(*getName)(Stream_82684338 *); /* 0x04 */
} StreamVtable_82684338;

struct Stream_82684338 {
    StreamVtable_82684338 *vtable; /* 0x00 */
};
typedef struct Loader_82684338 Loader_82684338;

typedef struct LoaderVtable_82684338 {
    void (*destroy)(Loader_82684338 *);                          /* 0x00 */
    void *(*png)(Loader_82684338 *, Stream_82684338 *, void *);  /* 0x04 */
    void *(*jpeg)(Loader_82684338 *, Stream_82684338 *, void *); /* 0x08 */
} LoaderVtable_82684338;

struct Loader_82684338 {
    LoaderVtable_82684338 *vtable; /* 0x00 */
};

extern void *fn_82680B50(Stream_82684338 *, int, void *);
extern void *fn_82681320(Stream_82684338 *, void *);
extern void fn_82683FF8(void *, const char *, ...);

void *fn_82684338(Stream_82684338 *stream, int format, int type, char *log, Loader_82684338 *jpeg,
                  Loader_82684338 *png, void *options)
{
    void *result = 0;
    const char *name = stream->vtable->getName(stream);
    switch (format) {
    case 14:
        result = fn_82681320(stream, options);
        break;
    case 13:
        result = fn_82680B50(stream, type == 3 ? 9 : 0, options);
        break;
    case 11:
        if (png == 0) {
            if (log != 0) {
                fn_82683FF8(log + 12, "Unable to load PNG at URL \"%s\" - GFxPNGState not set\n", name);
            }
        } else {
            result = png->vtable->png(png, stream, options);
        }
        break;
    case 10:
        if (jpeg == 0) {
            if (log != 0) {
                fn_82683FF8(log + 12, "Unable to load JPEG at URL \"%s\" - libjpeg not included\n", name);
            }
        } else {
            result = jpeg->vtable->jpeg(jpeg, stream, options);
        }
        break;
    default:
        if (log != 0) {
            fn_82683FF8(log + 12, "Default image loader failed to load '%s'", name);
        }
        break;
    }
    return result;
}
