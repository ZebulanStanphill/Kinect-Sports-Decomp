typedef unsigned char Byte;
typedef Byte Bytef;
typedef unsigned short ush;
typedef ush Posf;
typedef unsigned int uInt;
typedef unsigned IPos;

typedef struct z_stream_82F8AF90 { char pad0[0x10]; uInt avail_out; } z_stream;
typedef unsigned long ulg;
typedef char charf;
typedef struct deflate_state_82F8AF90 {
    z_stream *strm;
    int status;
    Bytef *pending_buf;
    ulg pending_buf_size;
    char pad10[0x2c - 0x10];
    uInt w_size;
    uInt w_bits;
    uInt w_mask;
    Bytef *window;
    unsigned long window_size;
    Posf *prev;
    Posf *head;
    uInt ins_h;
    uInt hash_size;
    uInt hash_bits;
    uInt hash_mask;
    uInt hash_shift;
    long block_start;
    uInt match_length;
    IPos prev_match;
    int match_available;
    uInt strstart;
    uInt match_start;
    uInt lookahead;
    uInt prev_length;
    uInt max_chain_length;
    uInt max_lazy_match;
    int level;
    int strategy;
    uInt good_match;
    int nice_match;
} deflate_state;

#define MIN_LOOKAHEAD (258 + 3 + 1)
#define MAX_DIST(s) ((s)->w_size - MIN_LOOKAHEAD)


extern void fill_window(deflate_state *);
extern void flush_pending(z_stream *);
extern void _tr_flush_block(deflate_state *, charf *, ulg, int);

#define FLUSH_BLOCK_ONLY(s, eof) { \
   _tr_flush_block(s, (s->block_start >= 0L ? (charf *)&s->window[(unsigned)s->block_start] : (charf *)0), \
                (ulg)((long)s->strstart - s->block_start), (eof)); \
   s->block_start = s->strstart; \
   flush_pending(s->strm); \
}
#define FLUSH_BLOCK(s, eof) { \
   FLUSH_BLOCK_ONLY(s, eof); \
   if (s->strm->avail_out == 0) return (eof) ? 2 : 0; \
}

int deflate_stored(deflate_state *s, int flush)
{
    ulg max_block_size = 0xffff;
    ulg max_start;

    if (max_block_size > s->pending_buf_size - 5) {
        max_block_size = s->pending_buf_size - 5;
    }

    for (;;) {
        if (s->lookahead <= 1) {
            fill_window(s);
            if (s->lookahead == 0 && flush == 0) return 0;
            if (s->lookahead == 0) break;
        }
        s->strstart += s->lookahead;
        s->lookahead = 0;

        max_start = s->block_start + max_block_size;
        if (s->strstart == 0 || (ulg)s->strstart >= max_start) {
            s->lookahead = (uInt)(s->strstart - max_start);
            s->strstart = (uInt)max_start;
            FLUSH_BLOCK(s, 0);
        }
        if (s->strstart - (uInt)s->block_start >= MAX_DIST(s)) {
            FLUSH_BLOCK(s, 0);
        }
    }
    FLUSH_BLOCK(s, flush == 4);
    return flush == 4 ? 3 : 1;
}
