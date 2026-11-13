typedef double jmp_buf[168];
int _setjmp(jmp_buf env);
extern int jpeg_read_header(void *cinfo, unsigned char require_image);
extern void jpeg_destroy_decompress(void *cinfo);
extern unsigned char jpeg_start_decompress(void *cinfo);

typedef struct Cinfo_826EA608 {
    char pad0[0x14];
    int global_state;
} Cinfo_826EA608;

typedef struct Reader_826EA608 {
    int pad0[2];
    Cinfo_826EA608 cinfo;
    char pad20[0x304 - 0x20];
    jmp_buf *env;
    unsigned char ready;
    unsigned char failed;
} Reader_826EA608;

int fn_826EA608(Reader_826EA608 *self)
{
    unsigned char ready;
    int result;

    if (self->failed) {
        return 0;
    }
    if (_setjmp(*self->env)) {
        jpeg_destroy_decompress(&self->cinfo);
        ready = 0;
        result = 0;
        self->failed = 1;
    } else {
        if (self->cinfo.global_state != 0xca) {
            jpeg_read_header(&self->cinfo, 1);
        }
        jpeg_start_decompress(&self->cinfo);
        ready = 1;
        result = 1;
    }
    self->ready = ready;
    return result;
}
