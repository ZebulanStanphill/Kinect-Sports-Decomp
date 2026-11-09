typedef unsigned char Byte;
typedef Byte Bytef;
typedef unsigned short ush;
typedef ush Posf;
typedef unsigned int uInt;
typedef unsigned IPos;

typedef struct deflate_state_82F8AAE8 {
    char pad0[0x2c];
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

uInt longest_match(deflate_state *s, IPos cur_match)
{
    unsigned chain_length = s->max_chain_length;
    register Bytef *scan = s->window + s->strstart;
    register Bytef *match;
    register int len;
    int best_len = s->prev_length;
    int nice_match = s->nice_match;
    IPos limit = s->strstart > (IPos)MAX_DIST(s) ? s->strstart - (IPos)MAX_DIST(s) : 0;
    Posf *prev = s->prev;
    uInt wmask = s->w_mask;
    register Bytef *strend = s->window + s->strstart + 258;
    register Byte scan_end1 = scan[best_len-1];
    register Byte scan_end = scan[best_len];

    if (s->prev_length >= s->good_match) {
        chain_length >>= 2;
    }
    if ((uInt)nice_match > s->lookahead) nice_match = s->lookahead;

    do {
        match = s->window + cur_match;
        if (match[best_len] != scan_end ||
            match[best_len-1] != scan_end1 ||
            *match != *scan ||
            *++match != scan[1]) continue;
        scan += 2, match++;
        do {
        } while (*++scan == *++match && *++scan == *++match &&
                 *++scan == *++match && *++scan == *++match &&
                 *++scan == *++match && *++scan == *++match &&
                 *++scan == *++match && *++scan == *++match &&
                 scan < strend);
        len = 258 - (int)(strend - scan);
        scan = strend - 258;
        if (len > best_len) {
            s->match_start = cur_match;
            best_len = len;
            if (len >= nice_match) break;
            scan_end1 = scan[best_len-1];
            scan_end = scan[best_len];
        }
    } while ((cur_match = prev[cur_match & wmask]) > limit
             && --chain_length != 0);

    if ((uInt)best_len <= s->lookahead) return (uInt)best_len;
    return s->lookahead;
}
