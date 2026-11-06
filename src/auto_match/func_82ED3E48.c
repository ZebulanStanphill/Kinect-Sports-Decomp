typedef struct Copier_82ED3E48 Copier_82ED3E48;
typedef void (*CopyFn_82ED3E48)(Copier_82ED3E48 *self, unsigned char *dst, unsigned char *src, int flags, int stride);

typedef struct {
    void *slot0;
    CopyFn_82ED3E48 copyChroma;
    CopyFn_82ED3E48 copyLuma;
} CopierVtbl_82ED3E48;

struct Copier_82ED3E48 {
    CopierVtbl_82ED3E48 *vt;
};

typedef struct {
    int unk0;
    int unk4;
    unsigned char *buf;
    char padC[0x4018 - 0xc];
    int size;
    int unk401C;
    unsigned int width;
    unsigned int height;
} Frame_82ED3E48;

extern Copier_82ED3E48 *lbl_83248EC4;
extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);

void fn_82ED3E48(Frame_82ED3E48 *f, unsigned char *y, unsigned char *u, unsigned char *v)
{
    int rows = (f->height + 15) >> 4;
    int cols = (f->width + 15) >> 4;
    int cw = (f->width + 1) >> 1;
    unsigned char *dy;
    unsigned char *du;
    unsigned char *dv;
    int i;
    int j;
    int w;
    int h;
    if (f->buf != 0) {
        fn_8265C990(f->buf, 0x248c8000);
        f->buf = 0;
    }
    dy = f->buf = (unsigned char *)fn_8265C940((f->size >> 2) * 3, 0x248c8000);
    du = dy + (f->size >> 2);
    dv = dy + (f->size >> 1);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (j == cols - 1) {
                w = f->width - cols * 16 + 16;
            } else {
                w = 16;
            }
            if (i == rows - 1) {
                h = f->height - rows * 16 + 16;
            } else {
                h = 16;
            }
            if (w == 16 && h == 16) {
                lbl_83248EC4->vt->copyLuma(lbl_83248EC4, dy, y, 0, f->width);
                lbl_83248EC4->vt->copyChroma(lbl_83248EC4, du, u, 0, cw);
                lbl_83248EC4->vt->copyChroma(lbl_83248EC4, dv, v, 0, cw);
            } else {
                *dy = *y;
                *du = *u;
                *dv = *v;
            }
            y += w;
            u += w >> 1;
            v += w >> 1;
            dy++;
            du++;
            dv++;
        }
        u += cw * 7;
        v += cw * 7;
        y += f->width * 15;
    }
}
