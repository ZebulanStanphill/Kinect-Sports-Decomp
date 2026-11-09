typedef struct {
    unsigned char *next_in;
    unsigned int avail_in;
    unsigned int total_in;
    unsigned char *next_out;
    unsigned int avail_out;
    unsigned int total_out;
    char *msg;
    void *state;
    void *zalloc;
    void *zfree;
    void *opaque;
    int data_type;
    unsigned int adler;
    unsigned int reserved;
} z_stream_826E6BC8;
extern void *fn_826E6BB0(void *opaque, unsigned int items, unsigned int size);
extern void fn_826E6BC0(void *opaque, void *address);
extern int inflateInit_(z_stream_826E6BC8 *strm, const char *version, int stream_size);

int fn_826E6BC8(z_stream_826E6BC8 *strm, void *opaque, unsigned char *out, unsigned int outSize)
{
    strm->opaque = opaque;
    strm->next_out = out;
    strm->avail_out = outSize;
    strm->zalloc = (void *)fn_826E6BB0;
    strm->next_in = 0;
    strm->zfree = (void *)fn_826E6BC0;
    strm->avail_in = 0;
    strm->data_type = 0;
    strm->adler = 0;
    strm->reserved = 0;
    return inflateInit_(strm, "1.2.3", 0x38);
}
