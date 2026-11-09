typedef unsigned char Byte;
typedef unsigned char uch;
typedef unsigned short ush;
typedef unsigned long ulg;
typedef struct {
    char pad0[8];
    Byte *pending_buf;
    char pad1[8];
    unsigned long pending;
    char pad2[0x1694];
    int last_eob_len;
    ush bi_buf;
    char pad3[2];
    int bi_valid;
} deflate_state_829C1C10;

#define Buf_size 16
#define put_byte(s, c) { s->pending_buf[s->pending++] = (Byte)(c); }
#define put_short(s, w) { put_byte(s, (uch)((w) & 0xff)); put_byte(s, (uch)((ush)(w) >> 8)); }
#define send_bits(s, value, length) \
{ int len = length; \
  if (s->bi_valid > (int)Buf_size - len) { \
    int val = value; \
    s->bi_buf |= (val << s->bi_valid); \
    put_short(s, s->bi_buf); \
    s->bi_buf = (ush)val >> (Buf_size - s->bi_valid); \
    s->bi_valid += len - Buf_size; \
  } else { \
    s->bi_buf |= (value) << s->bi_valid; \
    s->bi_valid += len; \
  } \
}

static __forceinline void bi_windup(deflate_state_829C1C10 *s)
{
    if (s->bi_valid > 8) {
        put_short(s, s->bi_buf);
    } else if (s->bi_valid > 0) {
        put_byte(s, s->bi_buf);
    }
    s->bi_buf = 0;
    s->bi_valid = 0;
}

static __forceinline void copy_block(deflate_state_829C1C10 *s, Byte *buf, unsigned len, int header)
{
    bi_windup(s);
    s->last_eob_len = 8;
    if (header) {
        put_short(s, (ush)len);
        put_short(s, (ush)~len);
    }
    while (len--) {
        put_byte(s, *buf++);
    }
}

void d3dx__tr_stored_block(deflate_state_829C1C10 *s, Byte *buf, ulg stored_len, int last)
{
    send_bits(s, (0 << 1) + last, 3);
    copy_block(s, buf, (unsigned)stored_len, 1);
}
