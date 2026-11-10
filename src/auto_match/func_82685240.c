typedef struct Reader_82685240 Reader_82685240;
typedef struct ReaderVt_82685240 {
    void (*destroy)(Reader_82685240 *self, int flags);
    void *slot1;
    int (*open)(Reader_82685240 *self);
    void *slot3;
    void (*close)(Reader_82685240 *self);
    unsigned int (*height)(Reader_82685240 *self);
    unsigned int (*width)(Reader_82685240 *self);
    int (*readRow)(Reader_82685240 *self, unsigned char *row);
    void *slot8;
    void *slot9;
    unsigned char (*failed)(Reader_82685240 *self);
} ReaderVt_82685240;
struct Reader_82685240 {
    ReaderVt_82685240 *vt;
};
typedef struct Source_82685240 Source_82685240;
typedef struct SourceVt_82685240 {
    void *slot0;
    Reader_82685240 *(*createReader)(Source_82685240 *self, void *arg);
} SourceVt_82685240;
struct Source_82685240 {
    SourceVt_82685240 *vt;
};
typedef struct Image_82685240 {
    int pad0[3];
    unsigned int width;
    int pad10;
    int stride;
    unsigned char *pixels;
} Image_82685240;
extern void *lbl_831E7E64;
extern unsigned char *fn_8267B890(void *heap, unsigned int size, int flags);
extern void fn_8267BE38(void *p);
extern void fn_8267C498(Image_82685240 *img);
extern Image_82685240 *fn_82680AC8(int format, unsigned int width, unsigned int height, void *arg);

Image_82685240 *fn_82685240(Source_82685240 *src, void *arg, void *arg2)
{
    Reader_82685240 *r;
    Image_82685240 *img;
    unsigned char *row;
    unsigned char *d;
    unsigned int width;
    unsigned int y;
    unsigned int x;

    r = src->vt->createReader(src, arg);
    if (r == 0) {
        return 0;
    }
    img = 0;
    if (r->vt->failed(r) == 0 && r->vt->open(r) != 0) {
        img = fn_82680AC8(1, r->vt->width(r), r->vt->height(r), arg2);
        if (img != 0) {
            width = img->width;
            row = fn_8267B890(lbl_831E7E64, width * 3, 0);
            for (y = 0; y < r->vt->height(r); y++) {
                if (r->vt->readRow(r, row) == 0) {
                    fn_8267C498(img);
                    img = 0;
                    break;
                }
                d = img->pixels + img->stride * y;
                for (x = 0; x < width; x++) {
                    d[x * 4 + 0] = row[x * 3 + 0];
                    d[x * 4 + 1] = row[x * 3 + 1];
                    d[x * 4 + 2] = row[x * 3 + 2];
                    d[x * 4 + 3] = 0xff;
                }
            }
            fn_8267BE38(row);
        }
        r->vt->close(r);
    }
    r->vt->destroy(r, 1);
    return img;
}
