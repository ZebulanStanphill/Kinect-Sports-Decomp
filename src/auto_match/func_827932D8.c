typedef struct { short *begin; short *cur; short *end; int x0c; unsigned char flag; } Buf;
typedef struct { int owner; int x4; Buf buf; int x1c; int x20; int x24; unsigned char done; } Self;
extern void fn_82791560(Buf *b);

Self *fn_827932D8(Self *s, int owner, short *data, int count)
{
    Buf *b;
    s->owner = owner;
    s->x4 = 0;
    b = &s->buf;
    b->begin = data;
    b->cur = data;
    b->end = data + count;
    b->x0c = 0;
    b->flag = 0;
    fn_82791560(b);
    s->x1c = 0;
    s->x20 = 0;
    s->x24 = 0;
    s->done = 0;
    return s;
}
