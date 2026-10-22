typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t n);

typedef struct internal_state {
    void *strm;
    int status;
    unsigned char *pending_buf;
    unsigned int pending_buf_size;
    unsigned char *pending_out;
    unsigned int pending;
} deflate_state;

typedef struct z_stream_s {
    unsigned char *next_in;
    unsigned int avail_in;
    unsigned int total_in;
    unsigned char *next_out;
    unsigned int avail_out;
    unsigned int total_out;
    char *msg;
    deflate_state *state;
} z_stream;

void fn_82F89D68(z_stream *strm)
{
    unsigned len = strm->state->pending;

    if (len > strm->avail_out) len = strm->avail_out;
    if (len == 0) return;

    memcpy(strm->next_out, strm->state->pending_out, len);
    strm->next_out += len;
    strm->state->pending_out += len;
    strm->total_out += len;
    strm->avail_out -= len;
    strm->state->pending -= len;
    if (strm->state->pending == 0) {
        strm->state->pending_out = strm->state->pending_buf;
    }
}
