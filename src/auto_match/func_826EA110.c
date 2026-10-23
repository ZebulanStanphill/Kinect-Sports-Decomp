typedef struct Stream Stream;
typedef struct StreamVtbl {
    void *f[10];
    unsigned int (*Read)(Stream *s, void *buf, unsigned int n);
} StreamVtbl;
struct Stream { StreamVtbl *vtbl; };

typedef struct Src {
    unsigned char *next_input_byte;
    unsigned int bytes_in_buffer;
    void *pub[5];
    Stream *stream;
    unsigned char start_of_file;
    unsigned char buffer[0x800];
} Src;

typedef struct Cinfo {
    int pad[6];
    Src *src;
} Cinfo;

unsigned char fn_826EA110(Cinfo *cinfo)
{
    Src *src = cinfo->src;
    unsigned int nbytes;

    nbytes = src->stream->vtbl->Read(src->stream, src->buffer, 0x800);
    if (nbytes == 0) {
        if (src->start_of_file)
            return 0;
        src->buffer[0] = 0xff;
        src->buffer[1] = 0xd9;
        nbytes = 2;
    }
    if (src->start_of_file && nbytes >= 4 && src->buffer[0] == 0xff &&
        src->buffer[1] == 0xd9 && src->buffer[2] == 0xff && src->buffer[3] == 0xd8) {
        src->buffer[3] = 0xd9;
        src->buffer[1] = 0xd8;
    }
    src->bytes_in_buffer = nbytes;
    src->next_input_byte = src->buffer;
    src->start_of_file = 0;
    return 1;
}
