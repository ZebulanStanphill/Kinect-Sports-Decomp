typedef double jmp_buf[168];
int _setjmp(jmp_buf env);
extern int jpeg_finish_decompress(void *cinfo);
extern void jpeg_destroy_decompress(void *cinfo);

typedef struct Cinfo_826EA898 {
    char pad0[0x18];
} Cinfo_826EA898;

typedef struct Reader_826EA898 {
    int pad0[2];
    Cinfo_826EA898 cinfo;
    char pad20[0x304 - 0x20];
    jmp_buf *env;
    unsigned char ready;
    unsigned char failed;
} Reader_826EA898;

int fn_826EA898(Reader_826EA898 *self)
{
    if (self->failed) {
        return 0;
    }
    if (self->ready) {
        if (_setjmp(*self->env)) {
            jpeg_destroy_decompress(&self->cinfo);
            self->ready = 0;
            self->failed = 1;
            return 0;
        }
        jpeg_finish_decompress(&self->cinfo);
        self->ready = 0;
    }
    return 1;
}
