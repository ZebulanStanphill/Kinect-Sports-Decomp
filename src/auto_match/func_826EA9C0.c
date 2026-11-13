typedef double jmp_buf[168];
int _setjmp(jmp_buf env);
extern void *jpeg_read_coefficients(void *cinfo);
extern void jpeg_destroy_decompress(void *cinfo);

typedef struct Cinfo_826EA9C0 {
    char pad0[0x18];
} Cinfo_826EA9C0;

typedef struct Reader_826EA9C0 {
    int pad0[2];
    Cinfo_826EA9C0 cinfo;
    char pad20[0x304 - 0x20];
    jmp_buf *env;
    unsigned char ready;
    unsigned char failed;
} Reader_826EA9C0;

int fn_826EA9C0(Reader_826EA9C0 *self, void **coefficients)
{
    if (self->failed) {
        return 0;
    }
    if (_setjmp(*self->env)) {
        jpeg_destroy_decompress(&self->cinfo);
        self->ready = 0;
        self->failed = 1;
        return 0;
    }
    *coefficients = jpeg_read_coefficients(&self->cinfo);
    return 1;
}
