/* Corresponds to zlib 1.2.3 deflate.c deflateReset (open-source zlib 1.2.3) with lm_init inlined: the upstream code with the declarations it uses, preprocessed, symbols renamed to the game's. */
typedef unsigned char  Byte;
typedef unsigned int   uInt;
typedef unsigned long  uLong;
typedef Byte   Bytef;
typedef char   charf;
typedef void    *voidpf;
typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);
typedef void   (*free_func)  (voidpf opaque, voidpf address);
typedef struct z_stream_s {
    Bytef    *next_in;
    uInt     avail_in;
    uLong    total_in;

    Bytef    *next_out;
    uInt     avail_out;
    uLong    total_out;

    char     *msg;
    struct internal_state  *state;

    alloc_func zalloc;
    free_func  zfree;
    voidpf     opaque;

    int     data_type;
    uLong   adler;
    uLong   reserved;
} z_stream;
typedef z_stream  *z_streamp;
typedef struct gz_header_s {
    int     text;
    uLong   time;
    int     xflags;
    int     os;
    Bytef   *extra;
    uInt    extra_len;
    uInt    extra_max;
    Bytef   *name;
    uInt    name_max;
    Bytef   *comment;
    uInt    comm_max;
    int     hcrc;
    int     done;

} gz_header;
typedef gz_header  *gz_headerp;
extern uLong  adler32 (uLong adler, const Bytef *buf, uInt len);
extern uLong  crc32   (uLong crc, const Bytef *buf, uInt len);
typedef unsigned int size_t;
void *memcpy(void *d, const void *s, size_t n);
void *memset(void *d, int c, size_t n);
typedef unsigned char  uch;
typedef uch  uchf;
typedef unsigned short ush;
typedef ush  ushf;
typedef unsigned long  ulg;
extern const char * const z_errmsg[10];
typedef struct ct_data_s {
    union {
        ush  freq;
        ush  code;
    } fc;
    union {
        ush  dad;
        ush  len;
    } dl;
}  ct_data;
typedef struct static_tree_desc_s  static_tree_desc;
typedef struct tree_desc_s {
    ct_data *dyn_tree;
    int     max_code;
    static_tree_desc *stat_desc;
}  tree_desc;
typedef ush Pos;
typedef Pos  Posf;
typedef unsigned IPos;
typedef struct internal_state {
    z_streamp strm;
    int   status;
    Bytef *pending_buf;
    ulg   pending_buf_size;
    Bytef *pending_out;
    uInt   pending;
    int   wrap;
    gz_headerp  gzhead;
    uInt   gzindex;
    Byte  method;
    int   last_flush;

    uInt  w_size;
    uInt  w_bits;
    uInt  w_mask;

    Bytef *window;

    ulg window_size;

    Posf *prev;

    Posf *head;

    uInt  ins_h;
    uInt  hash_size;
    uInt  hash_bits;
    uInt  hash_mask;

    uInt  hash_shift;

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

    struct ct_data_s dyn_ltree[(2*(256+1+29)+1)];
    struct ct_data_s dyn_dtree[2*30+1];
    struct ct_data_s bl_tree[2*19+1];

    struct tree_desc_s l_desc;
    struct tree_desc_s d_desc;
    struct tree_desc_s bl_desc;

    ush bl_count[15+1];

    int heap[2*(256+1+29)+1];
    int heap_len;
    int heap_max;

    uch depth[2*(256+1+29)+1];

    uchf *l_buf;

    uInt  lit_bufsize;

    uInt last_lit;

    ushf *d_buf;

    ulg opt_len;
    ulg static_len;
    uInt matches;
    int last_eob_len;

    ush bi_buf;

    int bi_valid;

}  deflate_state;
void _tr_flush_block  (deflate_state *s, charf *buf, ulg stored_len, int eof);
void _tr_align        (deflate_state *s);
void _tr_stored_block (deflate_state *s, charf *buf, ulg stored_len, int eof);
extern const uch _length_code[];
extern const uch _dist_code[];
typedef enum {
    need_more,
    block_done,
    finish_started,
    finish_done
} block_state;
typedef block_state (*compress_func) (deflate_state *s, int flush);
void flush_pending  (z_streamp strm);
typedef struct config_s {
   ush good_length;
   ush max_lazy;
   ush nice_length;
   ush max_chain;
   compress_func func;
} config;
extern const config configuration_table[10];
struct static_tree_desc_s {int dummy;};


void _tr_init         (deflate_state *s);

int deflateReset (strm)
    z_streamp strm;
{
    deflate_state *s;

    if (strm == 0 || strm->state == 0 ||
        strm->zalloc == (alloc_func)0 || strm->zfree == (free_func)0) {
        return (-2);
    }

    strm->total_in = strm->total_out = 0;
    strm->msg = 0;
    strm->data_type = 2;

    s = (deflate_state *)strm->state;
    s->pending = 0;
    s->pending_out = s->pending_buf;

    if (s->wrap < 0) {
        s->wrap = -s->wrap;
    }
    s->status = s->wrap ? 42 : 113;
    strm->adler =
        s->wrap == 2 ? crc32(0L, 0, 0) :
        adler32(0L, 0, 0);
    s->last_flush = 0;

    _tr_init(s);
    /* lm_init(s), written out */
    s->window_size = (ulg)2L*s->w_size;

    s->head[s->hash_size-1] = 0; memset((Bytef *)s->head, 0, (unsigned)(s->hash_size-1)*sizeof(*s->head));

    s->max_lazy_match   = configuration_table[s->level].max_lazy;
    s->good_match       = configuration_table[s->level].good_length;
    s->nice_match       = configuration_table[s->level].nice_length;
    s->max_chain_length = configuration_table[s->level].max_chain;

    s->strstart = 0;
    s->block_start = 0L;
    s->lookahead = 0;
    s->match_length = s->prev_length = 3-1;
    s->match_available = 0;
    s->ins_h = 0;

    return 0;
}
