typedef double jmp_buf[168];
int _setjmp(jmp_buf env);
extern unsigned int jpeg_read_scanlines(void *cinfo, unsigned char **scanlines, unsigned int max_lines);
extern void jpeg_destroy_decompress(void *cinfo);

typedef struct Cinfo_826EA930 {
    char pad0[0x18];
} Cinfo_826EA930;

typedef struct Reader_826EA930 {
    int pad0[2];
    Cinfo_826EA930 cinfo;
    char pad20[0x304 - 0x20];
    jmp_buf *env;
    unsigned char ready;
    unsigned char failed;
} Reader_826EA930;

int fn_826EA930(Reader_826EA930 *self, unsigned char *row)
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
    jpeg_read_scanlines(&self->cinfo, &row, 1);
    return 1;
}
