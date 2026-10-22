typedef void *(*alloc_func)(void *opaque, unsigned int items, unsigned int size);
typedef void (*free_func)(void *opaque, void *address);

typedef struct z_stream_s {
    unsigned char *next_in;
    unsigned int avail_in;
    unsigned long total_in;
    unsigned char *next_out;
    unsigned int avail_out;
    unsigned long total_out;
    char *msg;
    struct inflate_state *state;
    alloc_func zalloc;
    free_func zfree;
    void *opaque;
    int data_type;
    unsigned long adler;
    unsigned long reserved;
} z_stream;

typedef struct {
    unsigned char op;
    unsigned char bits;
    unsigned short val;
} code;

struct inflate_state {
    int mode;
    int last;
    int wrap;
    int havedict;
    int flags;
    unsigned dmax;
    unsigned long check;
    unsigned long total;
    void *head;
    unsigned wbits;
    unsigned wsize;
    unsigned whave;
    unsigned write;
    unsigned char *window;
    unsigned long hold;
    unsigned bits;
    unsigned length;
    unsigned offset;
    unsigned extra;
    const code *lencode;
    const code *distcode;
    unsigned lenbits;
    unsigned distbits;
    unsigned ncode;
    unsigned nlen;
    unsigned ndist;
    unsigned have;
    code *next;
    unsigned short lens[320];
    unsigned short work[288];
    code codes[2048];
};

extern void *fn_827D3AA8(void *opaque, unsigned int items, unsigned int size);
extern void fn_827D3AB0(void *opaque, void *address);
extern int fn_827D1B48(z_stream *strm);

int fn_827D1C28(z_stream *strm, int windowBits, const char *version, int stream_size)
{
    struct inflate_state *state;

    if (version == 0 || version[0] != '1' || stream_size != (int)sizeof(z_stream))
        return -6;
    if (strm == 0)
        return -2;
    strm->msg = 0;
    if (strm->zalloc == (alloc_func)0) {
        strm->opaque = (void *)0;
        strm->zalloc = fn_827D3AA8;
    }
    if (strm->zfree == (free_func)0)
        strm->zfree = fn_827D3AB0;
    state = (struct inflate_state *)(*strm->zalloc)(strm->opaque, 1, sizeof(struct inflate_state));
    if (state == 0)
        return -4;
    strm->state = state;
    if (windowBits < 0) {
        state->wrap = 0;
        windowBits = -windowBits;
    } else {
        state->wrap = (windowBits >> 4) + 1;
        if (windowBits < 48)
            windowBits &= 15;
    }
    if (windowBits < 8 || windowBits > 15) {
        (*strm->zfree)(strm->opaque, state);
        strm->state = 0;
        return -2;
    }
    state->wbits = (unsigned)windowBits;
    state->window = 0;
    return fn_827D1B48(strm);
}
