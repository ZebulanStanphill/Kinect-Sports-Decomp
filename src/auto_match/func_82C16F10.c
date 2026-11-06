typedef struct {
    int f00;
    int f04;
    int f08;
    unsigned int bits;
    unsigned int bytes;
    int mode;
} Fmt_82C16F10;

int fn_82C16F10(Fmt_82C16F10 *f)
{
    int hr = 0;
    if (f->mode == 0) {
        if (f->bits != 16 && f->bits != 20 && f->bits != 24 && f->bits != 32) {
            hr = 0x80040000;
        } else if (f->bytes != 2 && f->bytes != 3 && f->bytes != 4) {
            hr = 0x80040000;
        }
    } else if (f->mode == 1) {
        if (f->bits != 32) {
            hr = 0x80040000;
        } else if (f->bytes != 4) {
            hr = 0x80040000;
        }
    } else {
        hr = 0x80040000;
    }
    if (hr >= 0 && f->bytes < (f->bits + 7) >> 3) {
        hr = 0x80040000;
    }
    return hr;
}
